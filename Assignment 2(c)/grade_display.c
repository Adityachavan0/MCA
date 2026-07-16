#include<stdio.h>
int main(){
  float p;
  printf("Enter Per(%) :");
  scanf("%f",&p);
 
  
  if(p>90 && p<=100){
      printf("A Grade");
  }
  else if(p>70 && p<=90){
      printf("B Grade");
  }
  else if(p>50 && p<=70)
  {
      printf("C Grade");
  }
  else if(p>35 && p<=50)
  {
      printf("D Grade");
  }
  else{
      printf("Fail");
  }
  return 0;
}
