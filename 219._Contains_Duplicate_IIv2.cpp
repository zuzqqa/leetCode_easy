// time complexity: O(n)
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> hset;

        for(int i = 0; i < nums.size(); i++){
            // check if there is the same element in container, if yes - return true
            if(hset.count(nums[i])) return true;

            // else insert an element
            hset.insert(nums[i]);
            
            // if size of the set becomes grater than k
            if(hset.size() > k)
                // remove the last visited element from the set
                hset.erase(nums[i-k]);
        }

        return false;
    }
