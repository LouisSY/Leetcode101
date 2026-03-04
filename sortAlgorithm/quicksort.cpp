#include <iostream>
#include <vector>

int partition(std::vector<int>& nums, int left, int right) {
    const int pivotNum = nums[right];
    int i = left - 1;

    for (int j = left; j < right; ++j) {
        if (nums[j] < pivotNum) {
            ++i;
            std::swap(nums[j], nums[i]);
        }
    }

    std::swap(nums[right], nums[i + 1]);

    return i + 1;
}

void quickSort(std::vector<int>& nums, int left, int right) {
    if (left < right) {
        int pivotIndex = partition(nums, left, right);

        quickSort(nums, left, pivotIndex - 1);
        quickSort(nums, pivotIndex + 1, right);
    }
}


int main() {
    // std::vector<int> nums{2, 2, 7, 1, 3, 1, 4};
    std::vector<int> nums{
        45, 23, 67, 12, 89, 34, 56, 78, 90, 11,
        32, 54, 76, 98, 21, 43, 65, 87, 19, 41,
        63, 85, 17, 39, 61, 83, 15, 37, 59, 81,
        13, 35, 57, 79, 91, 24, 46, 68, 10, 33,
        55, 77, 99, 22, 44, 66, 88, 20, 42, 64,
        86, 18, 40, 62, 84, 16, 38, 60, 82, 14,
        36, 58, 80, 92, 25, 47, 69, 31, 53, 75,
        97, 26, 48, 70, 12, 34, 56, 78, 50, 72,
        94, 28, 30, 52, 74, 96, 29, 51, 73, 95,
        27, 49, 71, 93, 8, 6, 4, 2, 1, 3
    };

    quickSort(nums, 0, nums.size() - 1);

    for (auto num : nums) {
       std::cout << num << ' ';
    }

    std::cout << std::endl;
}