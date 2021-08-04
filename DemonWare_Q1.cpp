#include<bits/stdc++.h>
using namespace std;

#include <string>
#include <vector>

string solution(string &S) {
    int occurrences[26];
    for (int i = 0; i < 26; i++) {
        occurrences[i] = 0;
    }

    for (char ch : S) {
        occurrences[ch - 'a']++;
    }

    char best_char = 'a';
    int best_res = 0;

    for (int i = 0; i < 26; i++) {
        if (occurrences[i] >= best_res) {
            best_char = 'a' + i;
            best_res = occurrences[i];
        }
    }

    return string(1, best_char);
}



int main() {
    string S;
    cin >> S;
    cout << solution(S) << endl;
    return 0;
}