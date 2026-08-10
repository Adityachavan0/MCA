#include<stdio.h>

int main(){
    int a[50],i,j,size;

    printf("Enter Size:\t");
    scanf("%d",&size);

    printf("Enter Array Elements:\n");
    for(i=0;i<size;i++){
        printf("%d:",i+1);
        scanf("%d",a+i);
    }

    printf("Values in Array:\t");
    for ( i = 0; i <size; i++)
    {
        printf("%d\t",a[i]);
    }

    //Selection sort logic
    for ( i = 0; i < size; i++)
    {
        int min=i;
        for(j=i+1;j<size;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    
    printf("\nSorted Array is:\t");
    for ( i = 0; i <size; i++)
    {
        printf("%d\t",a[i]);
    }
}