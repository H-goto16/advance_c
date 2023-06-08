#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char filename[] = "pyramid_f1.txt";
  int i, h, j;

  puts("段数を入れてください。\n");
  printf("段数 = ");
  scanf("%d", &h);
  printf("\n");

  FILE *fp;
  fp = fopen(filename, "w");
  if (fp == NULL) {
    printf("ファイル「%s」のオープンに失敗\n", filename);
    exit(1);
  }

  for (i = h; i >= 1; i--) {
    for (j = 1; j <= h - i; j++) {
      fprintf(fp, " ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      fprintf(fp, "%d", i % 10);
    }
    fprintf(fp, "\n");
  }

  fclose(fp);
  printf("ファイル「%s」に書き込みました。\n", filename);

  return 0;
}
