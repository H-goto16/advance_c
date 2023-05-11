#include <stdio.h>

void saidai(int *num1, int *num2, int *num3, int *max) {
  if (*num1 > *num2 && *num2 > *num3) {
    *max = *num1;
  } else if (*num2 > *num3) {
    *max = *num2;
  } else {
    *max = *num3;
  }
}

int main() {
  int x, y, z, maxv;

  printf("3つの整数を入力しなさい。\n");
  printf("x="); scanf("%d", &x);
  printf("y="); scanf("%d", &y);
  printf("z="); scanf("%d", &z);
  saidai(&x, &y, &z, &maxv);
  printf("最大値は%dです。\n", maxv);

  return 0;
}