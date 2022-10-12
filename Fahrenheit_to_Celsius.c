#include<stdio.h>
int main()
{
    float r;
    scanf("%f",&r);
    float h;
    h=((r-32)*5)/9;
    printf("%.2f",h);
    return 0;
}