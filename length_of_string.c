#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int length;

  printf("enter a string:");
  fgets(str,100,stdin);

  length =strlen(str) - 1;

  printf("length og the string:%d\n",length);
  return 0;
}
