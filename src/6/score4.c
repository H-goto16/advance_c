#include <stdio.h>
#define NUM 4

int main(void) {
  int i;

  typedef struct student {
    char name[20];
    int eigo;
    int suugaku;
    int kokugo;
    double heikin;
  } SEISEKI;


  SEISEKI score[] = {{"佐藤", 82, 72, 58}, {"鈴木", 77, 82, 79}, {"山田", 52, 62, 39}, {"藤田", 61, 82, 88}};

  SEISEKI *p;

  p = score;

  for (i = 0; i < NUM; i++) {
    p -> heikin = (double)(p -> eigo + p -> suugaku + p -> kokugo) /3;
    printf("%10s: 国語 = %3d 数学 = %3d 英語 = %3d : 平均 = %6.2f \n", p -> name, p -> kokugo, p -> suugaku, p -> eigo, p -> heikin);
    p++;
  }

  return 0;
}