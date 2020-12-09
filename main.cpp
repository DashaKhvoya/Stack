#include "Stack.h"

int main() {
  Stack_t stk = {};

  construct(stk);

  for (int i = 0; i < 201; i++) {
    StackPush(&stk, i+1);
  }

  for (int i = 0; i < 101; i++) {
    StackPop(&stk);
  }

  printf ("%f\n", StackTop(&stk));
  printf ("%lu\n", stk.capacity);

  return 0;
}
