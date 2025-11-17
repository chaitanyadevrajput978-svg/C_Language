#include<stdio.h>
int main(){

    int n;
    double fac=1;
    printf("enter a number: ");
    scanf("%d",&n);

    if(n!=0){
        for(int i=1;i<=n;i++){
        fac = fac*i;
        }
    }
    else{
        printf("");
    
    }
    printf("factorial of %d is %lf",n,fac);
    return 0;


}
