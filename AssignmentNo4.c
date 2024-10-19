#include<stdio.h>
int main()
{
  float c,fh;
  printf("enter the temperature in fahrenheit. \n");
  scanf("%f",&fh);
  c=(fh-32)/1.8;
  printf("temperature in calsius  is%f\n" ,c);
}  