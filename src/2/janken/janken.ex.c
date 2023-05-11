#include <stdio.h>
#include "function.h"
#define PLAYTIME 3

int main(void) {
  int result[PLAYTIME];
  for (int i = 0; i < 3; i++) {
    printf("%d回戦目\n", i + 1);
    JPON choken = inputNumber();
    int sai = saikoro();
    JPON sysken = sysjan(sai);
    int shoubukekka = shoubu(choken, sysken);
    result[PLAYTIME] = shoubukekka;
    anatanoken(choken);
    watashinoken(sysken);
    kekka(shoubukekka);
  }

    outputResult(result);
  printf("\n終わります。お疲れさまでした。\n\n");
  return 0;
}