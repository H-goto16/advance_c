#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char str[] = "145";

  int value = atoi(str);

  printf("文字列stt=%s\n", str);
  printf("値value=%d\n", value);

  return 0;
}