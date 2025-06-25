#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    b= a & 7 ;
    printf("Result of devision by 8: %d\n", b);
    return 0;
}
