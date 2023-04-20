#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int saikoro(void) {
  int sai;
  srand((unsigned)time(NULL));
  sai = rand();

  return sai;
}

main() {
  printf("%d", saikoro());
  return 0;
}