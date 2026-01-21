#include<stdio.h>
int main(){
    int year;

    printf("enter a number=");
    scanf("%d",&year);

    if(year%400==0 || year%4==0 && year%100 !=0)
        printf("leap");
        else
        printf("not leap");

        return 0;
    
}