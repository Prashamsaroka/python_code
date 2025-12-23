#include <stdio.h>

int main() {
    int percentage;

    printf("Enter percentage: ");
    scanf("%d", &percentage);

    switch (percentage / 10) {
        case 10:
        case 9:
        case 8:
            printf("Distinction\n");
            break;

        case 7:
        case 6:
            printf("First Division\n");
            break;

        case 5:
        case 4:
            printf("Second Division\n");
            break;

        default:
            printf("Fail\n");
    }

    return 0;
}
