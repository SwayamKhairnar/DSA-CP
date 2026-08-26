import java.util.*;

public class Problem6OtoX {

    static Scanner sc = new Scanner(System.in);

    public static boolean bfs(int X, int Y,
                              ArrayList<ArrayList<String>> grid,
                              ArrayList<ArrayList<Integer>> visited) {

        // starting cell touches boundary
        if (X == 0 || Y == 0 ||
                X == grid.size() - 1 ||
                Y == grid.get(0).size() - 1) {

            return false;
        }

        Queue<int[]> queue = new ArrayDeque<>();

        queue.add(new int[]{X, Y});

        boolean surrounded = true;

        while (!queue.isEmpty()) {

            int[] temp = queue.poll();

            int x = temp[0];
            int y = temp[1];

            int[] dx = {0, 1, 0, -1};
            int[] dy = {-1, 0, 1, 0};

            for (int i = 0; i < 4; i++) {

                int r = x + dx[i];
                int c = y + dy[i];

                if (r >= 0 &&
                        r < grid.size() &&
                        c >= 0 &&
                        c < grid.get(0).size() &&
                        grid.get(r).get(c).equals("O") &&
                        visited.get(r).get(c) == 0) {

                    visited.get(r).set(c, 1);

                    // touching boundary
                    if (r == 0 ||
                            c == 0 ||
                            r == grid.size() - 1 ||
                            c == grid.get(0).size() - 1) {

                        surrounded = false;
                    }

                    queue.add(new int[]{r, c});
                }
            }
        }

        return surrounded;
    }

    public static void main(String[] args) {

        int row = sc.nextInt();
        int col = sc.nextInt();

        ArrayList<ArrayList<String>> grid = new ArrayList<>();
        ArrayList<ArrayList<Integer>> visited = new ArrayList<>();

        for (int i = 0; i < row; i++) {

            grid.add(new ArrayList<>());
            visited.add(new ArrayList<>());

            for (int j = 0; j < col; j++) {
                visited.get(i).add(0);
            }
        }

        for (int i = 0; i < row; i++) {

            System.out.println("Enter row: " + i);

            for (int j = 0; j < col; j++) {

                String c = sc.next();

                grid.get(i).add(c);
            }
        }

        for (int i = 0; i < row; i++) {

            for (int j = 0; j < col; j++) {

                if (grid.get(i).get(j).equals("O")
                        && visited.get(i).get(j) == 0) {

                    visited.get(i).set(j, 1);

                    if (bfs(i, j, grid, visited)) {

                        changeToX(i, j, grid);
                    }
                }
            }
        }

        System.out.println("\nFinal Grid:");

        for (int i = 0; i < row; i++) {

            for (int j = 0; j < col; j++) {

                System.out.print(grid.get(i).get(j) + " ");
            }

            System.out.println();
        }
    }

    private static void changeToX(int i, int j,
                                  ArrayList<ArrayList<String>> grid) {

        Queue<int[]> queue = new ArrayDeque<>();

        grid.get(i).set(j, "X");

        queue.add(new int[]{i, j});

        while (!queue.isEmpty()) {

            int[] temp = queue.poll();

            int x = temp[0];
            int y = temp[1];

            int[] dx = {0, 1, 0, -1};
            int[] dy = {-1, 0, 1, 0};

            for (int k = 0; k < 4; k++) {

                int r = x + dx[k];
                int c = y + dy[k];

                if (r >= 0 &&
                        r < grid.size() &&
                        c >= 0 &&
                        c < grid.get(0).size() &&
                        grid.get(r).get(c).equals("O")) {

                    grid.get(r).set(c, "X");

                    queue.add(new int[]{r, c});
                }
            }
        }
    }
}