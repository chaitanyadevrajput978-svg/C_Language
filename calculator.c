#include<stdio.h>
int main(){
float a,b;
char sign;
printf("enter first number: ");
scanf("%f",&a);

printf("enter operation number:\n ");
scanf(" %c",&sign);

printf("enter second number: ");
scanf("%f",&b);

switch(sign){
    case'+':
    printf("%.2f+%.2f=%.2f",a,b,a+b);
    break;
    case'*':
    printf("%.2f*%.2f=%.2f",a,b,a*b);
    break;
    case'-':
    printf("%.2f-%.2f=%.2f",a,b,a-b);
    break;
    case'/':
    printf("%.2f/%.2f=%.2f",a,b,a/b);
    break;
    
    default:
    printf("invalid operators");
}
return 0;
}