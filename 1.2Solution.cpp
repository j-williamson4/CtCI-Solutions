// Implement a function void reverse(char* str) in C or C++ which reverses
// a null-terminated string.

#include <iostream>
#include <string>

using namespace std;

void reverse(char* str);

int main() {
 char* data = NULL;
 char charArray[100] = "hello";
 data = charArray;
 reverse(data);
}

void reverse(char* str) {
  int len = 0;
  len = sizeof(str);
  char finalArray[len];
  
  for (int i = 0; i < len; i++) {
    finalArray[i] = str[(len-2) - i];
    cout << finalArray[i];	   
  }    
}
