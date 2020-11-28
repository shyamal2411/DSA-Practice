#include<iostream>
using namespace std;
int main(){
/*int n,top=-1;
cin>>n;
int i,arr[n];

for(i=0;i<=n;i++)
{
    cin>>arr[i];

    if(arr[i]!=1)
    top+=1;
}
        //stack approach but a bit hard,so opted for
        //array solution,coded as below.
if(top==n-1)
cout<<"easy";

else
cout<<"hard";*/

    int i,n;
    cin>>n;
    while(n>0)
    {
        cin>>i;
        if(i==1)
        {
            cout<<"hard"<<endl;
            return 0;
        }

        n--;
    }
    cout<<"easy"<<endl;
}
