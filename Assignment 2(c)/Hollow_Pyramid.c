/*Pattern:-
      * 
     * * 
    *   * 
   *     * 
  *       * 
 * * * * * *
*/
#include<stdio.h>
int main(){
  int n;
  printf("Enter value of n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
      for(int j=n;j>=i;j--){
          printf(" ");
      }
      for(int k=1;k<=i;k++){
          if(k==1 || k==i || i==n){
            printf("* ");
          }
         else{
             printf("  ");
         }
      }
      printf("\n");
  }
  return 0;
}
