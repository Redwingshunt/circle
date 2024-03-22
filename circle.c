#include<stdio.h>
#include <math.h>


int main(){
const double PI = 3.1456;

double circumference;

double radius;

double area;


printf(""enter the radius of the circle to be calculated\n");
scanf("%lf, &radius");

circumference = 2 * PI * radius ;
area = PI * radius * radius;
printf("the circumference of the circle is :  %lf",circumference);
//here is the output for cicrcumference
printf("\n\nthe area of the circle is :  %lf", area);
//here is the ouput for the area of the circle.


return 0;


}