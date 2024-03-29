#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char filename[] = "pyramid_f1.txt";
  FILE *fp;
  int i, h, j;

  fp = fopen(filename, "a");
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
    for (j = 1; j <= 2 * i - 1; j++) {
      fprintf(fp, "%d", i % 10);
    } 
    fprintf(fp, "\n");
  }

  fclose(fp);
  printf("ファイル「%s」に追加書き込みました。\n", filename);

  return 0;
}
