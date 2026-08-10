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
    
    //Bubble Sort Logic
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size-i; j++)
        {
            if(a[j] > a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }   
    }

    printf("\nSorted Array is:\t");
    for ( i = 0; i <size; i++)
    {
        printf("%d\t",a[i]);
    }
    
}