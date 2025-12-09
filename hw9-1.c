#include <stdio.h>

int main() {
    float a[2][2];
    float det;
    int i, j;


    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    printf("You entered\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.0f ", a[i][j]);
        }
        printf("\n");
    }


    det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);


    printf("Determinant is %f\n", det);

    return 0;
}
