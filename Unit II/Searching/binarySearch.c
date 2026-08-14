#include<stdio.h>

int binarySearch(int size,int a[],int target){
    int first=0,last=size-1,mid;
    while(first<=last){
        mid=(first+last)/2;
        if(a[mid]==target){
            return mid;
            break;
        }
        if(a[mid]<target){   
            first =mid+1;
        }
        else{
            last=mid-1;
        }
    }
    return -1;
}
int main(){
    int size,i;
    
    printf("Enter size of array:\t");
    scanf("%d",&size);

    int a[size];
    printf("Enter Array Elements in sorting Order:\n");
    for(i=0;i<size;i++){
        printf("%d:",i+1);
        scanf("%d",&a[i]);
    }

    printf("Array Elements Are:\t");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    int target;
    
    printf("\nEnter Value for search:\t");
    scanf("%d",&target);

    int flag=binarySearch(size,a,target);
    if (flag>=0)
    {
        printf("Element presentn at %d index",flag);
    }
    else{
        printf("Element not present");
    }   
}
