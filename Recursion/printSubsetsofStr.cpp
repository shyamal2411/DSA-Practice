#include<bits/stdc++.h> 
using namespace std;

void printSubset(string str, string curr=" ",int index=0)
{
        if(index==str.length())
        {cout<<curr<<"\t"; return;}

        printSubset(str, curr, index+1);
        printSubset(str, curr+str[index], index+1);
}

int main(){
    printSubset("ABC");
return 0;
}