#include <stdio.h>

void takeandprintN(int n){
    for(int i = 1; i <= n; i++){
        printf("%d",i);
    }
}

void takeandprintSpace(int n){
    for(int i = 0; i < n; i++){
        printf(" ");
    }
}

void takeandprintRevN(int n){
    for(int i = n; i >= 1; i--){
        printf("%d", i);
    }
}

int main(){
    int n;
    printf("Enter N\n");
    scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        takeandprintN(i);
        takeandprintSpace(n-i);
        takeandprintSpace(n-i);
        takeandprintRevN(i);
        printf("\n");
    }
}