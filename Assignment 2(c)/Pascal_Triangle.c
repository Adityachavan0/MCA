/*Pattern:-
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 
*/

#include <stdio.h>

int main() {
    int n ;
    int i, j;
    int value;
    printf("Enter value of n :");
    scanf("%d",&n);
    for (i = 0; i < n; i++) {

        // Print spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        value = 1;

        // Print Pascal Triangle values
        for (j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
