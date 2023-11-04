 int searchInsert(vector<int>& nums, int target) {
   auto itr = lower_bound(nums.begin(), nums.end(), target);

   
   if( itr != nums.end() ) return distance(nums.begin(), itr);
   nums.push_back(target);
   sort(nums.begin(), nums.end());
   itr = lower_bound(nums.begin(), nums.end(), target);

   return distance(nums.begin(), itr);
}
