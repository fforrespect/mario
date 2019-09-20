#include <stdio.h>

int main(void) {
  int height;

  do {
    printf("Height: ");
    scanf("%d", &height);
    int c;
    while((c = getchar()) != '\n' && c != EOF); {}
  } while(height < 0 || height > 23);

  int i; int j; int n;

  for (i=1; i<=height; i++) {
    for (j=0, n=height-i; j<n; j++) {printf(" ");}
    for (j=0; j<i; j++) {printf("#");}

    printf("  ");

    for (j=0; j<i; j++) {printf("#");}
    for (j=0, n=height-i; j<n; j++) {printf(" ");}

    printf("\n");

  }
  printf("\n");

}
