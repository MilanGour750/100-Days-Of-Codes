class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        for (int i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                index = i - 1;
                break;
            }
        }

        if (index == -1) {
            reverse(nums, 0, n - 1);
            return;
        }

        int j = n - 1;
        for (int i = n - 1; i >= index + 1; i--) {
            if (nums[i] > nums[index]) {
                j = i;
                break;
            }
        }

        swap(nums, index, j);
        reverse(nums, index + 1, n - 1);
    }

private:
    void reverse(std::vector<int>& nums, int i, int j) {
        while (i < j) {
            swap(nums, i, j);
            i++;
            j--;
        }
    }

    void swap(std::vector<int>& nums, int i, int index) {
        int temp = nums[index];
        nums[index] = nums[i];
        nums[i] = temp;
    }
};
