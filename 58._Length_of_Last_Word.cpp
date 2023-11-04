int lengthOfLastWord(string s) {
  int sz = 0, i;

  
  for( i =  s.length() - 1; s[i] == 32; i-- ) {}
  while( i >= 0 && s[i] != 32 ) {
    sz++;
    i--;
  }
  
  return sz;
}
