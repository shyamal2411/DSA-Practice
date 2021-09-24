#include <stdio.h>
#include <stdlib.h>

struct Element {
  int i, j, x;
};

struct Sparse {
  int m, n, num;
  struct Element* e;
};

void create(struct Sparse* s) {
  int i;
  printf("Enter Dimensions: ");
  scanf("%d %d", &s->m, &s->n);
  printf("Number of non-zero");
  scanf("%d", &s->num);

  s->e = (struct Element*)malloc(s->num * sizeof(struct Element));
  printf("Enter non-zero elements");
  for (i = 0; i < s->num; i++)
    scanf("%d%d%d", &s->e[i].i, &s->e[i].j, &s->e[i].x);
}

void display(struct Sparse s) {
  int i, j, k = 0;
  for (i = 0; i < s.m; i++)
  // as it is call by value, -> will throw error, we should use
  {
    for (j = 0; j < s.n; j++) {
      if (i == s.e[k].i && j == s.e[k].j)
        printf("%d ", s.e[k++].x);
      else
        printf("0 ");
    }
    printf("\n");
  }
}

int main() {
  struct Sparse s;
  create(&s);
  display(s);
  return 0;
}