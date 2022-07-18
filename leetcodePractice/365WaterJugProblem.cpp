#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if(targetCapacity == 0) return true;
        if(targetCapacity > jug1Capacity+jug2Capacity) return false;
        int gcd = __gcd(jug1Capacity, jug2Capacity);
        return targetCapacity % gcd == 0;
    }
};

int main(){
Solution ss;

int jug1Capacity = 3, jug2Capacity = 5, targetCapacity = 4;

if(ss.canMeasureWater(jug1Capacity, jug2Capacity, targetCapacity))
cout<<"true"<<endl;
else
cout<<"false"<<endl;
return 0;
}