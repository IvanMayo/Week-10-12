#include <stdio.h>                
#include <stdlib.h>               

/* here i define my text as a char and also de exit one

define the variables i use  */
char beging[] = "START.txt";
char exitb[] = "END.txt"; 
int x;                    
int y;
int tab = 2; 


int main(void)
{             

  FILE *beging1;
  FILE *exit1; 


  beging1 = fopen(beging, "r");

  if (beging1 == NULL) {
    fprintf(stderr, "No file found %s\n", beging); 
    exit(0);
    }

  exit1 = fopen(exitb, "w");

  if (exit1 == NULL) {

    fprintf(stderr, "No file found %s\n", exitb);
    exit(0);
    }

  while (1) {
  x = fgetc(beging1);

  if (x == ' ') { 
  x = ' ';
  
  for (y = 0; y <= tab; y++) {
  fputc(x, exit1);
  }
}
  if (x == EOF) 
  break;

  fputc(x, exit1);
  }

  fclose(beging1); 
  fclose(exit1); 

    return 0;
}
