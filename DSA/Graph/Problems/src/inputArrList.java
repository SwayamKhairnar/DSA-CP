import java.util.ArrayList;
import java.util.Scanner;

public class inputArrList {

    public static ArrayList<ArrayList<Integer>> inputGrid() {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter rows: ");
        int row = sc.nextInt();

        System.out.print("Enter cols: ");
        int col = sc.nextInt();

        ArrayList<ArrayList<Integer>> grid = new ArrayList<>();

        for (int i = 0; i < row; i++) {
            grid.add(new ArrayList<>());
        }

        System.out.println("Enter grid values:");

        for (int i = 0; i < row; i++) {

            for (int j = 0; j < col; j++) {

                grid.get(i).add(sc.nextInt());

            }
        }

        return grid;
    }
}