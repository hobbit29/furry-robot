#include<stdio.h>
int main(){
    int i1, i2;
    float f1, f2;
    printf("\nEnter 2 integers followed by two float: ");
    scanf("%d %d %f %f",&i1, &i2, &f1, &f2);
    printf("\nThe integers enetered are %d and %d while floats entered by the user are %f and %f", i1, i2, f1, f2);

    return 0;
}