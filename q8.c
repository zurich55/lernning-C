#include <stdio.h>
int main(){
    int score;
    printf("input score : ");
    scanf("%d",&score);
    // printf("Your score : %d", score);
    if(score >= 80 && score <= 100)
    {
        printf("grade = G");
    }
    else if (score>=50&&score<=80)
    {
        printf("grade = P");
    }
    else if (score>=0&&score<50)
    {
        printf("grade = F");
    }
    

    


}