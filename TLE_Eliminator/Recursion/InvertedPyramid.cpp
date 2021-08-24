#include<bits/stdc++.h>
using namespace std;

void call(int n, int space){
    if(n<1)
    return;

    for(int i=0;i<space/2;i++){
        cout<<" ";
    }
    for(int i=0;i<((2*n)-1);i++){
        cout<<"*";
    }
    cout<<endl;
    call(n-1, space+2);
}

void print_space(int space) {
    if (space == 0)
        return;
    cout << " ";
    print_space(space - 1);
}
void print_ass(int ass) {
    if (ass == 0)
        return;
    cout << "*";
    print_ass(ass - 1);
}
void print_pattern(int n, int s) {
    if (n < 1)
        return;
    print_space(s);
    print_ass(n);
    // print_space(s);
    cout << '\n';
    print_pattern(n - 2, s + 1);


}
void solve() {

    int n;
    cin >> n;
    n = n * 2 - 1;
    int s = 0;
    print_pattern(n, s);



}

int main()
{
    // int n;
    // cin>>n;
    // int space;
    // space =n-1;
    solve();
    // call(n, space);
}