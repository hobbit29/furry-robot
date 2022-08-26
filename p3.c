#include<stdio.h>
int main(){
    int i1, i2;
    float f1, f2;
    char c1, c2;
    double d1, d2;
    printf("Enter the first integer %d", i1);
    scanf("%d", &i1);
    printf("\nThe first entered integer is: %d", i1);
    
    printf("Enter the second integer %d", i2);
    scanf("%d", &i2);
    printf("\nThe second entered integer is: %d", i2);
    
    printf("Enter the first float %f", f1);
    scanf("%f", &f1);
    printf("\nThe first entered float is: %f", f1);
    
    printf("Enter the second float %f", f2);
    scanf("%f", &f2);
    printf("\nThe second entered float is: %f", f2);
    
    printf("Enter the first char %c", c1);
    scanf("%c", &c1);
    printf("\nThe first entered char is: %c", c1);
    
    printf("Enter the second char %c", c2);
    scanf("%c", &c2);
    printf("\nThe first entered char is: %c", c2);
    
    printf("Enter the first double %lf", d1);
    scanf("%lf", &d1);
    printf("\nThe first entered double is: %lf", d1);
    
    printf("Enter the second double %lf", d2);
    scanf("%lf", &d2);

    printf("\nThe second entered double is: %lf", d2);

    printf("\nEnter 2 integers followed by 2 float, 2 char and 2 double: ");
    scanf("%d %d %f %f %c %c %lf %lf",&i1, &i2, &f1, &f2, &c1, &c2 ,&d1,&d2);
    printf("\nint1: %d \nint2: %d\nfloat1: %f \nfloat2: %f \nchar1: %c  \nchar2: %c \n double1: %lf \n double2: %lf", i1, i2, f1, f2, c1, c2, d1, d2);
    

    return 0;
}