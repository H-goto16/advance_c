#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a, b, sum;

  if (argc != 3) {
    puts("引数の個数が違います。");
    exit(1);
  }

  printf("平均 = %f\n", (float)(atoi(argv[1]) + atoi(argv[2])) / 2);

  return 0;
}