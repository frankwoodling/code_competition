#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        bool fin = false;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); i++) {
                if(nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    fin = true;
                    break;
                }
            }
            if(fin) {
                break;
            }
        }
        return ans;
    }
};
