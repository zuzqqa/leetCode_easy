vector<int> intersection(vector<int>& nums1, vector<int>& nums2)    {

        unordered_set<int> uniqueElements(nums1.begin(), nums1.end());

        vector<int> intersection;
        for(int num : nums2){
            if (uniqueElements.count(num) > 0) {
            intersection.push_back(num);
            uniqueElements.erase(num);
            }
        }

        return intersection;
    }
