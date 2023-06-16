#include <stdio.h>

int main(){
    float rollno, phy, math, chem, total, per, max;
    char name[20];

    printf("Enter Roll No : ");
    scanf("%f",&rollno);

    getchar();

    printf("Enter Name : ");
    fgets(name, 20, stdin);

    printf("Enter Physics Marks : ");
    scanf("%f", &phy);

    printf("Enter Chemistry Marks : ");
    scanf("%f", &chem);

    printf("Enter Maths Marks : ");
    scanf("%f", &math);

    printf("Enter Max Marks : ");
    scanf("%f", &max);

    total = phy + chem + math;
    per = (total * max)/100;

    printf("\n    Student Summary\n");

    printf("Student Name %s \n",name);
    printf("Physics Marks %f \n",phy);
    printf("Chemistry Marks %f \n",chem);
    printf("Maths Marks %f \n",math);
    printf("Total Marks %f \n",total);
    printf("Total Percentage %f \n",per);


}