#include<stdio.h>
int main()
{
  int num1,num2,ans;
scnf("%d %d",&num1,&num2);
ans=num1 | num2;
peintf("Bitwise OR of %d and %d = %d\n",num1,num2,ans);
}
