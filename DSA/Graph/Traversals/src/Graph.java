package src;

import java.util.ArrayList;
import java.util.Scanner;

public class Graph{
    public ArrayList<ArrayList<Integer>>createGraph(){
        Scanner sc=new Scanner(System.in);
        int n,m;
        System.out.println("Enter the no of Nodes and edges: ");
        n= sc.nextInt();
        m= sc.nextInt();
        ArrayList<ArrayList<Integer>>adjLs=new ArrayList<>();
        for (int i = 0; i <=n; i++) {
            adjLs.add(new ArrayList<>());
        }
        for (int i = 0; i <m ; i++) {
            System.out.println("Enter connection no : "+(i+1));
            int node1;
            int node2;
            node1=sc.nextInt();
            node2= sc.nextInt();
            adjLs.get(node1).add(node2);
            adjLs.get(node2).add(node1);
        }
        return adjLs;
    }
}
