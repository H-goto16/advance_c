#include <stdio.h>
#include <stdlib.h>

#define MAX_STRINGS 80

int main(void) {
  char filename[] = "kanemi.txt";
  char mjr[MAX_STRINGS];

  FILE *fp;

  if ((fp = fopen(filename, "r")) == NULL) {
    printf("ファイル%sのファイルのオープンに失敗\n", filename);
  }

  while (fgets(mjr, MAX_STRINGS, fp) != NULL) {
    printf("%s", mjr);
  }

  fclose(fp);

  return 0;
}