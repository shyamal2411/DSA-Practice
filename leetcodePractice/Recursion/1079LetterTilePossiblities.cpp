#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/letter-tile-possibilities/
// https://leetcode.com/problems/letter-tile-possibilities/discuss/754458/C%2B%2B-solution-using-Backtracking-(8ms)
class Solution {
public:
    
    //taking count as pass by value makes it WA
    // we need to take count as pass by reference
    void backTrack(string tiles, int level, int &count){
        count++;
        for(int i=level;i<tiles.length();i++){
            
            if(i!=level && tiles[i]==tiles[level])
            continue;
            swap(tiles[i], tiles[level]);
            backTrack(tiles, level+1, count);
        }
    }
    
    int numTilePossibilities(string tiles) {
        int count=-1;
        sort(tiles.begin(), tiles.end());
        backTrack(tiles, 0, count);
        return count;
    }
};


/*
                    h( AAB , -1 , 0 )              LEVEL=0 ie 0 length substring
                    /               \
            h('A'AB,0,1)           h('B'AA,6,1)    LEVEL=1 ie 1 length substrings ("A","B")
            /         \              /
        h('AA'B,1,2) h('AB'A,4,2) h('BA'A,7,2)     LEVEL=2 ie 2 length substrings ("AB","BA","AA")
        /            /             /
    h('AAB',2,3)    h('ABA',5,2)  h('BAA',8,3)     LEVEL=3 ie 3 length substrings 
                                                   ("AAB", "ABA", "BAA")
*/

int main(){
    Solution s;
    string tiles; cin>>tiles;
    cout<<s.numTilePossibilities(tiles)<<endl;
    return 0;
}
