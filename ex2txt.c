#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   
   fptr = fopen("C:\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);
   }

float p, r, h, Ab, V, Atotal;  
// p is pie, r is radius, h, is height, Ab is area of the base, V is volume, Atotal is the total area of the cylinder 
    p=3.14;
    r=5;   
    h=7;   
    Ab= 2*p*r*h;
    Atotal= (2*p*r*h)+(2*p*r*r);
    V= Ab*h;
// .2 refers to the amount of decimals you want to have
  printf("The area of the cylinder is %.2f square units and the volume is %.2f cubic units" , Atotal, V );


   fprintf(fptr,"The total area of the cylinder is %.2f cm^2\n", Atotal);
   fprintf(fptr, "The total volume of the cylinder is %.2f cm^3", V);
   fclose(fptr);

   return 0;
}

/* 
float p, r, h, Ab, V, Atotal;  
// p is pie, r is radius, h, is height, Ab is area of the base, V is volume, Atotal is the total area of the cylinder 

int main(void){ 

    
    p=3.14;
    r=5;   
    h=7;   
    Ab= 2*p*r*h;
    Atotal= (2*p*r*h)+(2*p*r*r);
    V= Ab*h;



// .2 refers to the amount of decimals you want to have
  printf("The area of the cylinder is %.2f square units and the volume is %.2f cubic units" , Atotal, V );
  */
