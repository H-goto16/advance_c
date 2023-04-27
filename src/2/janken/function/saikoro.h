#include <stdlib.h>
#include <time.h>

int saikoro(void)
{
  int sai;
  srand((unsigned)time(NULL));
  sai = rand() % 6;

  return sai;
}