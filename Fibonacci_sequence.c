// Practical - 15

#include<stdio.h>
int main(){
    int n,a=-1,b=1,c;
    
    printf("enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
return 0;
}
