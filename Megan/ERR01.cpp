#include <iostream>
#include <stdio.h>


int main () {
   FILE *filepointer;
   char c;

   filepointer = fopen("testing.txt", "r");
   if(filepointer == NULL){
     perror("Oops error opening file.");
     return 1;
   }
   c = fgetc(filepointer);
   if( ferror(filepointer)) {
      printf("Error in reading from file : testing");
   }
   clearerr(filepointer);

   if(ferror(filepointer)){
      printf("Error in reading from file : testing.txt");
   }
   fclose(filepointer);

   std::cout << "Success. " << filepointer << std::endl;
   return 0;
}
