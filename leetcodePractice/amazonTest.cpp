#include <bits/stdc++.h>
using namespace std;
bool isGoodString(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
            return false;
    }
    return true;
}
int goodString(int N, int Q, string S, vector<int> arr, vector<vector<int>> ranges)
{
    vector<int> duplicate;
    vector<unordered_map<char, int>> count;
    unordered_map<char, int> umap;
    for (int i = 0; i < ranges.size(); i++)
    {
        int l = ranges[i][0];
        int r = ranges[i][1];
        for (int j = l; j <= r; j++)
        {
            umap[S[j]]++;
            if (umap[S[j]] > 1)
                duplicate[i]++;
        }
        count.push_back(umap);
        umap.clear();
    }

    for (int i = 0; i < arr.size(); i++)
    {
        int index = arr[i];
        for (int i = 0; i < count.size(); i++)
        {
            int l = ranges[i][0];
            int r = ranges[i][1];

            if (index >= l && index <= r)
            {
                char ch = S[index];
                if (count[i][ch] > 1)
                    duplicate[i] -= 1;
                count[i][ch]--;
            }
        }
        if (isGoodString(duplicate))
            return i + 1;
    }
    return arr.size();
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int Q;
        cin >> Q;
        string S;
        cin >> S;
        vector<int> arr(N);
        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
        }
        vector<vector<int>> ranges(Q, vector<int>(2));
        for (int iRange = 0; iRange < Q; iRange++)
        {
            for (int jRange = 0; jRange < 2; jRange++)
            {
                cin >> ranges[iRange][jRange];
            }
        }

        int out_;
        out_ = goodString(N, Q, S, arr, ranges);
        cout << out_;
        cout << "\n";
    }
}