package com.example.myapplication.Util;

import java.util.HashMap;

public class NameHelper {
    private static HashMap<String, String> MappingInfo;

    public static void Init(){
        MappingInfo = new HashMap<>();
        // Add Info =======================================================
        MappingInfo.put("SS", "슈슈버거");
        MappingInfo.put("DB", "더블 불고기 버거");
        MappingInfo.put("Lucky", "행운버거 골드");
        MappingInfo.put("Big", "빅맥");
        MappingInfo.put("cen", "1955 버거");
        MappingInfo.put("GEC", "골든 에그 치즈 버거");
        MappingInfo.put("BTD", "베이컨 토마토 드럭스 버거");
        MappingInfo.put("SangHai", "상하이 버거");

    }

    public static String getFullName(String token, String option){
        String res = MappingInfo.get(token);
        switch (option){
            case "S":
                res+=" 단품";
                break;
            case "N":
                res+=" 세트";
                break;
            case "L":
                res+=" 라지세트";
                break;
                default:
                    break;
        }

        return res;
    }
}
