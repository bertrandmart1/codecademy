#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
// Any string of 1 or 2 letters are palindromes
 if (text.size() <= 2){
  return true;
}
else {
 for ( int i = 0; i < text.size(); i++){
 if (text[i] == text[text.size()-(i+1)]){ // comparing each letter at the beginning and end, then beginning + 1 and end -1, etc
   return true;
 }
 else {
   return false;
 }
}
}
}
int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("annnn") << "\n";
  std::cout << is_palindrome("racecar") << "\n";
  
}
