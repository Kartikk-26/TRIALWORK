#include <stdio.h>
int main() {
   int i, j, rows,n=97,k=65;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
   	printf("%c ",k+1);
   	k++;
      for (j = 1; j <= i; ++j) {
         printf("%c ",n+1);
         n++;
      }
      printf("\n");
   }
   return 0;
}
