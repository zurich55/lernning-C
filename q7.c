// if(a > b && a < b || a == b || a!==b ||a >= b || a<= b ){

// }else {}

#include <stdio.h>
int main()
{ 
    int x = 4, y = 11;
    
    if(x >= 5 || y == 11)
    {
        printf("correct\n"); //
    }
    
    if (x == 12 && y == 10)
    {
         printf("yes x = 6\n");
    }
    else
    {
        printf("incorrect\n");
    }

    if(x<10){
        printf("wow\n");
    }
    return 0;
}