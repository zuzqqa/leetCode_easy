bool isValid(string s) {
    int b = 0;
    
  
    if( s.length() % 2 == 1 )
      return false;
    
    if ( s[0] == ')' || s[0] == '}' || s[0] == ']' ) 
      return false;

    for( int i = 0; i < s.length() - 1; i++ ){
      switch(s[i]){
        case '{':
          for( int j = i + 1; j < s.length(); j++ ){
            if(s[j] == '}') b = 1;
          }
          if( b != 1 ) return false;
          break;
        case '[':
          for( int j = i + 1; j < s.length(); j++ ){
            if(s[j] == ']') b = 1;
          }
          break;
        case '(':
          for( int j = i + 1; j < s.length(); j++ ){
            if(s[j] == ')') b = 1;
          }
          if( b != 1 ) return false;
          break;
      }
    }
  return true;
} 
