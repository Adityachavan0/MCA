#include<stdio.h>
int main(){
  int n,fact=1;
  printf("Enter value of n :");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    fact*=i;
  }
  printf("Factorial of number :%d",fact);
  return 0;
}
