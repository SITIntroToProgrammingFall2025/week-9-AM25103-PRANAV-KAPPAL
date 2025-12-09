#include <stdio.h>

int main() {
    int a[3][3], flipped[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            flipped[i][j] = a[i][2 - j];
        }
    }

    printf("You entered\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    printf("Output\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", flipped[i][j]);
        }
        printf("\n");
    }

    return 0;
}
