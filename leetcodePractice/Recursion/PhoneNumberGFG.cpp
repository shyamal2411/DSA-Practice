#include<bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/find-possible-words-phone-digits/
void findCombination(vector<char> keypad[], int input[], string ans, int index, int n){
    if(index==n){
        cout<<ans<<" ";
        return;
    }
    int digit=input[index];
    int len=keypad[digit].size();

    for(int i=0;i<len; i++){
        findCombination(keypad, input, ans+keypad[digit][i], index+1, n);
    }
}

int main(){
    vector<char> keypad[]={
        {}, {},
        { 'a', 'b', 'c' },
        { 'd', 'e', 'f' },
        { 'g', 'h', 'i' },
        { 'j', 'k', 'l' },
        { 'm', 'n', 'o' },
        { 'p', 'q', 'r', 's'},
        { 't', 'u', 'v' },
        { 'w', 'x', 'y', 'z'}
    };
    int input[] = {2,3,4};
    int n=sizeof(input)/ sizeof(input[0]);

    findCombination(keypad, input, string(""), 0, n);
    return 0; 
}

/*
Time Complexity: O(4n), where n is a number of digits in the input number. 
Each digit of a number has 3 or 4 alphabets, so it can be said that each digit has 4 alphabets as options. If there are n digits then there are 4 options for the first digit and for each alphabet of the first digit there are 4 options in the second digit, i.e for every recursion 4 more recursions are called (if it does not match the base case). So the time complexity is O(4n).
Space Complexity:O(1). 
As no extra space is needed.*/