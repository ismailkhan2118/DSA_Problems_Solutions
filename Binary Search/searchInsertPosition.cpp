// https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid = 0, lo = 0, hi = nums.size()-1;
        while(lo <= hi){
            mid = (lo+hi)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target) lo = mid+1;
            else hi = mid-1;
        }
        return nums[mid] > target ? mid:mid+1; 
    }
};