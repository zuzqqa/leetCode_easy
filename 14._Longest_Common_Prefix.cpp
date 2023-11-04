string longestCommonPrefix(vector<string>& strs) {
  int current_found = 0;
  int next_found = 0;

  if( strs.size() == 0 ) return "";
  else if(strs.size() == 1) return strs[0];
  
  if(strs[0].length() > strs[1].length()) {
    for(int i = 0; i < strs[1].length(); i++){
      if(strs[1][i] == strs[0][i])
        current_found++;
      else break;
    }
  }
  else {
    for(int i = 0; i < strs[0].length(); i++){
      if(strs[1][i] == strs[0][i])
        current_found++;
      else break;
    }
  }

  string current_prefix = strs[1].substr(0, current_found);

  for(int i = 2; i < strs.size(); i++){
    next_found = 0;

    for(int j = 0; j < strs[i].length(); j++){
      if(current_prefix[j] == strs[i][j])
        next_found++;
      else break;
    }

    if(next_found < current_found) current_found = next_found;
  }

  return strs[1].substr(0, current_found);
}
