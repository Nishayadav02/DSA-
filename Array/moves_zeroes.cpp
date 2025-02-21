#include <iostream>
#include <vector>
using namespace std;

// Function to move all zeros to the end of the array
void moveZeroes(vector<int>& nums) {
    int i = 0; // Pointer for the next non-zero element position
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != 0) {
            nums[i] = nums[j];
            i++;
        }
    }
    // Fill the remaining positions with zeros
    for (int k = i; k < nums.size(); k++) {
        nums[k] = 0;
    }
    
}

// Helper function to print the array
void printArray(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Test case 1
    vector<int> nums1 = {0, 1, 0, 3, 12};
    cout << "Original array: ";
    printArray(nums1);
    moveZeroes(nums1);
    cout << "After moving zeroes: ";
    printArray(nums1);

    // Test case 2
    vector<int> nums2 = {0, 0, 0, 1, 2, 3};
    cout << "\nOriginal array: ";
    printArray(nums2);
    moveZeroes(nums2);
    cout << "After moving zeroes: ";
    printArray(nums2);

    // Test case 3
    vector<int> nums3 = {1, 2, 3, 4, 5};
    cout << "\nOriginal array: ";
    printArray(nums3);
    moveZeroes(nums3);
    cout << "After moving zeroes: ";
    printArray(nums3);

    return 0;
}