void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
  int j = 0;

  
  for (int i = m; i < n + m; i++) {
    nums1[i] = nums2[j];
    j++;
  }

  sort(nums1.begin(), nums1.end());
}
