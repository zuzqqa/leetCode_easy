vector<vector<int>> generate(int numRows) {
  std::vector<std::vector<int>> result;

  if(numRows > 0)
    result.push_back({1});
        
  if(numRows > 1) 
    result.push_back({1,1});

  for( int i = 2; i < numRows; i++ ){
    result.push_back({});
    result[i].push_back(1);
    for( int j = 0; j < result[i-1].size() - 1; j++){
      result[i].push_back(result[i-1][j] + result[i-1][j+1]);
    }
    result[i].push_back(1);
  }

  return result;
}
