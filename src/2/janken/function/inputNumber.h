#include <stdio.h>

JPON inputNumber(void) {
  JPON choken;
  int ken_buf;
  int isCorrectInputNum;
  do {
    printf("\nジャンケンをしましょう\n");
    printf("グーは0 チョキは2 パーは5を入れます。\n");
    printf("\nじゃんけんぽん！はいどうぞ：\a");

    scanf("%d", &ken_buf);
    choken = (JPON)ken_buf;

    isCorrectInputNum = (choken != Gu) && (choken != Choki) && (choken != Pa);

    if (isCorrectInputNum) {
      printf("\n@@@@正しく入れてください@@@@\n");
    }
  } while (isCorrectInputNum);

  return choken;
}