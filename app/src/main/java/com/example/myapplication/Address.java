package com.example.myapplication;

import java.io.Serializable;

class Address implements Serializable {
    private String IPAddress;
    private String PortNum;
    public Address(String IP, String Port){
        IPAddress = IP;
        PortNum = Port;
    }

    public String getIPAddress() {
        return IPAddress;
    }

    public String getPortNum() {
        return PortNum;
    }
}
