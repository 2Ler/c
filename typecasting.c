#include<stdio.h>
void main(){
  int i,j;
  float f;
  i = 12;
  j = 5;
  f = i / j;
  printf("%f\n",f);
  f = (float) i / j;
  printf("%f\n",f);
}
