#include <stdio.h>

int main () {
  printf("\x1b[35m-----------------------------------------\n");
  printf("                NOTA LEGAL               \n");
  printf("-----------------------------------------\x1b[0m\n");
  printf("ITEM             QTD         VALOR\n");
  printf("%-17s %02i %13.2f\n", "Banana nanica", 1, 15.00);
  printf("%-17s %02i %13.2f\n", "Maca fuji", 10, 50.00);
  printf("%-17s %02i %13.2f\n", "Uva globo", 5, 26.00);
  //printf("Banana nanica     1          15.00\n");
  //printf("Maca fuji        10          50.00\n");
  //printf("Uva globo         5          26.00\n");
  printf("\x1b[33m-----------------------------------------\n");
  printf("TOTAL .........: R$ %14.2f\x1b[0m\n", 91.00);
  
  return 0;
  
}