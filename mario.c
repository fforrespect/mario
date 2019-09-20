// Import the header (library) needed for input & output
#include <stdio.h>

// create a func called 'main' and have it take no input, and give an integer output (0 by default)
int main(void) {

  // declare the variable height as a integer
  // this is being declared outside of the do/while loop, in order to be used later on (semi-globally)
  int height;

  do {
    printf("Height: ");

    // ask for the input as an integer
    scanf("%i", &height);

    // flush the input buffer. This is being done so that there are no newline or EOF chars in the input
    int c;
    while((c = getchar()) != '\n' && c != EOF); {}

    // end the loop when the input matches what is required by the pset
  } while(height < 0 || height > 23);

  // initialise the two iterators, then the upper bound
  int i; int j; int n;

  // this for loop iterates throught the stacks
  for (i=1; i<=height; i++) {

    // all of these 4 for loops draw the amount of ' 's or '#'s needed, which are calculated by calculating the difference between the height and how many ' 's or '#'s have been printed.

    for (j=0, n=height-i; j<n; j++) {printf(" ");}
    for (j=0; j<i; j++) {printf("#");}

    // pset requires 2 spaces in the middle of the half-pyramids
    printf("  ");

    for (j=0; j<i; j++) {printf("#");}
    for (j=0, n=height-i; j<n; j++) {printf(" ");}

    // newline char after every line has been printed
    printf("\n");

  }

  // pset requires a newline at the end
  printf("\n");

}
