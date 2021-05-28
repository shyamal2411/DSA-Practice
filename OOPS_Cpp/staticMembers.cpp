#include<bits/stdc++.h> 
using namespace std;

int Player::count=0;

class Player{
    public:
    static int count;
    Player() {count++;}
    Player() {count--;}
}

int main(){
 Player p1;
 p1.count;
 cout<<"Player 1: "<<Player::count<<" ";
 Player p2;
 cout<<"Player 1: "<<Player::count<<" ";
return 0;
}