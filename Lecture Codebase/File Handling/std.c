#include <stdio.h>
#include <stdlib.h>
int main(){
   char ch;
   FILE *source, *target;

   source = fopen("x1.txt", "r");
   target = fopen("x2.txt", "w");

   while ((ch = fgetc(source)) != EOF){
      fputc(ch, target);
   }
   printf("File copied successfully.\n");
   fclose(source);
   fclose(target);
   return 0;
}
