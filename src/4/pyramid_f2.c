#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char filename[] = "pyramid_f2.txt";
  FILE *fp;
  int i, h, j, k;

  fp = fopen(filename, "w");
  if (fp == NULL) {
    printf("File open error! \n");
    exit(1);
  }

  puts("段数を入れてください。\n");
  printf("段数 = ");
  scanf("%d", &h);
  printf("\n");

  for (i = 1; i <= h; i++) {
    for (j = 1; j <= h - i; j++) {
      fprintf(fp, " ");
    }
    for (k = 1; k <= 2 * i - 1; k++) {
      fprintf(fp, "%d", i % 10);
    }
    fprintf(fp, "\n");
  }

  fclose(fp);
  printf("ファイル「%s」に書き込みました。\n", filename);

  return 0;
}
