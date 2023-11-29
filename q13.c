#include<stdio.h>
int main(){
    int k;
    printf("input age : ");
    scanf("%d",&k);

    if (k >= 15 && k <= 90)
    {
        printf("Yes");
    }
   else 
   {
    printf("No");
   }
    return 0;
}