#include <stdio.h>
#include <stdlib.h>
//declaration
float squarearea(float side);
float circlearea(float radius);
float rectanglearea(float a,float b);
int main() {
 //enter your code
 printf("let me know which area do you want\n");
 printf("TIP:enter first keyword only(c/s/r)\n");
 char n;
 printf("enter the shape which area do you want: ");
 scanf(" %c",&n);
if(n=='c'){
   float x;
    printf("value of radius: ");
    scanf("%f", &x);
    float area=circlearea(x);
printf("the value of area is:%.2f\n",area);}
else if(n=='s'){
    float y;
    printf("enter the value of side: ");
    scanf("%f", &y);
    float area=squarearea(y);
printf("the value of area1 is:%.2f",area);}
else if(n=='r'){
float p,q;
printf("enter the value of length: ");
scanf("%f", &p);
printf("enter the value of breadth: ");
scanf("%f", &q);
float area=rectanglearea(p,q);
printf("the value of area is:%.2f\n",area);
}
else{printf("enter keyword error :( ");}

    return 0;
}
//defination
float squarearea(float side){return side*side;}
float circlearea(float radius){return 3.14*radius*radius;}
float rectanglearea(float a,float b){return a*b;}