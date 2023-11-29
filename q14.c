#include<stdio.h>
int main(){
    int i,k;
    printf("input : ");
    scanf("%d %d", &i, &k);
 if (0 <= k && k < 1000)
 {
     printf("%d",k);
 }
 else if (1000 < i && i <= 2000)
 {
     printf("%d",i);
 }
 else (k == i && k == 1000);
 {
    printf("=");
 }
 
 return 0;
}