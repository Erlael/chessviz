#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "geometry.h"


int main()
{
    int n, i;
    char m1[80] = "triangle";
    char m2[80] = "circle";
    char m3[80];
    int a1, a2, b1, b2, c1, c2, r, S, P;
    printf("How many figures do you work with?");
    scanf("%d", &n);
    printf("Enter figures: \n");
    for (i = 1; i <= n; i++) {
        scanf("%s", m3);
        if (strcmp(m1, m3) == 0) {
            printf("Enter the vertices");
            scanf("%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2);
            S = fst(a1, a2, b1, b2, c1, c2);
            P = fpt(a1, a2, b1, b2, c1, c2);
            if (S < 0)
                S = -S;
            printf("%d Triangle \n S:%d \n P:%d", i, S, P);
        } else if (strcmp(m2, m3) == 0) {
            printf("Enter center and radius");
            scanf("%d", &a1);
            scanf("%d", &r);
            S = fsc(r);
            P = fpc(r);
            printf("%d Circle \n S:%d \n P:%d", i, S, P);
        } else {
            printf("Error");
        }
    }
        
    return 0;
}       