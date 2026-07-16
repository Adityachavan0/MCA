#include<stdio.h>
int main(){
  int n,sum=0;
  printf("Enter value of n :");
  scanf("%d",&n);
  while(n!=0){
    int rem=n%10;
    sum+=rem;
    n/=10;
  }
  printf("Sum of digit :%d",sum);
  return 0;
}
