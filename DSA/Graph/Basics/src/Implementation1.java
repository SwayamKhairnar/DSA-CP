import java.util.Scanner;
//Adjacency Matrix
public class Implementation1 {

    public static void main(String[] args){
        int n,m;
        System.out.println("Enter n and m: ");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        m= sc.nextInt();
        int [][]adjMat=new int[n][n];
        for (int i = 0; i < m; i++) {
            System.out.println("Enter vertexes u and v");
            int u,v;
            u=sc.nextInt();
            v=sc.nextInt();
            adjMat[u][v]=1;
            adjMat[v][u]=1;
        }
        for (int i = 0; i <n ; i++) {
            for (int j = 0; j <n ; j++) {
                System.out.print(adjMat[i][j]+ " ");
            }
            System.out.println();
        }
    }
}
