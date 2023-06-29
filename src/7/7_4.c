#include <stdio.h>
#define QUEUE_SIZE 10
#define INPUT_STRING 50

int queue_num;

char queue[QUEUE_SIZE];
char string[] = "ABCDEFGHIJKLMN";

int enqueue(char enqueue_data) {
  if (queue_num == QUEUE_SIZE) {
    printf("Queue is full.\n");
    return 0;
  }
  queue[queue_num] = enqueue_data;
  queue_num++;
  return 1;
}

int dequeue(char *deq_data) {
  if (queue_num == 0) {
    printf("Queue is empty.\n");
    return 0;
  }
  *deq_data = queue[0];
  for (int i = 0; i < queue_num - 1; i++) {
    queue[i] = queue[i + 1];
  }
  queue[queue_num - 1] = '\0';
  queue_num--;
  return 1;
}

int main() {
  char input[INPUT_STRING];
  char dequeue_temp;
  int return_num;
  int string_num = 0;

  scanf("%s", input);

  for (int i = 0; i <= INPUT_STRING; i++) {
    if (input[i] == 'E') {
      int res = enqueue(string[string_num]);
      if (res) {
        string_num++;
      } else {
        printf("Queue overflow\n");
        break;
      }
    } else if (input[i] == 'D') {
      int res = dequeue(&dequeue_temp);
      if (!res) {
        printf("Queue underflow\n");
        break;
      }
    } else if (input[i] == '\0') {
      printf("%s\n", queue);
      break;
    } else {
      printf("EかDを入力してください。\n");
      break;
    }
  }
}
