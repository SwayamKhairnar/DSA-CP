import java.util.ArrayList;
import java.util.Scanner;

public class Implementation2 {
    public static void main(String[] args){
        int n,m;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no of nodes and edges: ");
        n=sc.nextInt();
        m=sc.nextInt();
        ArrayList<ArrayList<Integer>>adjLs=new ArrayList<>();
        for (int i = 0; i <n ; i++) {
            adjLs.add(new ArrayList<>());
        }
        for (int i = 0; i <m ; i++) {
            int u,v;
            System.out.print("Enter edge u and v: ");
            u=sc.nextInt();
            v=sc.nextInt();
            adjLs.get(u).add(v);
            adjLs.get(v).add(u);
        }
        for (int i = 0; i <n ; i++) {
            System.out.print(i+"->");
            for(int it :adjLs.get(i) ){
                System.out.print(it+" ");
            }
            System.out.println();
        }
    }

}
