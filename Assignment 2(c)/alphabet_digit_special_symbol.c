#include<stdio.h>
int main(){
  char c;
  printf("Enter Character :");
  scanf("%c",&c);
 
  
  if(c>='A' && c<='Z'){
      printf("Character is alphabet");
  }
  else if(c>='a' && c<='z'){
      printf("Character is alphabet");
  }
  else if(c>='0' && c<='9')
  {
      printf("Character is digit");
  }
  else{
      printf("Character is special symbol");
  }
  return 0;
}
