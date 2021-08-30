#include<stdio.h> // header file

// adding two numbers a and b and storing the sum in c
int main() // before function : int -> return type
{
   
    
    int a; // before variable: int -> data type
    int b, c;

    // a=5, b=10;

    printf("Enter a number a: ");
    scanf("%d",&a);

    printf("Enter a number b: ");
    scanf("%d",&b);

    c = a+b;

    printf("addition of %d and %d: %d",a,b,c);

    return 0;

    /*

   float a; // before variable: float -> data type
    float b, c;

    // a=5.0, b=10.4;

    printf("Enter a number a: ");
    scanf("%f",&a);

    printf("Enter a number b: ");
    scanf("%f",&b);

    c = a+b;

    printf("addition of %f and %f: %f",a,b,c);

    return 0;

    */
    
}