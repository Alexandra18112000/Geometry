#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y;
    double R;
    printf("circle(");
    scanf ("%d %d",&x,&y);
    printf (",");
    scanf ("%lf",&R);
    printf ("\n");
    printf ("circle(%d %d, %1.1lf)",x,y,R);
    return 0;
}
