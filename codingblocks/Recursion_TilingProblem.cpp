// Given a brick wall of 4 x N, and tiles of 4 x 1. Find the total number of
// ways to arrange the tiles.
#include <bits/stdc++.h>
using namespace std;

int tiles(int length) {
  // can't build the wall
  if (length < 1) 
    return 0;
  //there's only one way to build the wall,i.e,vertically
  if (length <= 3) 
    return 1;
  // only 2 ways,i.e,vertically and horizontally
  if (length == 4) 
    return 2;
  
  return tiles(length - 1) + tiles(length - 4);
}

int main() {
  int length;
  cin >> length;
  cout << tiles(length);
  return 0;
}
