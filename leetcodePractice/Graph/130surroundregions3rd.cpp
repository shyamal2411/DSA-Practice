class Solution {
 public:
  void DFS(vector<vector<char>>& board, int i, int j) {
    if (i >= 0 && i < board.size() && j >= 0 && j < board[0].size() &&
        board[i][j] == 'O') {
      board[i][j] = 'Y';
      DFS(board, i + 1, j);
      DFS(board, i - 1, j);
      DFS(board, i, j + 1);
      DFS(board, i, j - 1);
    }
    return;
  }

  void solve(vector<vector<char>>& board) {
    int n = board.size();
    int m = board[0].size();

    // for col
    for (int i = 0; i < n; i++) {
      if (board[i][0] == 'O')
        DFS(board, i, 0);

      if (board[i][m - 1] == 'O')
        DFS(board, i, m - 1);
    }
    // for row
    for (int j = 0; j < m; j++) {
      if (board[0][j] == 'O')
        DFS(board, 0, j);
      if (board[n - 1][j] == 'O')
        DFS(board, n - 1, j);
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (board[i][j] == 'O') {
          board[i][j] = 'X';
        }
        if (board[i][j] == 'Y')
          board[i][j] = 'O';
      }
    }

    return;
  }
};