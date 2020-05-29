#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "geometry.h"

int fpt(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int Pt;
    Pt = (sqrt(pow(x1 - y1, 2) + pow(x2 - y2, 2) + pow(x3 - y3, 2)));
    return Pt;
}

int fst(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int St;
    St = ((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) / 2;
    return St;
}

float fpc(int r)
{
    float Pc;
    Pc = 2 * 3.14 * r;
    return Pc;
}

float fsc(int r)
{
    float Sc;
    Sc = 3.14 * pow(r, 2);
    return Sc;
}
