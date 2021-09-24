#include<bits/stdc++.h>
using  namespace std;

void powerset(string str, int index=-1, string curr = "")
{
    int n= str.length();
    if(index==n)
    return; //base cases

    cout<<curr<<endl;

    for(int i=index+1;i<n;i++)
    {
        curr+=str[i];
        powerset(str, i, curr);

        curr.erase(str.length()-1);
    }
    return;
}

int main()
{
    string str;
    cin>>str;

    powerset(str);
    return 0;
}