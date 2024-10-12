#include <iostream>
#include <vector>
using namespace std;

// Define your solution class here
class Solution {
public:
    // Example function for a LeetCode problem
    int singleNumber(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            count ^= nums[i]; // XOR to find the single number
        }
        return count;
    }
};

int main() {
    // Input handling
    int n; // Number of elements in the input array
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n); // Vector to store the input array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Create a Solution object
    Solution solution;

    // Call the solution function and output the result
    int result = solution.singleNumber(nums);
    cout << "The single number is: " << result << endl;

    return 0;
}
