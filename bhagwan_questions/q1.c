#include <stdio.h>
#include <stdlib.h>
#define fo(i,n) for(int i=0;i<n;i++)

int main() {

  int n;
  scanf("%d", &n);
  int a[n];
  fo(i, n) { scanf("%d", &a[n]); }
  fo(i, n) { printf("%d\t", a[n]); }
}
