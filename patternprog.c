#include <stdio.h>
int main() {
   int i, j, rows,n=65;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ",n);
         n++;
      }
      printf("\n");
   }
   return 0;
}