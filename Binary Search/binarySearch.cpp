//https://leetcode.com/problems/binary-search/
class Solution {
    private:
        int binarySearch(int start, int end, vector<int>& nums, int target){
            if(start > end) return -1;
            int mid = (start+end)/2;
            if(nums[mid] == target) return mid;
            else if(target < nums[mid]) return binarySearch(start, mid-1, nums, target);
            return binarySearch(mid+1, end, nums, target);
        }
    public:    
        int search(vector<int>& nums, int target) {
            return binarySearch(0, nums.size()-1, nums, target);
        }
};