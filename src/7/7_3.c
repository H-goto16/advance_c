#include <stdio.h>
#define STACK_SIZE 10
int stack_num;

char stack[STACK_SIZE];
char string[] = "ABCDEFGHIJKLMN";

int push(char push_data) {
  if (stack_num < STACK_SIZE) {
    stack[stack_num] = push_data;
    stack_num++;
    return 1;
  }
  return 0;
}

int pop(char *pop_data) {
  if (stack_num > 0) {
    stack_num--;
    *pop_data = stack[stack_num];
    return 1;
  }
  return 0;
}

int main() {
  char pop_temp;
  int return_num;
  int push_num = 0;

  for (;;) {
    char input;
    do {
      printf("プッシュ(P) ポップ(O) 終了(Q)を入力してください。");
      input = getchar();
      printf("%d\n", (input == 'P' || input == 'Q' || input == 'O'));
      if (input == 'P') {
        return_num = push(string[push_num]);
        if (!return_num) {
          printf("Stackoverflow\n");
        } else {
          push_num++;
        }
      } else if (input == 'O') {
        return_num = pop(&pop_temp);
        if (!return_num) {
          printf("Stackunderflow\n");
        }
      } else if (input == 'Q') {
        printf("スタックの中身は %s \n", stack);
      } else if ((input == 'P' || input == 'Q' || input == 'O')) {
        printf("P or O or Qではない文字列です。\n");
        input == NULL;
      }
    } while ((input == 'P' || input == 'Q' || input == 'O'));
    if (input == 'Q') {
      break;
    }
  }

  return 0;
}
