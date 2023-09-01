class Solution {
public:

    int threeSumClosest(vector<int> nums, int target) {
        int ans = numeric_limits<int>::max();
        int min_diff = numeric_limits<int>::max();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < static_cast<int>(nums.size()) - 2; ++i) {
            if (i == 0 || nums[i] != nums[i - 1]) { 
                int j = i + 1;
                int k = nums.size() - 1;
    
                while (j < k) { 
                    const auto sum = nums[i] + nums[j] + nums[k];
    
                    if (sum > target) {  
                        --k;
                    } else if (sum < target) { 
                        ++j;
                    } else {
                        return target;
                    }
    
                    if (abs(sum - target) < min_diff) {
                        min_diff = abs(sum - target);
                        ans = sum;
                    }
                }
            }
        }

        return ans;
    }
};
