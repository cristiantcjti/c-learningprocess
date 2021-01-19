#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main(){

   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(26);
   strcpy(str, "Dynamic memory allocation,");
   cout << "String = " << str;
   cout << " Address = " << &str;

   cout << endl;

   /* Reallocating memory */
   str = (char *) realloc(str, 39);
   strcat(str, "reallocating ");
   cout << "String = " << str;
   cout << " Address = " << &str;

   free(str);
   
   return(0);
}