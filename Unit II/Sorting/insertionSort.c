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

    //Insertion Sort Logic
    for(i=1;i<size;i++){
        int key=a[i];
        j=i-1;

        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    printf("\nSorted Array is:\t");
    for ( i = 0; i <size; i++)
    {
        printf("%d\t",a[i]);
    }
}