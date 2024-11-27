#include <stdio.h>
void swap(intx,inty) {
  int temp=x;
  x=y;
  y=temp;
}
int main(){
  int a=5,b=10;
  swap(&a,&b);
  printf("a=%d,b=%d\n:,a,b);
    return 0;
    }
