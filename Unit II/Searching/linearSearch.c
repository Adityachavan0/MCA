#include<stdio.h>

int main(){
    int a[50],i,target,size,flag=0;

    printf("Enter Size Of Array:-");
    scanf("%d",&size);

    printf("Enter Array Elements:\n");
    for(i=0;i<size;i++){
        printf("%d:",i+1);
        scanf("%d",&a[i]);
    }

    printf("Values in Array:\t");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    
    printf("\nEnter Value for Search:\t");
    scanf("%d",&target);

    for(i=0;i<size;i++){
        if(a[i]==target){
            flag=1;
            printf("Data is Present at position %d\n",i+1);
            break;
        }
    }
    if(flag==0){
        printf("Data is not Present\n");
    }
    return 0;
}