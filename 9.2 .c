#include<stdio.h>
int main()
{
    int num,div,rem,sum=0;
    scanf("%d",&num);
    while(num != 0)
    {
        rem=num % 10;
        sum=sum + rem;
        num=num/10;
    }
    printf("Sum of digit =%d\n",sum);
    return 0;
}
