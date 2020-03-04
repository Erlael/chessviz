#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fpt (int x1, int y1, int x2, int y2, int x3, int y3){
int Pt;
Pt = (sqrt(pow(x1 - y1, 2)+ pow(x2 - y2, 2) + pow(x3 - y3, 2)));
return Pt;
}

int fst (int x1, int y1, int x2, int y2, int x3, int y3){
int St;
St = ((x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1))/2;
return St;
}

float fpc (int r){
float Pc;
Pc = 2 * 3.14 * r;
return Pc;
}

float fsc (int r){
float Sc;
Sc = 3.14 * pow(r, 2);
return Sc;
}

int main ()
{
int n, i;
char m1[80] ="triangle";
char m2[80]= "circle";
char m3[80];
int a1, a2, b1, b2, c1,c2,r,S, P;
printf ("How many figures do you work with?");
scanf( "%d", &n);
printf("Enter figures: \n");
for (i=1; i<=n; i++){
scanf ("%s", &m3);
if ( strcmp (m1, m3) ==0)
{
printf("Enter the vertices");
scanf ("%d %d %d %d %d %d", &a1 ,&a2, &b1, &b2, &c1, &c2);
S=fst(a1,a2,b1,b2,c1,c2);
P=fpt(a1,a2,b1,b2,c1,c2);
printf("%d Triangle \n S:%d \n P:%d",i,S,P );
}
else if(strcmp(m2,m3)==0){
printf ("Enter center and radius");
scanf("%d", &a1);
scanf("%d",&r);
S=fsc(r);
P=fpc(r);
printf("%d Circle \n S:%d \n P:%d", i,S,P);
}
else {
printf ("Error");
}
}

return 0;
}