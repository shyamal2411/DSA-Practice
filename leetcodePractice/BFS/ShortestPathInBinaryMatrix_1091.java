package leetcodePractice.BFS;

import java.util.*;

// https://leetcode.com/problems/shortest-path-in-binary-matrix/
class Solution {
    public int shortestPathBinaryMatrix(int[][] grid) {
        if (grid[0][0] != 0 || grid[grid.length - 1][grid[0].length - 1] != 0)
            return -1;

        Queue<int[]> q = new LinkedList<>();
        q.add(new int[] { 0, 0 });
        int[][] dir = { { 1, 1 }, { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 }, { -1, -1 }, { 1, -1 }, { -1, 1 } };
        grid[0][0] = 1;

        while (!q.isEmpty()) {
            int[] cur = q.poll();
            int x = cur[0], y = cur[1];
            if (x == grid.length - 1 && y == grid[0].length - 1)
                return grid[x][y];
            for (int[] direct : dir) {
                int nx = x + direct[0];
                int ny = y + direct[1];
                if (nx >= 0 && nx < grid.length && ny >= 0 && ny < grid[0].length && grid[nx][ny] == 0) {
                    q.add(new int[] { nx, ny });
                    grid[nx][ny] = grid[x][y] + 1;
                }
            }
        }
        return -1;
    }
};

public class ShortestPathInBinaryMatrix_1091 {
    public static void main(String[] args) {
        Solution s = new Solution();
        int[][] grid = { { 0, 0, 0 }, { 1, 1, 0 }, { 1, 1, 0 } };
        System.out.println(s.shortestPathBinaryMatrix(grid));
    }
}