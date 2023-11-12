std::vector<int> getRow(int rowIndex) {
  std::vector<std::vector<int>> result;

  if(rowIndex > -1)
    result.push_back({1});
        
  if(rowIndex > 0) 
    result.push_back({1,1});

  for( int i = 2; i < rowIndex + 1; i++ ){
    result.push_back({});
    result[i].push_back(1);

    for( int j = 0; j < result[i-1].size() - 1; j++){
      result[i].push_back(result[i-1][j] + result[i-1][j+1]);
    }
    result[i].push_back(1);
  }

  return result[rowIndex];
}
