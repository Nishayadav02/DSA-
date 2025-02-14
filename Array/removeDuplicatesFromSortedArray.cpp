#include <iostream>
#include <vector>
using namespace std;

// Function to remove duplicates from a sorted array
int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    int k = 1; // Tracks the position of the next unique element.
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k++] = nums[i];
        }
    }
    return k;
}
// Main function for testing
int main() {
    // Test case 1
    vector<int> nums1 = {1, 1, 2};
    int uniqueCount1 = removeDuplicates(nums1);

    cout << "Test Case 1:" << endl;
    cout << "Number of unique elements: " << uniqueCount1 << endl; // Output: 2
    cout << "Modified array: ";
    for (int i = 0; i < uniqueCount1; i++) {
        cout << nums1[i] << " "; // Output: 1 2
    }
    cout << endl << endl;

    // Test case 2
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int uniqueCount2 = removeDuplicates(nums2);

    cout << "Test Case 2:" << endl;
    cout << "Number of unique elements: " << uniqueCount2 << endl; // Output: 5
    cout << "Modified array: ";
    for (int i = 0; i < uniqueCount2; i++) {
        cout << nums2[i] << " "; // Output: 0 1 2 3 4
    }
    cout << endl << endl;

    // Test case 3 (Empty array)
    vector<int> nums3 = {};
    int uniqueCount3 = removeDuplicates(nums3);

    cout << "Test Case 3:" << endl;
    cout << "Number of unique elements: " << uniqueCount3 << endl; // Output: 0
    cout << "Modified array: ";
    for (int i = 0; i < uniqueCount3; i++) {
        cout << nums3[i] << " "; // Output: (nothing)
    }
    cout << endl;

    return 0;
}