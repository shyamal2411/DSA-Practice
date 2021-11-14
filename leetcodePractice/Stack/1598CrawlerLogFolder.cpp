#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/crawler-log-folder/
class Solution {
public:
  int minOperations(vector<string>& logs, int steps = 0) {
    for (auto log : logs)
        if (log == "../")
            steps = max(0, steps - 1);
        else if (log != "./")
            ++steps;
    return steps;
}

};

int main() {
    Solution s;
    vector<string> logs = {"d1/", "d2/", "../", "d21/", "./"};
    cout << s.minOperations(logs) << endl;
    return 0;
}