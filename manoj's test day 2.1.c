#include <stdio.h>

int main() {
  int  i, j, a[3][3];

  
  

  
  
  printf("Enter the elements of the matrix: \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  
  printf("Original Matrix:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }


  int transpose[j][i];
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      transpose[i][j] = a[j][i];
    }
  }


  printf("Transpose of Matrix:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}

