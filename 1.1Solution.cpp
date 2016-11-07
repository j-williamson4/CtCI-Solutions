// Implement an algorithm to detrmine if a string has all unique
// characters. What if you cannot use additional data structures?

// returns false if no duplicate letters are found

bool dupLetterString (string s) {
 for (int i = 0; i < s.length(); i++) {
  for(int j = i+1; j < s.length(); j++) {
    if(s[i] == s[j]) return true;
   }	 
 }
 return false;
} 
