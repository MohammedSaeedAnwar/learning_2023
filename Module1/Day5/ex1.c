#include <stdio.h>

struct box{
    double l,b,h;
};

typedef struct box box;

int main(){
    double tfa;
    box b;
    box* ptr = &b;
    printf("Enter box dimentions L B H : ");
    scanf("%lf", &ptr->l);
    scanf("%lf", &ptr->b);
    scanf("%lf", &ptr->h);
    
    tfa =  2*((ptr->l * ptr->b) + (ptr->l * ptr->h) + (ptr->b * ptr->h)); 

    printf("Total Surface Area: %lf", tfa);
    
    return 0;
}