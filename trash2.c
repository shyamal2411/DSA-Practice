#include<stdio.h>
#include<conio.h>
int main(){
    int t,n,m,ans;
    int arr[n];
    int i =0;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        while(n--){
            scanf("%d",&m);
            arr[i] = m;
            i++;

        if(n%2==0)
            ans = (arr[n/2] + arr[n/2-1])/2;
        else
            ans = arr[n/2-1];
          }
        printf("%d",ans);
    }
    return 0;
}
