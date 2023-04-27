#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum janken { Gu = 0, Choki = 2, Pa = 5 } JPON;
typedef enum  player { sys = 0, cha } Player;  

JPON inputNumber(void);
int siakoro(void);
JPON sysjan(int sainome);
int shoubu(JPON kenin, JPON kenout);
void watashinoken(JPON ken);
void anatanoken(JPON ken);
void kekka(int status);

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

int saikoro(void) {
  int sai;
  srand((unsigned)time(NULL));
  sai = rand() % 6;

  return sai;
}

JPON sysjan(int sainome) {
  int pon;
  switch (sainome) {
    case 1 :
    case 2 : pon = 0; break; 
    case 3 : 
    case 4 : pon = 2; break;
    case 5 : 
    case 6 : pon = 5; break;
  }
  return ((JPON)pon);
}

int shoubu(JPON kenin, JPON kenout) {
  int shoubukekka;
  switch (kenin) {
    case Gu : {
      if (kenout == Gu) {
        shoubukekka = 0;
      } else if (kenout == Choki) {
        shoubukekka = 1;
      } else {
        shoubukekka = -1;
      }
      break;
    }
    case Choki : {
      if (kenout == Gu) {
        shoubukekka = -1;
      } else if (kenout == Choki) {
        shoubukekka = 0;
      } else {
        shoubukekka = 1;
      }
      break;
    }
    case Pa : {
      if (kenout == Gu) {
        shoubukekka = 1;
      } else if (kenout == Choki) {
        shoubukekka = -1;
      } else {
        shoubukekka = 0;
      }
      break;
    }
  }
  return shoubukekka;
}

void watashinoken(JPON ken) {
  switch(ken) {
    case Gu: {
      printf("私はグーを出しました。\n");
      break;
    }
    case Choki: {
      printf("私はチョキを出しました。\n");
      break;
    }    
    case Pa: {
      printf("私はパーを出しました。\n");
      break;
    }
  }
}

void anatanoken(JPON ken) {
    switch(ken) {
    case Gu: {
      printf("あなたはグーを出しました。\n");
      break;
    }
    case Choki: {
      printf("あなたはチョキを出しました。\n");
      break;
    }    
    case Pa: {
      printf("あなたはパーを出しました。\n");
      break;
    }
  }
}

void kekka(int status) {
  if (status == -1) {
    printf("あなたの負けです。\n");
  }
  else if (status == 1) {
    printf("あなたの勝ちです。\n");
  }
  else if (status == 0) {
    printf("あいこです。\n");
  } else {
    printf("引数のエラーです。\n");
  }
}



