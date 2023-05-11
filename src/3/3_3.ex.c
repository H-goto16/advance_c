#include <stdio.h>
#include <string.h>

int main(void) {
  char kaze[] = "Kazega hukeba okeyaga moukaru";
  char *cp = kaze;
  char target;

  int position;

  printf("\n%s", kaze);

  printf("検索する文字列を入力してください\n");

  target = getchar();

  printf("上の文字列に%cは\n", target);

  while ((cp = strchr(cp, target)) != NULL) {
    position = (int)(cp - kaze) + 1;
    printf("%d番目にあります。\n", position);
    cp++;
  }

  return 0;
}