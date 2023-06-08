#include <stdio.h>

int fibonacci(int n) {
  if ((n == 1) || (n == 2)) {
    return 1;
  } else return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main(void) {
  int n, k;
  do {
    printf("フィボナッチ数列のn番目の要素を求めます。\n");
    printf("nとして1以上30以下の整数を入力してください。\n");
    printf("n = ");
    scanf("%d", &n);
    k = fibonacci(n);
  } while (!(n >= 0 && n <=30));
  printf("%d番目のフィボナッチ数は%dです。\n", n, k);

  return 0;
}