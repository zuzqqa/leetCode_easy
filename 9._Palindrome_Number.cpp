bool isPalindrome(int x) {
  string pal = to_string(x);
  int y = 0;
  bool yes = 0;

  for( int i = 0; i < pal.size() / 2; i++ )
    if( pal[i] == pal[pal.size() - i - 1] ) y++;
    
  if( y == pal.size() / 2) yes = 1;

  return yes;
}
