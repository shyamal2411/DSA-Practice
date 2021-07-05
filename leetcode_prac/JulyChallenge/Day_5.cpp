class Solution {
 public:
  vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size(), n = mat[0].size(), o = m * n;
    if (r * c != o)
      return mat;
    vector<vector<int>> ans(r, vector<int>(c, 0));
    for (int i = 0; i < o; i++)
      ans[i / c][i % c] = mat[i / n][i % n];
    return ans;

    //         int row=mat.size();
    //         int col=mat[0].size();

    //         //for illegal shape
    //         if(row*col< r*c || row*col > r*c)
    //             {return mat;}

    //         //pushing into the vector
    //         vector<int> vec;
    //         for(int i=0;i<row;i++){
    //             for(int j=0;j<col;j++){
    //                 vec.push_back(mat[i][j]);
    //             }
    //         }

    //         int k=0;
    //         vector<vector<int>> new_mat(r, vector<int> (c,0));
    //         //new matrix
    //         for(int i=0;i<r;i++){
    //             for(int j=0;j<c;j++){
    //                 new_mat[i][j]=vec[k];
    //                 k++;
    //             }
    //         }
    //         return new_mat;
  }
};