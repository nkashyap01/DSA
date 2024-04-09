// 189. Rotate Array
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 
// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation: 
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]

#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    void rotate(vector<int>&nums, int k){
        int n=nums.size();
        vector<int>ans(n);
        for(int index=0;index<n;index++){
            ans[(index+k)%n]=nums[index];
        }
        nums=ans;

    }
};

int main(){
    Solution Solution;
    vector<int> nums= {1,2,3,4,5,6,7};
    int k=3;
    Solution.rotate(nums,k);
    for (int num : nums) {
        cout << num << " ";
    }

}