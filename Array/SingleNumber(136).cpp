#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            count ^= nums[i]; 
        }
        return count;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single number: " << solution.singleNumber(nums) << endl;
    return 0;
}
