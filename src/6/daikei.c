#include <stdio.h>

float culcSq(int up, int down, int height) {
  return (up + down) * height / 2;
}

int main(void) {
  typedef struct daikei {
    int kahen;
    int jouhen;
    int takasa;
  } SideLength;

  SideLength da, db;
  
  puts("台形A");
  printf("下辺 = ");
  scanf("%d", &da.kahen);
  printf("上辺 = ");
  scanf("%d", &da.jouhen);
  printf("高さ = ");
  scanf("%d", &da.takasa);
  puts("台形B");
  printf("下辺 = ");
  scanf("%d", &db.kahen);
  printf("上辺 = ");
  scanf("%d", &db.jouhen);
  printf("高さ = ");
  scanf("%d", &db.takasa);

  SideLength dc = {da.jouhen + db.jouhen, da.kahen + db.kahen, da.takasa + db.takasa};

  printf("台形Aの面積 : %f\n台形Bの面積 : %f\n台形Cの面積 : %f\n", culcSq(da.jouhen, da.kahen, da.takasa), culcSq(db.jouhen, db.kahen, db.takasa), culcSq(dc.jouhen, dc.kahen, dc.takasa));

  return 0;
}