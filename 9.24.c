#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (int num = 2; num <= n; num++) {
        int a = 0;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                a = 1;
                break;
            }
        }

        if (num == 1) {
            printf("the number is neither prime nor composite\n");
        } else if (a == 0) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
