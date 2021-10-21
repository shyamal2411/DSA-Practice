#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/the-celebrity-problem/
#define f(i, a, n) for (int i = a; i < n; i++)
#define N 8
 
// Person with 2 is celebrity
bool MATRIX[N][N] = {{0, 0, 1, 0},
                    {0, 0, 1, 0},
                    {0, 0, 0, 0},
                    {0, 0, 1, 0}};
 
bool knows(int a, int b)
{
    return MATRIX[a][b];
}

int findCelebrity(int n){
    stack<int> s;
    int c;

    f(i, 0, n)
    s.push(i);

    while(s.size()>1){
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(knows(a,b))
        s.push(b);
        else
        s.push(a);
    }
    if(s.empty())
    return -1;

    c=s.top();
    s.pop();

    f(i, 0, n){
        if((i!=c) && (knows(c, i) || !knows(i,c)))
        return -1;
    }
    return c;
}

int main()
{
    int n = 4;
    int id = findCelebrity(n);
    id == -1 ? cout << "No celebrity" : cout << "Celebrity ID: " << id;
    return 0;
}