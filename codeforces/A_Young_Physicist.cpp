#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll int n,k,t,i,p,q,r,s,count=0,j;
 int x,y,z,sum1=0,sum2=0,sum3=0;
 cin>>n;
 while(n--)
 {
     cin>>x>>y>>z;
     sum1+=x;
     sum2+=0;
     sum3+=0;
 }
 if(sum1==0 && sum2==0&& sum3==0)
 cout<<"YES"<<endl;
 else
 cout<<"NO"<<endl;

return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define fo(i, n) for (int i = 0; i < n; i++)
// /*
//  POINTS TO CONSIDER:HINT GIVEN IS:  we need only to check if the sum of all
//  vectors is equal to 0.
//  WE ONLY NEED TO CHECK THAT X1+X2+X3 =0 OR NOT, LIKEWISE FOR OTHER VARIABLES
//  FOR CO-ORDINATES.
// */
// int main() {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   ll int n, k, t, i, p, q, r, s, count = 0, j;
//   cin >> n;
//   int sum1, sum2, sum3, x1, x2, x3, y1, y2, y3, z1, z2, z3;
//   while (n--) {
//     cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3 >> z1 >> z2 >> z3;

//     sum1 = x1 + x2 + x3;
//     sum2 = y1 + y2 + y3;
//     sum3 = z1 + z2 + z3;
//   }
//   if (sum1 + sum2 + sum3 == 0)
//     cout << "YES";
//   else
//     cout << "NO";
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define fo(i, n) for (int i = 0; i < n; i++)
// /*
// POINTS TO CONSIDER:HINT GIVEN IS:  we need only to check if the sum of all
// vectors is equal to 0.
// WE ONLY NEED TO CHECK THAT X1+X2+X3 =0 OR NOT, LIKEWISE FOR OTHER VARIABLES
// FOR CO-ORDINATES.
// */
// int process(int n, int x, int y, int z) {
//   int sum = 0, sum1 = 0, sum2 = 0;
//   sum += x;
//   sum1 += y;
//   sum2 += z;
//   if (sum + sum1 + sum2 = 0)
//     cout << "YES";
//   else
//     cout << "NO";
//   return;
// }

// int takeinput(int n, int x, int y, int z) {
//   while (n--) {
//     cin >> x >> y >> z;
//     process(n, x, y, z);
//   }
//   return (n, x, y, z);
// }
// int main() {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int n, k, t, i, p, q, r, s, count = 0, j;
//   cin >> n;
//   takeinput(int n, int x, int y, int z);
//   return 0;
// }
