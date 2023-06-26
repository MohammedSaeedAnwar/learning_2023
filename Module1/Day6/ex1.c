#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

struct Student{
        int rollno;
        char name[20];
        float marks;
};

typedef struct Student Student;

int main(){
    
    Student* ptr;
    int space =0;
    char s[50],temp[50];

    printf("Enter String: ");
    gets(s);

    for(int i=0; s[i] != '\0'; i++){
        printf("Entered Loop\n");
        printf("%d", i);
        if(isspace(s[i])){
            if(space == 0){
                printf("******Fount Space\n*******");
                printf("%s", temp);
                ptr->rollno = atol(temp);
                strcpy(temp,"");
                space++;   
            }else{
                
                strcpy(ptr->name,temp);
                strcpy(temp,"");
            }
        }
        strncat(temp,&s[i],1);
    }

    ptr->marks = atof(temp); 

    printf("%d", ptr->rollno);
    printf("%s", ptr->name);
    printf("%f", ptr->marks);

    return 0;
}