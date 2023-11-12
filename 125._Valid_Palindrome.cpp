bool isPalindrome(string s) {
  transform(s.begin(), s.end(), s.begin(), ::tolower); //convert to lowerCase

  for (int i = 0; i < s.size(); ) {
    if (!std::isalnum(s[i])) 
      s.erase(i, 1);
    else{
      i++;
    }
  }

  int i = 0, j = s.length() - 1;

  while( i < j ){
    if(s[i] != s[j]) return false;
    i++;
    j--;
  }
  
  return true;
}
