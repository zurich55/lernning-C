#include<stdio.h>
int main(){
    int age;
    printf("How old are you : ");
    scanf("%d",&age);

    if (age>=0 && age<=10)
    {
        printf("Children");
    }
    else if (age>=11 && age<=20)
    {
        printf("Teenage");
    }
    else if (age>=21 && age<=35)
    {
        printf("Adult");
    }
    else if (age>=36 && age<=55)
    {
        printf("Middle age");
    }
    else
    {
        printf("Old age");
    }
}
