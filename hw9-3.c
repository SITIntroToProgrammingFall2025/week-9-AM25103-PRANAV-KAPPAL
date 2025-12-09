#include <stdio.h>
#include <math.h>

void print_value(float x) {
    if (fabs(x - roundf(x)) < 0.0001) {
        printf("%.0f ", roundf(x));
    } else {
        printf("%.1f ", x);
    }
}

int main() {
    float A[2][3], B[3][2], C[2][2];
    int i, j, k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%f", &B[i][j]);
        }
    }

    printf("the first matrix you entered is\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            print_value(A[i][j]);
        }
        printf("\n");
    }

    printf("the second matrix you entered is\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            print_value(B[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0.0;
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("the multiplication product of matrix A and matrix B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            print_value(C[i][j]);
        }
        printf("\n");
    }

    return 0;
}


