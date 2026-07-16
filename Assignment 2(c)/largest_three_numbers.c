#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter 1st value :");
  scanf("%d",&a);
  printf("Enter 2nd value :");
  scanf("%d",&b);
  printf("Enter 3rd value :");
  scanf("%d",&c);
  
  if(a>b && a>c){
      printf("%d is Grater",a);
  }
  else if(b>a && b>c){
      printf("%d is Grater",b);
  }
  else{
      printf("%d is Grater",c);
  }
  return 0;
}
