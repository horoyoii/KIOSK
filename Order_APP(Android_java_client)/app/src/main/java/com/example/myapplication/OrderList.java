package com.example.myapplication;

import android.os.Parcel;
import android.os.Parcelable;
import android.util.Log;

import com.example.myapplication.Model.Item;

import java.io.Serializable;
import java.util.ArrayList;

public class OrderList implements Serializable {
    private ArrayList<Item> List = new ArrayList<>();
    private int totalSum;

    public OrderList(OrderList list) {
        totalSum = list.getTotalSum();
        List = list.getList();
    }

    void ShowInfo(){
        for(int i =0;i<List.size();i++){
            Log.d("TTS", List.get(i).getName());
        }
        Log.d("TTS", String.valueOf(totalSum));
    }

    public ArrayList<Item> getList() {
        return List;
    }

    public void setList(ArrayList<Item> list) {
        List = list;
    }

    public int getTotalSum() {
        return totalSum;
    }

    public void setTotalSum(int totalSum) {
        this.totalSum = totalSum;
    }


}
