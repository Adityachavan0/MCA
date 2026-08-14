#include<stdio.h>
int linearSearch(int size,int a[],int target){
    for(int i=0;i<size;i++){
        if(a[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int i,target,size;

    printf("Enter Size Of Array:-");
    scanf("%d",&size);

    int a[size];
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

    int flag=linearSearch(size,a,target);
    if(flag<0){
        printf("Element is not Present\n");
    }
    else{
        printf("Element found at %d index",flag);
    }
    return 0;
}
