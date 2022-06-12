#include<bits/stdc++.h> 
using namespace std;

bool solve(vector<string>& moves, int x, int y) {
   bool ans;
    int xx = 0, yy = 0;
    for(int i = 0; i < moves.size(); i++){
        if(moves[i] == "NORTH"){xx += 0, yy += 1;}
        else if(moves[i] == "SOUTH"){xx += 0, yy += -1;}

        if(moves[i] == "WEST"){xx += -1, yy += 0;}
        else if(moves[i] == "EAST"){xx += 1, yy += 0;}
    }
    
        if(x == xx && y == yy) return true;
        else return false;
        
}

int main(){
    vector<string> moves = {"NORTH","EAST"};
    int x = 1, y = 1;
    if(solve(moves, x, y)){
        cout<<"True\n";
    }
    else {cout<<"False\n";}
    return 0;
}

/*

A Roomba robot is currently sitting in a Cartesian plane at (0, 0). 
You are given a list of its moves that it will make, containing NORTH, SOUTH, WEST, and EAST.

Return whether after its moves it will end up in the coordinate (x, y).

Constraints
n ≤ 100,000 where n is length of moves
Example 1
Input
moves = ["NORTH", "EAST"]
x = 1
y = 1
Output
true
Explanation
Moving north moves it to (0, 1) and moving east moves it to (1, 1)

Example 2
Input
moves = ["WEST", "EAST"]
x = 1
y = 0
Output
false

*/