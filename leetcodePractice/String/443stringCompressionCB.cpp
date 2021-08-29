#include<iostream>
#include<cstring>
using namespace std;

void compress(char *str,int len, int act);
char str[1000];
int length;

int main()
{
cin>>str;
length=strlen(str);
//compression
//we need a recursive sol so that 
//cases like abbbccc or abcccc are also taken care of
compress(str,0,0);
cout<<str;

}

//recursive code - prefered
void compress(char *str,int len, int act) {


if(len<length) {
    int k=len;
    int count=0;
    int c, n;
    ///CHANGE 1
    while(len<length && str[k]==str[len]){
        len++; count++;
    }
    n = 0;
    c=count;
    do {
        c /= 10;
        n++;
    } while (c != 0);
    

    str[act]=str[k];
    
    ///CHANGE 2, handle for count=1 differently
    if(count==1)
    {
        compress(str,len,act+1);
    }    
    else
    {
        for(c=0;c<n;c++) {
            str[act+n-c]=(count%10)+48;
            count=count/10;
        } 
        compress(str,len,act+n+1);
    }

}
else    
    str[act]='\0';
return;
}