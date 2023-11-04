int strStr(string haystack, string needle) {
  int index = -1;

  
  for(int i = 0; i < haystack.length(); i++){
    if(haystack[i] == needle[0]){
      for(int j = 0; j < needle.length(); j++){
        if(haystack[i+j] != needle[j]){
          index = -1;
          break;
        }
        
        return i;
      }
    }
  }

  return index;
}
