#include <stdio.h>
int main(){
    int x,y,n,z;
    float m;
    x = 10;
    y = 5;
    printf("x = %d, y =  %d\n",x, y);

    z = ++x * --y;
    printf("x = %d, y = %d, z = %d\n",x,y,z);
    
    x += z; // x = x + z
    printf("x = %d\n",x);

    y *= x;//y=y*x
    printf("y = %d\n",y);

    m = (float)z / x;
    printf("m = %f \n",m);

    n = z % x;
    printf("n = %d",n);
    return 0;
}