#include<stdio.h>
int main()
{
    int a,b;
    printf("Enterr a number : ");
    scanf("%d",&a);
    //using shift operator to multiplly by 5
    b=(a>>2) +a ;
    printf("Result of devision by 5: %d\n", b);
    return 0;
}
