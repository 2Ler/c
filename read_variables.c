#include<stdio.h>
void int main() {
  float years,secs;
  printf("Input your age in years :");
  scanf("%f",&years);
  secs = years * 365 * 24 * 60 * 60;
  printf("You have lived for %f seconds",secs);
}
