#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char filename[] = "okeya.txt";
  char data[30];
  char *cp;

  int position;

  FILE *fp;

  fp = fopen(filename, "r");

  if (fp == NULL) {
    printf("ファイル「%s」のオープンに失敗\n", filename);
    exit(1);
  }

  fgets(data, 30, fp);

  cp = data;

  fclose(fp);

  while ((cp = strchr(cp, 'a')) != NULL) {
    position = (int)(cp - data) + 1;
    printf("%d番目にあります。\n", position);
    cp++;
  }
  return 0;
  
}