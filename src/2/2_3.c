#include <stdio.h>
#include "2_1.h"

int sysjan(int sainome) {
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