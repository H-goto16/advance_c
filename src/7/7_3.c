#include <stdio.h>
#define STACK_SIZE 10
#define INPUT_STRING 50
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
    stack[stack_num] = '\0';
    return 1;
  }
  return 0;
}

int main() {
  char input[INPUT_STRING];
  char pop_temp;
  unsigned short int string_num = 0; 

  scanf("%s", input);

  for (int i = 0; i <= INPUT_STRING; i++) {
    if (input[i] == 'P') {
      int res = push(string[string_num]);
      if (res) {
        string_num++;
      } else {
        printf("Stack overflow\n");
        break;
      }
    } else if (input[i] == 'O') {
      int res = pop(&pop_temp);
      if (!res) {
        printf("Stack underflow\n");
        break;
      }
    } else if (input[i] == '\0') {
      printf("%s\n", stack);
      break;
    } else {
      printf("PかOを入力してください。\n");
      break;
    }
  }
}
