#include <stdio.h>

void watashinoken(JPON ken) {
  switch(ken) {
    case 0: {
      printf("私はグーを出しました。\n");
      break;
    }
    case 2: {
      printf("私はチョキを出しました。\n");
      break;
    }    
    case 5: {
      printf("私はパーを出しました。\n");
      break;
    }
  }
}