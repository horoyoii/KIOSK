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
        MappingInfo.put("Coke", "코카콜라");
        MappingInfo.put("Milk", "우유");
        MappingInfo.put("Chil", "골든 키위 칠러");
        MappingInfo.put("Orange", "오랜지 쥬스");
        MappingInfo.put("ShCh", "초코 쉐이크");
        MappingInfo.put("ShBa", "바닐라 쉐이크");
        MappingInfo.put("ShSt", "딸기 쉐이크");
        MappingInfo.put("Cafe", "카페라떼");
        MappingInfo.put("Ches", "골든 모짜 치즈스틱 2조각");
        MappingInfo.put("Shan", "상하이 치킨 스낵랩");
        MappingInfo.put("Conn", "콘 스프");

    }

    public static String getFullName(String token, String option, String kind){
        String res = MappingInfo.get(token);
        if(kind.equals("burger")) {
            switch (option) {
                case "S":
                    res += " 단품";
                    break;
                case "N":
                    res += " 세트";
                    break;
                case "L":
                    res += " 라지세트";
                    break;
                default:
                    break;
            }
        }else if(kind.equals("drink")){
            switch (option) {
                case "S":
                    res += " 스몰";
                    break;
                case "N":
                    res += " 미디엄";
                    break;
                case "L":
                    res += " 라지";
                    break;
                default:
                    break;
            }
        }
        return res;
    }
}
