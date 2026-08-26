import java.util.ArrayList;
import java.util.Scanner;

class Pair{
    int node;
    int weight;
    Pair(int n,int w){
        this.node=n;
        this.weight=w;
    }

}
public class Implementation3_weighted {
    public static void main(String[] args){
        ArrayList<ArrayList<Pair>>adjLs=new ArrayList<>();
        int n,m;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no of Nodes and Edges: ");
        n=sc.nextInt();
        m=sc.nextInt();
        for (int i = 0; i <n ; i++) {
            adjLs.add(new ArrayList<>());
        }
        for (int i = 0; i <m; i++) {
            int node1;
            int node2;
            int weight;
            System.out.println("Enter node 1 and 2 and weight: ");
            node1=sc.nextInt();
            node2= sc.nextInt();
            weight=sc.nextInt();
            adjLs.get(node1).add(new Pair(node2,weight));
            adjLs.get(node2).add(new Pair(node1,weight));
        }

        for (int i = 0; i <n ; i++) {
            System.out.print(i+"->");
            for (int j = 0; j <adjLs.get(i).size() ; j++) {
                System.out.println(" "+adjLs.get(i).get(j).node+" weight: "+adjLs.get(i).get(j).weight);
            }
            System.out.println();
        }
    }


}
