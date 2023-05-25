#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char *oide = "おいでやす。毎度おおきに";
  char *outfile = "oideyasu.txt";

  FILE *fp;

  fp = fopen(outfile, "w");

  if (fp == NULL) {
    printf("File open error! \n");
  }

  return 0;
}