#include<stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int composite);

int main() {
  int num = input_number();
  int check = is_composite(num);
  output(num, check);
  return 0;
}

int input_number() {
  int x;
  printf("Enter a number : ");
  scanf("%d", &x);
  return x;
}

// is_composite returns : 0 == Prime and 1 == Composite

int is_composite(int n) {
  int c = 0;
  for(int i=1;i<=n;i++) {
    if(i == 1 || i == n)
    continue;
    else if (n%i == 0) {
      c = 1;
      break;
    }
  }
  return c;
}

void output(int n, int composite) {
  if(composite == 0)
  printf("\"%d\" is a Prime number\n", n);
  else
  printf("\"%d\" is a Composite number\n", n);
}