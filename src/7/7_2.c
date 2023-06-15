#include <stdio.h>

#define QUEUE_SIZE 100

int queue[QUEUE_SIZE];
int q_num;


int enqueue(int enq_data) {
  int i;
  if (q_num >= QUEUE_SIZE) {
    return 0;
  } else {
    if (q_num >= 1) {
      for (i = q_num - 1; i >= 0; i--) {
        queue[i + 1] = queue[i];
      }

    }
  queue[0] = enq_data;
  q_num++;
  return 0;
  }
}

int dequeue(int *deq_data) {
  if (q_num == 0) {
    return 0;
  } else {
    *deq_data = queue[q_num -1];
    q_num--;
    return 1;
  }
}