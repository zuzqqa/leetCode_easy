int removeElement(vector<int>& nums2, int val) {
  int i = 0;

  
  for( vector<int>::iterator itr = nums2.begin(); itr != nums2.end(); itr++ ){
    if ( *itr != val ) {
      nums2[i] = *itr; 
      i++;
    }
  }
  
  return i;
}
