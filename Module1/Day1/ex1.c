#include <stdio.h>

int main(){
    int a,b;
    printf("Find Biggest Number\n");

    printf("Enter Num1\n");
    scanf("%d",&a);

    printf("Enter Num2\n");
    scanf("%d",&b);

    if(a > b){
        printf("\n %d is greater than %d\n",a,b);
    }else{
        printf("%d is greater than %d\n",b,a);
    }

    printf("Result using Ternary Operator\n");

    a > b? printf("%d is greater than %d\n",a,b) : printf("%d is greater than %d\n",b,a); 

    return 0;
}
