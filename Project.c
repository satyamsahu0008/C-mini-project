#include <stdio.h>

int main() {
    int n, i, j, choice;

    printf("Pattern Logic Tool\n");
    printf("1. Increasing Triangle Pattern\n");
    printf("2. Number Pyramid Pattern\n");
    printf("3. Repeating Number Pattern\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter number of rows: ");
    scanf("%d", &n);

    switch(choice) {

        // Pattern 1
        case 1:
            printf("\nPattern 1: Increasing Triangle\n");
            for(i = 1; i <= n; i++) {
                for(j = 1; j <= i; j++) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        // Pattern 2
        case 2:
            printf("\nPattern 2: Number Pyramid\n");
            for(i = 1; i <= n; i++) {
                for(j = 1; j <= n - i; j++)
                    printf(" ");
                for(j = 1; j <= i; j++)
                    printf("%d ", j);
                printf("\n");
            }
            break;

        // Pattern 3
        case 3:
            printf("\nPattern 3: Repeating Numbers\n");
            for(i = 1; i <= n; i++) {
                for(j = 1; j <= i; j++) {
                    printf("%d ", i);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}