package com.example.myapplication;

import android.content.Intent;
import android.graphics.Color;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import com.google.gson.Gson;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.net.SocketAddress;

public class OTPActivity extends AppCompatActivity {
    Address address;
    private Socket socket;
    PrintWriter out; // 데이터 전송
    BufferedReader in; // 데이터 수신
    TextView output;
    String responses;
    Thread ClientThread;
    boolean flag;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        socket = null;
        setContentView(R.layout.activity_otp);
        flag = true;
        /*
        if (android.os.Build.VERSION.SDK_INT > 9) {
            StrictMode.ThreadPolicy policy = new StrictMode.ThreadPolicy.Builder().permitAll().build();
            StrictMode.setThreadPolicy(policy);
        }
        */
        Intent intent = getIntent();
        address = (Address)intent.getSerializableExtra("Address");

        output = findViewById(R.id.textView);
        Button button = findViewById(R.id.button_order);
        output.setTextColor(Color.parseColor("#f29886"));
        output.setTextSize(17);
        output.setText("you will get OTP\n from here...");
        button.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                Log.d("TTS", "Button Clicked");
                ClientThread.start();  //onResume()에서 실행.

            }
        });



         ClientThread= new Thread() {
            public void run() {
                try {
                    Log.d("TTS", "Run Called");
                    String host = address.getIPAddress();
                    int port = Integer.parseInt(address.getPortNum());
                    try {
                        socket = new Socket();
                        SocketAddress Address = new InetSocketAddress(host, port);
                        socket.connect(Address);
                    }catch(Exception e){
                        e.printStackTrace();
                    }

                    out = new PrintWriter(socket.getOutputStream(), true); //데이터를 전송시 stream 형태로 변환하여                                                                                                                       //전송한다.
                    in = new BufferedReader(new InputStreamReader(
                            socket.getInputStream())); //데이터 수신시 stream을 받아들인다.

                } catch (IOException e) {
                    e.printStackTrace();
                }

                try {
                    while (socket.isConnected()) {
                        if(flag) {
                            flag = false;
                            responses = in.readLine();
                            final int OTP = Integer.parseInt(responses);
                            output.post(new Runnable() {
                                public void run() {
                                    output.setTextSize(40);
                                    output.setText(String.valueOf(OTP));
                                }
                            });
                        }else{
                            Log.d("TTS", "Phase 2");
                            StringBuilder sb = new StringBuilder();
                            String line;

                            while(!((line = in.readLine()).equals("}$"))){
                                sb.append(line+"\n");
                            }

                            responses = sb.toString();

                            Log.d("TTS - getFromWin", sb.toString());
                            Gson gson = new Gson();
                            OrderList orderList = gson.fromJson(responses, OrderList.class);
                            // json의 key 값은 자바 객체의 변수명이 된다.
                            orderList.ShowInfo();
                            socket.close();
                            Log.d("TTS - END", "socket disconnect");

                            Intent intent = new Intent(getApplicationContext(), SuccessActivity.class);
                            //OrderList orl = new OrderList(orderList.getList(), orderList.getTotalSum());
                            Log.d("TTSSS", String.valueOf(orderList.getTotalSum()));
                            intent.putExtra("List", orderList);
                            startActivity(intent);
                            Log.d("TTS", "Show new ");
                        }
                    }
                } catch (Exception e) {
                }
            }
        };
    }
}


