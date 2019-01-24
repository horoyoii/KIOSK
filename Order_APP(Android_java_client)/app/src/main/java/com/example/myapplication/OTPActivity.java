package com.example.myapplication;

import android.content.Intent;
import android.os.StrictMode;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

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
    String data;
    Thread ClientThread;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        socket = null;
        setContentView(R.layout.activity_otp);
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
                    Log.d("TTS", host);
                    Log.d("TTS", address.getPortNum());
                    //socket = new Socket(host, port);
                    try {
                        socket = new Socket();
                        SocketAddress Address = new InetSocketAddress(host, port);
                        socket.connect(Address);
                    }catch(Exception e){
                        e.printStackTrace();
                    }

                    if(socket != null){
                        Log.d("TTS", "made");
                    }

                    out = new PrintWriter(socket.getOutputStream(), true); //데이터를 전송시 stream 형태로 변환하여                                                                                                                       //전송한다.
                    in = new BufferedReader(new InputStreamReader(
                            socket.getInputStream())); //데이터 수신시 stream을 받아들인다.

                } catch (IOException e) {
                    e.printStackTrace();
                }

                try {
                    while (true) {

                        data = in.readLine(); // 서버 측에서 마지막에 \n을 넣어 보내야 제대로 받는다.
                        Log.d("TTS", data);
                        final int OTP=Integer.parseInt(data);
                        output.post(new Runnable() {
                            public void run() {
                                output.setText(String.valueOf(OTP));
                            }
                        });
                    }
                } catch (Exception e) {
                }
            }
        };

        //        ClientThread.start();  //onResume()에서 실행.

    }
}


