#include<stdio.h>
#include<string.h>

void input_string(char a[]);
void str_reverse(char a[],char reverse[]);
void output(char a[],char reverse[]);

int main() {
  char string[1024], r_string[1024];
  input_string(string);
  str_reverse(string, r_string);
  output(string, r_string);
  return 0;
}

void input_string(char a[]) {
  printf("Enter a string : ");
  scanf("%s", a);
}

void str_reverse(char a[],char reverse[]) {
  int length = strlen(a);
  for(int i=0; i<length; i++) {
    reverse[i] = a[(length-1)-i];
  }
}

void output(char a[],char reverse[]) {
  printf("The string \"%s\" is reversed to \"%s\"\n", a, reverse);
}