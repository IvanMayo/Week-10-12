#include <stdio.h>
#include <stdlib.h>

float amount;
float tax;
float total;
float Tax = .08;
char rec[100];

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("C:\\program.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%f", &amount);

  tax = amount * Tax;
  total = amount + tax;
 
printf("The original cost is %.2f \nWith sales tax your item costs is %.2f",amount ,total);

 getchar(); //this rounds my value





   printf("Value of n=%d", num);


   fclose(fptr); 
  
   return 0;
}



/*     #include <stdio.h>

//Write a program to add an 8% sales tax to a given amount and round the result to the nearest penny
//floats for my variables
//the code is just a multiplication and a sum
//tax = amount * Tax;
//total = amount + tax;

float amount;
float tax;
float total;
float Tax = .08;
char rec[100];


int main(void)
{
       
  printf("Enter the value of your item\n");
  fgets(rec, sizeof(rec), stdin);
  sscanf(rec, "%f", &amount); 
  tax = amount * Tax;
  total = amount + tax;
 
printf("With sales tax your item costs is %.2f",total);

 getchar(); //this rounds my value
 return 0;
}   */
