#include<iostream>

using namespace std;

int main( )
{
   char a[4] = "abc";
   int b=0;
   for (char *cp = a; (*cp) != '\0'; cp+2) {
      cout << (void*) cp << " : " << (*cp) << endl;
      b++;
   }
   cout << b;
   return 0;
}
