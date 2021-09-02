#include <stdio.h> /*Hw1*/
#include <math.h> 
int main(void)
{
  /*setting varibles*/
    int x, y, sum, prod, diff, quo, re ;
    /*Recieving inputs*/
    printf("Enter the first value x: ");
    scanf("%d", &x);
    printf("Enter the first value y: ");
    scanf("%d", &y);
    sum =x+y;
    prod =x*y;
    diff =y-x;
    quo =x/y;
    re =x%y;
    /*Printing results*/
    printf("%d+%d=%d\n",x,y, sum);
    printf("%d*%d=%d\n",x,y, prod);
    printf("%d-%d=%d\n",x,y, diff);
    printf("%d/%d=%d\n",x,y, quo);
    printf("%d//%d=%d\n",x,y, re);
    
    /*Part 2 of hw 1*/
    float a,b,c,exp1,exp2,exp3;
     printf("Enter the value a: ");
    scanf("%f", &a);
    printf("Enter the value b: ");
    scanf("%f", &b);
     printf("Enter the value c: ");
    scanf("%f", &c);
    /*Printing and solving out expressions*/
    exp1= pow(b,2) - 4*(a*c);
    printf("exp1    --->   %.2f\n",exp1);
    exp2= (a+b)/(c+exp1);
    printf("exp2    --->   %.2f\n",exp2);
    exp3=(1)/(1+pow(a,2));
    printf("exp3    --->   %.2f\n",exp3);
    



}