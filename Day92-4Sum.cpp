
class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
        std::vector<std::vector<int>> quadruplets;

        if (nums.empty() || nums.size() < 4) {
            return quadruplets;
        }

        std::sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            for (int j = i + 1; j < n - 2; j++) {
                if (j != i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }

                int k = j + 1;
                int l = n - 1;

                while (k < l) {
                    int currentSum = nums[i] + nums[j] + nums[k] + nums[l];

                    if (currentSum < target) {
                        k++;
                    } else if (currentSum > target) {
                        l--;
                    } else {
                        quadruplets.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;

                        while (k < l && nums[k] == nums[k - 1]) {
                            k++;
                        }

                        while (k < l && nums[l] == nums[l + 1]) {
                            l--;
                        }
                    }
                }
            }
        }

        return quadruplets;
    }
};
