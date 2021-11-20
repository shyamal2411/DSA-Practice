#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
const int M = 1e9 + 7;
typedef vector<int> vi;
#define f(i, a, n) for (int i = a; i < n; i++)
#define rf(i, a, n) for (int i = n - 1; i >= a; i--)
#define FIO                           \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);                    \
	cin.tie(0);                       \
	cout.tie(0);
#define read(arr, n)            \
	for (int i = 0; i < n; i++) \
		cin >> arr[i];
#define pr(arr, n)              \
	for (int i = 0; i < n; i++) \
		cout << arr[i];
#define in cin >>
#define out cout <<
#define first fr
#define second sc

void solve()
{
	  string s1;
    cin>>s1;
    int condition = 1;
    for(int i=1; i<=s1.length(); i++){
        if(s1[i] == s1[i-1]){
            condition++;
            if(condition==7){
                cout<<"YES"<<endl;
                return;
            }
        }else{
            condition=1;
        }
        
    }
    cout<<"NO"<<endl;
}

int32_t main()
{
	FIO int t;
	t = 1;
	//in t;
	while (t--)
		solve();

	return 0;
}