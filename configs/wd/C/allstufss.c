#include <stdio.h>

#include <ctype.h>
int main(){




//circumference of circle
// double pi  = 3.14;
/*double radius;
//double circumference;
//printf("enter radius : ");
//scanf("%lf",&radius);
//circumference = 2 * pi * radius;
//printf("%.2lf",circumference);

*/
//INPUT #include <ctype.h>


//calculator
double mul,div,add,sub,a,b;
char in;
printf(" * or / or + or - ? :");
scanf("%c",&in);

switch(in){

case '*':
printf("_ * _ : ");
scanf("%lf%lf",&a,&b);
mul = a * b;
printf("%.2lf\n",mul);
break;
case '/':
printf("_ / _ : ");
scanf("%f%f",&a,&b);
div = a / b;
printf("%.2lf",div);
break;
case '+':
printf("_ + _ :");
scanf("%lf%lf",&a,&b);
add = a + b;
printf("%.1lf",add);
break;
case '-':
printf("_ - _ : ");
scanf("%lf%lf",&a,&b);
sub = a -b ;
printf("%.1lf",sub);
break;
default:
printf("f u!");







}














































































    return 0;
}