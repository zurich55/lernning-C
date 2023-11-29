#include <stdio.h>
int main(){
    int x,y;
    printf("Enter number 1 = ");
    scanf("%d",&x);

    printf("Enter number 2 = ");
    scanf("%d",&y);

    if (x>y)
    {
        printf("Maximum is = %d",x,y);
    }

    else if (y>x)
    {
        printf("Maximum is = %d",x,y);
    } 
}

