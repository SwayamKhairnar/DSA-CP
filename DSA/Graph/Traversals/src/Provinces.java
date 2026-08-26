package src;

import java.util.ArrayList;

public class Provinces {

    public static void main(String[] args){
        Graph g=new Graph();
        ArrayList<ArrayList<Integer>>adjLs=g.createGraph();
        countProvinces cp=new countProvinces();
        System.out.println("Total no of Provinces are :"+cp.countProvince(adjLs));
    }
}
