/**
 * C program to find  circumference and area of a circle using functions
 */

#include <stdio.h>
#include <math.h> 

double getCircumference(double radius);
double getArea(double radius);


int main() 
{
    float radius, circ, area;
    
   
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
           
    circ = getCircumference(radius);  
    area = getArea(radius);           
    
    
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);
    
    return 0;
}
double getCircumference(double radius) 
{
    return (2 * M_PI * radius); 
}
double getArea(double radius)
{
    return (M_PI * radius * radius); 
}
