#include<stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int is_scalene);

int main() {
  int x, y, z;
  x = input_side();
  y = input_side();
  z = input_side();
  output(x, y, z, check_scalene(x, y, z));
  return 0;
}

int input_side() {
  int x;
  printf("Enter the side : ");
  scanf("%d", &x);
  return x;
}

// check_scalene returns : 0 == notScalene and 1 == Scalene

int check_scalene(int a, int b, int c) {
  int k = 0;
  if (a != b && a != c && b != c)
  k = 1;
  return k;
}

void output(int a, int b, int c, int is_scalene) {
  if (is_scalene == 0)
  printf("Triangle having sides [%d,%d,%d] is not Scalene\n", a, b, c);
  else
  printf("Triangle having sides [%d,%d,%d] is Scalene\n", a, b, c);
}