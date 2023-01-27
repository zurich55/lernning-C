#include <stdio.h>
int main()
{
    float pi = 1.314;
    int height;
    int radius;
    float ans;
    printf("Insert radius value: ");
    scanf("%d",&radius);
    printf("Insert height value: ");
    scanf("%d",&height);
    ans = radius*radius*height*pi;
    printf("%.2f",ans);
}