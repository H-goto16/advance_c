#include <stdio.h>

void watashinoken(JPON ken) {
  switch(ken) {
    case 0: {
      printf("あなたはグーを出しました。\n");
      break;
    }
    case 2: {
      printf("あなたはチョキを出しました。\n");
      break;
    }    
    case 5: {
      printf("あなたはパーを出しました。\n");
      break;
    }
  }
}