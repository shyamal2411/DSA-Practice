#include <stdio.h>
#include <stdlib.h>

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n;
  scanf("%d", &n);
  int a[n];
  fo(i, n) { scanf("%d", &a[n]); }
  fo(i, n) { printf("%d", a[n]); }
}