//sum average

#include<stdio.h>
#include<stdlib.h>

int main(){
    int * ptr;
    int length, sum = 0;
    float avg;

    printf("Enter Number of Elements: ");
    scanf("%d",&length);

    ptr = (int*)malloc(length * sizeof(int));
    
    printf("Enter Numbers: ");
    
    for(int i=0; i< length; i++){
    scanf("%d",&ptr[i]);
    sum += ptr[i];
    }

    avg = sum / length;

    printf("The AVG is : %f", avg);
    return 0;
}