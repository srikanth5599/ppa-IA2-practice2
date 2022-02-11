#include<stdio.h>

int input();
int gcd(int a, int b);
void output(int a, int b, int gcd);
int divisors(int n, int a[]);

int main() {
  int x, y, ans;
  x = input();
  y = input();
  ans = gcd(x, y);
  output(x, y, ans);
  return 0;
}

int input() {
  int a;
  printf("Enter a number : ");
  scanf("%d", &a);
  return a;
}

int gcd(int a, int b) {
  int hcf, a_divisors[1024], b_divisors[1024];
  // Getting the Divisors
  int a_index = divisors(a, a_divisors);
  int b_index = divisors(b, b_divisors);
  // Finding the GCD
  for(int i=a_index; i>0; i--) {
    for(int j=b_index; j>0; j--) {
      if (a_divisors[i] == b_divisors[j]) {
        hcf = a_divisors[i];
      }
    }
  }
  return hcf;
}

void output(int a, int b, int gcd) {
  printf("The GCD(HCF) of [%d,%d] is \"%d\"\n", a, b, gcd);
}

int divisors(int n, int a[]) {
  int arr_index = 0;
  for(int i=1; i<=n; i++) {
    if ((n%i) == 0) {
      a[arr_index] = n/i;
      arr_index++;
    }
  }
  return arr_index;
}