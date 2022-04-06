#include<iostream>

using namespace std;

/*char* weird_string1() {
   char c[] = “123345”;
   return c;
}*/

char* weird_string() {
    char *c = "123345";
    return c;
}

int main(){
    char *c;
    cout << weird_string();
}
