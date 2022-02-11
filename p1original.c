#include<stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main() {
  float b, h, ans;
  input(&b, &h);
  find_area(b, h, &ans);
  output(b, h, ans);
  return 0;
}

void input(float *base, float *height) {
  printf("Enter the base of the triangle : ");
  scanf("%f",base);
  printf("Enter the height of the triangle : ");
  scanf("%f",height);
}

void find_area(float base , float height, float *area) {
  *area = (0.5)*(base)*(height);
}

void output(float base, float height, float area) {
  printf("Area of triangle having base = \"%f\" and height = \"%f\" is [%f]\n", base, height, area);
}