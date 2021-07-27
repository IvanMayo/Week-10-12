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

int H, S, M, X;
   printf("ingrese segundos\n");
   scanf("%d" , &X);

    H = X / 3600;

    X = X % 3600;

    M = X / 60;
    S = X % 60;





    printf("seconds are %i\n", S);
    printf("minutes are %i\n", M);
    printf("hours are %i\n", H);



   fprintf(fptr, "the raw seconds are %d\n", X);
   fprintf(fptr," seconds %d\n minutes %d\n hours %d",S, M, H);
   fclose(fptr);

   return 0;
}

/* #include <stdio.h>
https://github.com/IvanMayo/Week05/blob/main/ex02ivan.c
// this program converts seconds to a hours:minutes:seconds format
// one hour equals yo 3600 seconds.    one minutes equals 60 seconds
int main(void){ 

   int H, S, M, X;
   printf("ingrese segundos");
   scanf("%d" , &X);

    H = X / 3600;

    X = X % 3600;

    M = X / 60;
    S = X % 60;





    printf("seconds are %i\n ", S);
    printf("minutes are %i\n", M);
    printf("hours are %i\n", H);
    return 0;

 }  */
