#include <stdio.h>
#include <stdlib.h>
#define SQR(x) ((x)*(x))

int main(int argc, char *argv[]) {
  float menseki;
  char *prog;

  prog = argv[0];
  
  if (argc != 2) {
    puts("引数の個数が違います。");
    exit(0);
  }
  printf("\n%s\n", prog);
  menseki = 3.14 * SQR(atoi(argv[1]));
  printf("%f\n", menseki);

  return 0;
}