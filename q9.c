#include <stdio.h>
int main(){
    float midterm,final,homework,total;
    printf("input midterm score = ");
    scanf("%f",&midterm);
    midterm = (midterm*40)/100;
    printf("midterm score = %f\n",midterm);

    printf("input final score = ");
    scanf("%f",&final);
    final = (final*50)/100;
    printf("final score = %f\n",final);

    printf("input homework score = ");
    scanf("%f",&homework);
    homework = (homework*10)/100;
    printf("homework = %f\n",homework);

    total = midterm+final+homework;
    printf("total score = %f\n",midterm,final,homework);

    if (total>=90 && total<=100)
    {
        printf("grade = A");
    }
    else if (total>=85&&total<=90)
    {
        printf("grade = B+");
    }
    else if (total>=80&&total<=85)
    {
        printf("grade = B");
    }
    else if (total>=70&&total<=80)
    {
        printf("grade = C+");
    }
    else if (total>=60&&total<=70)
    {
        printf("grade = C");
    }
    else if (total>=55&&total<=60)
    {
        printf("grade = D+");
    }
    else if (total>=50&&total<=55)
    {
        printf("grade = D");
    }
     else if (total<=50)
    {
        printf("grade = F");
    }
    
}
    
    
    