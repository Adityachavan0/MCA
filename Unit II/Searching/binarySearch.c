#include<stdio.h>

int main(){
    int a[50],size,i,target;
    
    printf("Enter size of array:\t");
    scanf("%d",&size);

    printf("Enter Array Elements in sorting Order:\n");
    for(i=0;i<size;i++){
        printf("%d:",i+1);
        scanf("%d",&a[i]);
    }

    printf("Array Elements Are:\t");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }

    printf("\nEnter Value for search:\t");
    scanf("%d",&target);

    int first=0,last=size-1,mid;
    int flag=0;
    while(first<=last){
        mid=(first+last)/2;
        if(a[mid]==target){
            printf("Value is present at position %d",mid+1);
            flag=1;
            break;
        }
        if(a[mid]<target){
            first =mid+1;
        }
        else{
            last=mid-1;
        }
    }
    if (flag==0)
    {
        printf("Data is not present");
    }
    
}