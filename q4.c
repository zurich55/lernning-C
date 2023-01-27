#include <stdio.h>
int main(){
    float midterm,finalterm,homework,total;
    printf("input midterm score = ");   
    scanf("%f",&midterm);
    midterm = (midterm*40)/100;
    printf("midterm = %f \n",midterm);

    printf("input final score = ");
    scanf("%f",&finalterm);
    finalterm = (finalterm*50)/100;
    printf("finalterm = %f \n",finalterm);

    printf("input homework score = ");
    scanf("%f",&homework);
    homework = (homework*10)/100;
    printf("homework = %f\n",homework);
    
    printf("total %f",midterm+finalterm+homework);
    return 0;
}