#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);

    // Predefined colors
    int colors[5][3] = {
        {0, 0, 0},     
        {255, 0, 0},  
        {0, 255, 0},    
        {0, 0, 255},   
        {255, 255, 255} 
    };

    char names[5][10] = {
        "Black",
        "Red",
        "Green",
        "Blue",
        "White"
    };

    double minDist = -1;
    int closest = 0;

    for (int i = 0; i < 5; i++) {
        double dr = r - colors[i][0];
        double dg = g - colors[i][1];
        double db = b - colors[i][2];
        double dist = sqrt(dr*dr + dg*dg + db*db);

        if (minDist < 0 || dist < minDist) {
            minDist = dist;
            closest = i;
        }
    }

    printf("The nearest color is %s\n", names[closest]);

    return 0;
}


