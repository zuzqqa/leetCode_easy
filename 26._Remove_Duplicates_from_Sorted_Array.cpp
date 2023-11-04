int removeDuplicates(vector<int>& nums) {
  auto itr = nums.begin();

  
  while( itr + 1 != nums.end() ){
    if( *itr == *(itr+1) ) itr = nums.erase(itr);
    else itr++;
  }
        
  return nums.size();
}
