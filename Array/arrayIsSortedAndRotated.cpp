#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
        
    int count = 0;
    int n = nums.size();

    for(int i = 1 ; i < n ; i++) {
        if(nums[i - 1] > nums[i]) {
            count++;
        }
    }
    
    if(nums[n - 1] > nums[0]) {
        count++;
    }

    return count <= 1;

}

int main() {
    // Test cases
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << (check(nums1) ? "True" : "False") << endl; // Output: True

    vector<int> nums2 = {2, 1, 3, 4};
    cout << (check(nums2) ? "True" : "False") << endl; // Output: False

    vector<int> nums3 = {1, 2, 3};
    cout << (check(nums3) ? "True" : "False") << endl; // Output: True

    vector<int> nums4 = {1, 1, 1};
    cout << (check(nums4) ? "True" : "False") << endl; // Output: True

    vector<int> nums5 = {1, 3, 2};
    cout << (check(nums5) ? "True" : "False") << endl; // Output: False

    return 0;
}