#include<bits/stdc++.h> 
using namespace std;

void setZeros(vector<vector<int>> &mat){
    int row = mat.size(), col = mat[0].size();
    vector<int> dum1(row, -1), dum2(col, -1);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(mat[i][j] == 0){
                dum1[i] = 0;
                dum2[j] = 0;
            }
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(dum1[i] == 0 || dum2[j] == 0){ mat[i][j] = 0; }
        }
    }
}

int main(){
    vector<vector<int>> arr;

    arr = {{0,1,2,0}, {3,4,5,2}, {1,3,1,5}};
    setZeros(arr);
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size(); j++){
            cout<< arr[i][j] << " ";
        }
        cout<<endl;
    }
}

/**/