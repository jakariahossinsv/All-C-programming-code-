#include<stdio.h>
int main()
{
  int n,octal=0,pow=1,rem;
  printf("enter the number :");
  scanf("%d",&n);
  while (n!=0)
  {
    rem = (n%8);
    n = n/8;
    octal = octal + (rem *pow );
    pow = pow * 10;
  }
  printf("the octal number is %d",octal);
  return 0;
}
