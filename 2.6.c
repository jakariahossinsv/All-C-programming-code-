# include <stdio .h>
int main()
{
  int num1,num2,rem;
  scanf("%d ", & num1);
  scanf("%d ", & num2);
  rem= num1 % num2 ;
  peintf ("%d %% %d = %d\n",num1,num2,rem);   // if % is not print then, print it %%  2 times
  return 0;
}
