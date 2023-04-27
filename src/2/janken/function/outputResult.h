void  outputResult(int resultArray[]) {
  struct jankenResult {
    int win;
    int lose;
    int draw;
  } result;

  result.win = 0;
  result.lose = 0;
  result.draw = 0;

  for (int i = 0; i < sizeof(resultArray); i++) {
    if (resultArray[i] == 1) {
      result.win++;
    } else if (resultArray[1] == -1) {
      result.lose++;
    } else {
      result.draw++;
    }
  }

  printf("%d勝 %d負 %d分\n", result.win, result.lose, result.lose);
  
}