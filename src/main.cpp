#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    FILE *file;
    char buffer [50];
    file=fopen("/home/students/2018/ip814s12/Hello-world/lab1/geometry/src/circle.txt","w+t");
    int x, y;
    double R;
    printf("circle(");
    scanf ("%d %d",&x,&y);
    printf (",");
    scanf ("%lf",&R);
    fprintf(file, "circle(%d %d, %1.1lf)", x, y ,R);
    fclose(file);
    file=fopen("/home/students/2018/ip814s12/Hello-world/lab1/geometry/src/circle.txt","r");
    fgets (buffer,50,file);
    printf ("%s",buffer);
    fclose (file);
    return 0;
}





