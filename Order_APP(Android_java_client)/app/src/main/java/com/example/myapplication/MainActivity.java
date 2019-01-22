package com.example.myapplication;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Button button = findViewById(R.id.ButtonStart);
        final EditText editText_ip = findViewById(R.id.editText_IP);
        final EditText editText_port = findViewById(R.id.editText_PORT);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(getApplicationContext(), OTPActivity.class);
                String IP = editText_ip.getText().toString();
                String Port = editText_port.getText().toString();
                Address address = new Address(IP, Port);
                intent.putExtra("Address", address);

                startActivity(intent);
            }
        });

    }
}
