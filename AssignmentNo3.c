#include<stdio.h>
int main()
{
  float c,fh;
  printf("enter the temperature in centigrate\n");
  scanf("%f",&c);
  fh=(c*9/5.0)+32;
  printf("temperature in fahrenheit. is%f\n" ,fh);
}  