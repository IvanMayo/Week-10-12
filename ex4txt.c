#include <stdio.h>
#include <stdlib.h>

int num;
char line [20];

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("C:\\program.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);

  if (num % 2 == 0){
  printf("The number %d is pair", num);
  }
  if (num % 2 == !0){ //this means is its not equal to 0
  printf("The number %d is not pair", num);
  }

   fclose(fptr); 
  
   return 0;
}

/* #include <stdio.h>
https://github.com/IvanMayo/Week07/blob/main/chapter7ex7.c
// this program will tell you if a number is pair or not
int num;
char line [20];

int main (void){
  printf("Please introduce a number \n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &num);

  if (num % 2 == 0){
  printf("The number %d is pair", num);
  }
  if (num % 2 == !0){ //this means is its not equal to 0
  printf("The number %d is not pair", num);
  }

return 0;
}  */
