#include <stdio.h>
#define NUM 4

int main(void) {
  int i;

  double ave_eigo, ave_suugaku, ave_kokugo = 0.0;

  typedef struct student {
    char name[20];
    int eigo;
    int suugaku;
    int kokugo;
    double heikin;
  } SEISEKI;

  SEISEKI score[] = {{"佐藤", 82, 72, 58}, {"鈴木", 77, 82, 79}, {"山田", 52, 62, 39}, {"藤田", 61, 82, 88}};

  for (i = 0; i < NUM; i++) {
    ave_eigo += score[i].eigo;
    ave_kokugo += score[i].kokugo;
    ave_suugaku += score[i].suugaku;
  }

  ave_eigo /= 4;
  ave_kokugo /= 4;
  ave_suugaku /= 4;

  for (i = 0; i < NUM; i++) {
    score[i].heikin = (double)(score[i].kokugo + score[i].suugaku + score[i].eigo) / 3;
    printf("%10s: 国語 = %3d 数学 = %3d 英語 = %3d : 平均 = %6.2f \n", score[i].name, score[i].kokugo, score[i].suugaku, score[i].eigo, score[i].heikin);
  }

  printf("-------------------------------------\n");
  printf("平均 : 英語 = %5.1f 数学 = %5.1f 国語 = %5.1f \n", ave_eigo, ave_suugaku, ave_kokugo);

  return 0;
}