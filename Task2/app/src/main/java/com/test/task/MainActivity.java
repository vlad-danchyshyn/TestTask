package com.test.task;

import android.os.Handler;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import java.util.Arrays;
import java.util.concurrent.TimeUnit;


public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("native-lib");
    }

    Button cell1;
    Button cell2;
    Button cell3;
    Button cell4;
    Button cell5;
    Button cell6;
    Button cell7;
    Button cell8;
    Button cell9;
    Button cell10;
    Button cell11;
    Button cell12;
    Button cell13;
    Button cell14;
    Button cell15;
    Button cell16;
    Button mixBt;
    Handler h;
    TextView tv;
    int numInt[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,0,15};
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tv = (TextView) findViewById(R.id.textView);
        cell1 = (Button)findViewById(R.id.first_cell);
        cell2 = (Button)findViewById(R.id.second_cell);
        cell3 = (Button)findViewById(R.id.third_cell);
        cell4 = (Button)findViewById(R.id.fourth_cell);
        cell5 = (Button)findViewById(R.id.fifth_cell);
        cell6 = (Button)findViewById(R.id.sixth_cell);
        cell7 = (Button)findViewById(R.id.seventh_cell);
        cell8 = (Button)findViewById(R.id.eighth_cell);
        cell9 = (Button)findViewById(R.id.ninth_cell);
        cell10 = (Button)findViewById(R.id.tenth_cell);
        cell11 = (Button)findViewById(R.id.eleven_cell);
        cell12 = (Button)findViewById(R.id.twelve_cell);
        cell13 = (Button)findViewById(R.id.thirteen_cell);
        cell14 = (Button)findViewById(R.id.fourteen_cell);
        cell15 = (Button)findViewById(R.id.fifteen_cell);
        cell16 = (Button)findViewById(R.id.sixteen_cell);
        mixBt = (Button)findViewById(R.id.bt_mix);
        render();
        numInt = mix(numInt);
        h = new Handler();
        h.removeCallbacks(updater);
        h.postDelayed(updater, 100);
        View.OnClickListener onClickListener = new View.OnClickListener(){


            @Override
            public void onClick(View view) {
                switch(view.getId()){
                    case R.id.first_cell:
                        numInt = stringFromJNI(0,numInt);
                        break;
                    case R.id.second_cell:
                        numInt = stringFromJNI(1,numInt);
                        break;
                    case R.id.third_cell:
                        numInt = stringFromJNI(2,numInt);
                        break;
                    case R.id.fourth_cell:
                        numInt = stringFromJNI(3,numInt);
                        break;
                    case R.id.fifth_cell:
                        numInt = stringFromJNI(4,numInt);
                        break;
                    case R.id.sixth_cell:
                        numInt = stringFromJNI(5,numInt);
                        break;
                    case R.id.seventh_cell:
                        numInt = stringFromJNI(6,numInt);
                        break;
                    case R.id.eighth_cell:
                        numInt = stringFromJNI(7,numInt);
                        break;
                    case R.id.ninth_cell:
                        numInt = stringFromJNI(8,numInt);
                        break;
                    case R.id.tenth_cell:
                        numInt = stringFromJNI(9,numInt);
                        break;
                    case R.id.eleven_cell:
                        numInt = stringFromJNI(10,numInt);
                        break;
                    case R.id.twelve_cell:
                        numInt = stringFromJNI(11,numInt);
                        break;
                    case R.id.thirteen_cell:
                        numInt = stringFromJNI(12,numInt);
                        break;
                    case R.id.fourteen_cell:
                        numInt = stringFromJNI(13,numInt);
                        break;
                    case R.id.fifteen_cell:
                        numInt = stringFromJNI(14,numInt);
                        break;
                    case R.id.sixteen_cell:
                        numInt = stringFromJNI(15,numInt);
                        break;
                    case R.id.bt_mix:
                        numInt = mix(numInt);
                        tv.setText("");
                        break;
                }

            }
        };

        cell1.setOnClickListener(onClickListener);
        cell2.setOnClickListener(onClickListener);
        cell3.setOnClickListener(onClickListener);
        cell4.setOnClickListener(onClickListener);
        cell5.setOnClickListener(onClickListener);
        cell6.setOnClickListener(onClickListener);
        cell7.setOnClickListener(onClickListener);
        cell8.setOnClickListener(onClickListener);
        cell9.setOnClickListener(onClickListener);
        cell10.setOnClickListener(onClickListener);
        cell11.setOnClickListener(onClickListener);
        cell12.setOnClickListener(onClickListener);
        cell13.setOnClickListener(onClickListener);
        cell14.setOnClickListener(onClickListener);
        cell15.setOnClickListener(onClickListener);
        cell16.setOnClickListener(onClickListener);
        mixBt.setOnClickListener(onClickListener);
    }
    private Runnable updater = new Runnable() {
        public void run() {
            render();
            h.postDelayed(this, 200);
        }
    };

    public void render(){
        if(checkWin(numInt)) {
            tv.setText("you win!");
        }
        cell1.setText(Integer.toString(numInt[0]));
        cell2.setText(Integer.toString(numInt[1]));
        cell3.setText(Integer.toString(numInt[2]));
        cell4.setText(Integer.toString(numInt[3]));
        cell5.setText(Integer.toString(numInt[4]));
        cell6.setText(Integer.toString(numInt[5]));
        cell7.setText(Integer.toString(numInt[6]));
        cell8.setText(Integer.toString(numInt[7]));
        cell9.setText(Integer.toString(numInt[8]));
        cell10.setText(Integer.toString(numInt[9]));
        cell11.setText(Integer.toString(numInt[10]));
        cell12.setText(Integer.toString(numInt[11]));
        cell13.setText(Integer.toString(numInt[12]));
        cell14.setText(Integer.toString(numInt[13]));
        cell15.setText(Integer.toString(numInt[14]));
        cell16.setText(Integer.toString(numInt[15]));
    }


    public native int[] stringFromJNI(int cellKey, int [] arr);
    public native boolean checkWin(int [] arr);
    public native int[] mix(int [] arr);

}
