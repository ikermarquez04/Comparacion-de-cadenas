#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	char palabra1[] = "zorro";
	char palabra2[] = "tren";

	   if (strcmp(palabra1,palabra2)<0)
	   {
		   cout << palabra1 << "es la siguiente, alfabeticamente";
	   }

   getch();
   return 0;
}
