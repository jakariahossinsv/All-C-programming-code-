#include<stdio.h>
int main(){
char st [30];
printf("Enter your name or enter a line :")
scanf("%[^/n]", st);
printf("output = %s\n",st);
return 0;
}


/* or
#include<stdio.h>
int main(){
char st [30];
printf(" enter a line :")
gets(st);
printf("output = %s\n",st);
return 0;
}
*/
