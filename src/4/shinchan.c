#include <stdio.h>
#include <stdlib.h>

#define SHINChAN "クレヨンしんちゃん"

int main(int argc, char *argv[]) {
  FILE *fp;
  char *filename;

  if (argc != 2) {
    puts("引数の個数が違います。\n");
    exit(1);
  }

  filename = argv[1];

  fp = fopen(filename, "w");

  if (fp == NULL) {
    printf("ファイルオープンエラー\n");
    exit(1);
  }

  fputs(SHINChAN, fp);

  fclose(fp);

  return 0;
}