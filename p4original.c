#include<stdio.h>

int input_array_size();
void input_array(int n, int a[]);
int sum_composite_numbers(int n, int a[]);
void output(int sum);
int is_composite(int n);

int main() {
  int as, nums[1024], add; 
  as = input_array_size();
  input_array(as, nums);
  add = sum_composite_numbers(as, nums);
  output(add);
  return 0;
}

int input_array_size() {
  int a;
  printf("Enter array size : ");
  scanf("%d", &a);
  return a;
}


void input_array(int n, int a[]) {
  printf("Enter the numbers : ");
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
}

int sum_composite_numbers(int n, int a[]){
  int sum = 0, composite[1024], c_index = 0;
  // Grouping Composite numbers
  for (int i= 0; i<n; i++) {
    if(is_composite(a[i]) == 1){
      composite[c_index] = a[i];
      c_index++;
    }
  }
  // Summing Composite numbers
  for(int i=0; i<c_index; i++) {
    sum += composite[i];
  }
  return sum;
}

void output(int sum) {
  printf("The sum of only the Composite numbers = %d\n", sum);
}

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