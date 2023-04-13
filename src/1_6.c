#include <stdio.h>
#include <stdlib.h>


int main(void) {
  typedef enum koyomi {January = 1, Febuary, March, April, May, June, July, August, September, October, November, December} Calender;
  enum four_seasons { Spring, Summer, Autumn, Winter } season;
  
  int keyin;
  Calender month;

  do {
    printf("Please input 1 to 12\n");
    scanf("%d", &keyin);

    month = (Calender)keyin;
    if ((month < January) || (month > December)) {
      printf("Does not exit month\n");
    }
  } while  (((month > January) && (month < December)));


  switch (month) {

    case March:
    case April:
    case May:
      season = Spring;
      break;

    case June:
    case July:
    case August:
      season = Summer;
      break;

    case September:
    case October:
    case November:
      season = Autumn;
      break;

    case December:
    case January:
    case Febuary:
      season = Winter;
      break;

    default:
      printf("Does not exit such month\n");
  }

  printf("%d\n", season);

  return 0;
}