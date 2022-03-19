#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/problems/maximum-frequency-stack/
// https://leetcode.com/problems/maximum-frequency-stack/discuss/1086635/C%2B%2B-or-Hash-map-%2B-Stack-or-O(1)-Beats-100-or-Explanation
class FreqStack {
public:
    int max_freq;
    unordered_map<int, int> freq_mp;
    unordered_map<int, stack<int>> freq_stack_mp;
    
    FreqStack() {
        max_freq = 0; // initial max freq is 0.
    }
    
    void push(int x) {
        freq_mp[x]++; // increase max freq of x in freq map
        
        if(max_freq < freq_mp[x]) max_freq = freq_mp[x]; //update max freq
        
        freq_stack_mp[freq_mp[x]].push(x); //push x to its freq stack
    }
    
    int pop() {
        int cur_top = freq_stack_mp[max_freq].top();
        
        // update both the maps
        freq_stack_mp[max_freq].pop();
        freq_mp[cur_top]--;
        
        // if stack of max element becomes empty, delete it from "freq_stack_mp"
        // along with decreasing "max_freq"
        if(freq_stack_mp[max_freq].empty()){
            freq_stack_mp.erase(max_freq);
            max_freq--;
        }
        return cur_top; // return current top element
    }
};

int main(){
    FreqStack fs;
    fs.push(5);
    fs.push(7);
    fs.push(5);
    fs.push(7);
    fs.push(4);
    fs.push(5);
    cout<<fs.pop()<<endl;
    cout<<fs.pop()<<endl;
    cout<<fs.pop()<<endl;
    cout<<fs.pop()<<endl;
    cout<<fs.pop()<<endl;
    cout<<fs.pop()<<endl;
    return 0;
} 