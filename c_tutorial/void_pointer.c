#include <stdio.h>
#include <stdlib.h>

struct test_s  {
  int data;
  int level;
};



void Print(void *input, int level)
{
  switch(level) {
  case 1:
    {
      int* res = (int*)input;
      printf("case 1\n");
      break;
    }
  case 2:
    {
      float* res2 = (float*)input;
      printf("case 2\n");
      break;
    }

  case 3:
    {
      struct test_s* res3 = (struct test_s*)input;
      printf("case 3: %d\n", res3->data);
      break;
    }
  }

}


int main() {
  int *p = (int*)malloc(sizeof(int));
  *p = 5;

  struct test_s *ps = (struct test_s *)malloc(sizeof(struct test_s ));
  ps->data = 10;
  ps->level = 11;

  Print((void*)ps, 3);

  return 0;
}
