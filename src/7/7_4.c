#include <stdio.h>
#define QUEUE_SIZE 10
int queue_num;

char queue[QUEUE_SIZE];
char string[] = "ABCDEFGHIJKLMN";

int enqueue(char enq_data) {
  int i;
  if (queue_num >= QUEUE_SIZE) {
    return 0;
  } else {
    if (queue_num >= 1) {
      for (i = queue_num - 1 ; i >= 0; i--) {
        queue[i + 1] = queue[i];
      }
    }
  }
  queue[0] = enq_data;
  queue_num++;
  return 0;
}

int dequeue(char *deq_data) {
  if (queue_num == 0) {
    return 1;
  } else {
    *deq_data = queue[queue_num -1];
    queue_num--;
    return 0;
  }
}

int main() {
  char dequeue_temp;
  int return_num;
  int string_num = 0;

  for (;;) {
    char input;
    do {
      printf("エンキュー(E) デキュー(D) 終了(Q)を入力してください。");
      input = getchar();
      printf("%d\n", (input == 'E' || input == 'D' || input == 'O'));
      if (input == 'E') {
        return_num = enqueue(string[string_num]);
        if (!return_num) {
          printf("Stackoverflow\n");
        } else {
          string_num++;
        }
      } else if (input == 'D') {
        return_num = dequeue(&dequeue_temp);
        if (!return_num) {
          printf("Stackunderflow\n");
        }
      } else if (input == 'Q') {
        printf("キューの中身は %s \n", queue);
      } else if ((input == 'E' || input == 'D' || input == 'O')) {
        printf("P or O or Qではない文字列です。\n");
        input == NULL;
      }
    } while ((input == 'E' || input == 'D' || input == 'O'));
    if (input == 'Q') {
      break;
    }
  }
}
