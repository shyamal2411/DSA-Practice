import java.util.*;

public class minPathCost {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[][] = new int[n][n];
        int dp[][] = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (i == n - 1 && j == n - 1) {
                    dp[i][j] = arr[i][j];
                } else if (i == n - 1) {
                    dp[i][j] = arr[i][j] + dp[i][j + 1];
                } else if (j == n - 1) {
                    dp[i][j] = arr[i][j] + dp[i + 1][j];
                } else {
                    dp[i][j] = arr[i][j] + Math.min(dp[i + 1][j], dp[i][j + 1]);
                }
            }
        }
        System.out.println(dp[0][0]);

    }
}