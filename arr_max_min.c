#include<stdio.h>
int main(){
    int arr[5];
    
    for(int i=0;i<5;i++){
        printf("enter integer %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n your input is : ");
    for(int a=0;a<=4;a++){
        printf("%d ",arr[a]);
    }

    int min,max;
    min=max=arr[0];
    for(int i=1;i<=4;i++){
        if(min>arr[i])
        min=arr[i];
        if(max<arr[i])
        max=arr[i];
    }
    printf("\nminimum value = %d\nmaximum value = %d",min,max);
    return 0;
}