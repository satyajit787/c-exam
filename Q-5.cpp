#include <stdio.h>

void main() {
	
    int number, i;

    printf("Enter the your choice number: ");
    scanf("%d", &number);

    printf("multiple table %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

   
}
