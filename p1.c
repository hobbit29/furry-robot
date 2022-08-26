#include<stdio.h>
int main(){
    int i1, i2;
    float f1, f2;
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
    return 0;
}