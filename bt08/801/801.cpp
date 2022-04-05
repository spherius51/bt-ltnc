#include<iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout << &x << endl;
}
void g(int yval)
{
   int y;
   y=yval;
   cout << &y << endl;
   // in địa chỉ của y tại đây
}
int main()
{
   f(5);
   g(10);
   return 0;
}

//dia chi cua 2 bien la 1
