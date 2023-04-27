#include <stdio.h>
#include "function.h"

int main(void) {
  JPON choken;
  JPON sysken;
  int ken_buf;
  int sai;
  int shoubukekka;
  int isCorrectInputNum;

  choken = inputNumber();
  sai = saikoro();
  sysken = sysjan(sai);
  shoubukekka = shoubu(choken, sysken);
  anatanoken(choken);
  watashinoken(sysken);
  kekka(shoubukekka);

  printf("\n終わります。お疲れさまでした。\n\n");
  return 0;
}

