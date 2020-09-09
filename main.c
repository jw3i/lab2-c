// Author: Ran Wei rjw5762@psu.edu
// Collaborator: Devansh Agarwal dqa5365@psu.edu
// Collaborator: Andrew Galvin apg5733@psu.edu
// Section: 1
// Breakout: 12

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>


int main(void) {
  char *let = readline("Enter your CMPSC 131 grade: ");
  
  double gra = atof(let);
  
  if (gra >= 93.0 ){
    char *letter = "A";
    printf("Your letter grade for CMPSC 131 is %s.\n",letter);
  }
  else if (90.0 <= gra&&gra < 93.0){
    char *letter = "A-";
    printf("Your letter grade for CMPSC 131 is %s.\n",letter);
  }
  else if (87.0 <= gra&&gra <= 90.0){
    char *letter = "B+";
    printf("Your letter grade for CMPSC 131 is %s.\n",letter);
  }
  else if (83.0 <= gra&&gra < 87.0){
    char *letter = "B";
    printf("Your letter grade for CMPSC 131 is %s.\n",letter);
  }
  else if (80.0 <= gra&&gra < 83.0){
    char *letter = "B-";
    printf("Your letter grade for CMPSC 131 is %s.\n",letter);
  }
  else if (77.0 <= gra&&gra < 80.0){
    char *letter = "C+";
    printf("Your letter grade for CMPSC 131 is %s.\n",letter);
  }
  else if (70.0 <= gra&&gra < 77.0){
    char *letter = "C";
    printf("Your letter grade for CMPSC 131 is %s.\n",letter);
  }
  else if (60.0 <= gra&&gra < 70.0){
    char *letter = "D";
    printf("Your letter grade for CMPSC 131 is %s.\n",letter);
  }
  else if (gra < 60.0){
    char *letter = "F";
    printf("Your letter grade for CMPSC 131 is %s.\n",letter);
  }
  
return 0;
}