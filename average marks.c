#include <stdio.h>
int main(){
    float physics[4], chemistry[4], math[4];
    float total_physics=0, total_chemistry=0, total_math=0;
    float avg_physics,avg_chemistry,avg_math, overall_avg;
    int i;
    
    printf("Enter the marks for physics(Assignment, coursework, mid-term,End-term): \n");
    for(i=0;i<4;i++){
        scanf("%f",&physics[i]);
        total_physics+=physics[i];
    }
    printf("Enter the marks for math(Assignment, coursework, mid-term,End-term): \n");
    for(i=0;i<4;i++){
        scanf("%f",&math[i]);
        total_math+=math[i];
    }
    printf("Enter the marks for chemistry(Assignment, coursework, mid-term,End-term): \n");
    for(i=0;i<4;i++){
        scanf("%f",&chemistry[i]);
        total_chemistry+=chemistry[i];
    }
    //calculate the averages
    avg_physics=total_physics/4;
    avg_math=total_math/4;
    avg_chemistry=total_chemistry/4;
    overall_avg=(avg_physics+avg_math+avg_chemistry)/3;
    
    //the results of the averages are displayed below 
    printf("Average marks in physics: %.2f\n",avg_physics);
    printf("Average marks in math: %.2f\n",avg_math);
    printf("Average marks in chemistry: %.2f\n",avg_chemistry);
    printf("Overall average marks: %.2f\n",overall_avg);

    return 0;

}