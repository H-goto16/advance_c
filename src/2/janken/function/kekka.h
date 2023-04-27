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
