package com.example.myapplication;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ListView;

public class SuccessActivity extends AppCompatActivity {
    OrderList orderList;
    private static final String TAG = "CardListActivity";
    private CardArrayAdapter cardArrayAdapter;
    private ListView listView;

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_success);
        Log.d("TTS", "success Activity ");
        listView = (ListView) findViewById(R.id.card_listView);

        listView.addHeaderView(new View(this));
        listView.addFooterView(new View(this));

        cardArrayAdapter = new CardArrayAdapter(getApplicationContext(), R.layout.list_item_card);

        Intent intent = getIntent();
        orderList =(OrderList)intent.getSerializableExtra("List");

        for (int i = 0; i < orderList.getList().size(); i++) {
            Card card = new Card(orderList.getList().get(i).getName(), "\\ " + orderList.getList().get(i).getPrice());
            cardArrayAdapter.add(card);
        }
        listView.setAdapter(cardArrayAdapter);
    }
}
