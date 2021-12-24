#include<bits/stdc++.h> 
using namespace std;

// https://leetcode.com/contest/leetcode-weekly-contest-2/problems/elimination-game/
int lastRemaining(int n) {
//the number of steps we take in the curresponding rep.
    int steps = 1;
    
	//true if we are going from left to right
    bool left = true;
	
	//remaining elements
    int remaining = n;
	
	//start of the list
    int head = 1;
    
    while(remaining > 1){
	//our head will only change either if we are moving from left to right or we have odd number of elements in our list
	//for example 1,2,3,4,5 now if we move from right to left then obviously we will remove the first element
        if(left || remaining % 2){
		//head will move forward by the number of steps or the length of jump taken in the current repetation
            head = head + steps;
        }
        
		//each time the remaining elements will get half
        remaining /= 2;
		//and the length of jump or steps will be doubled
        steps *= 2;
		
		//reverse the sense of traversal
        left = !left;
    }
    
	//now return the head 
    return head;
}


int main(){
    int n;
    cin>>n;
    cout<<lastRemaining(n);
    return 0;
}