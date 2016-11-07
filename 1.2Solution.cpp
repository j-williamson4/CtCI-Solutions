// Implement a function void reverse(char* str) in C or C++ which reverses
// a null-terminated string.

void reverse(char* str) {
  int len = strlen(str);
  char reversedString[len];
  for (int i = 0; i < len; i++) 
   reversedString[i] = str[(len-1)-i];	   
}
