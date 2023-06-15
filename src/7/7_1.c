#include <stdio.h>

#define STACK_SIZE 100

int stack[STACK_SIZE];
int stack_num;

int push(int push_data) {
  if (stack_num < STACK_SIZE) {
    stack[stack_num] = push_data;
    stack_num++;
    return 1;
  } else {
    return 0;
  }
}

int pop(int *pop_data) {
  if (stack_num > 0) {
    stack_num--;
    *pop_data = stack[stack_num];
    return 1;
  } else {
    return  0;
  }
}