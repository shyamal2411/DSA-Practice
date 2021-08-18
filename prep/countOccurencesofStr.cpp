#include<bits/stdc++.h> 
using namespace std;

// https://www.geeksforgeeks.org/count-occurrences-of-anagrams/
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];

bool areAnagrams(string s, string t){
    map<char, int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    
    for(int i=0;i<t.size();i++){
        mp[t[i]]--;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second!=0)
            return false;
    }
    return true;
}

int countAnagrams(string text, string word){
    int n = text.size();
    int m = word.size();
    int count = 0;
    for(int i=0;i<n-m+1;i++){
    if (areAnagrams(text.substr(i, word.length()),word))
         count++;
    }
    return count;
}

int main(){
    string text, word;
    cin>>text>>word;
countAnagrams(text, word);
return 0;
}   