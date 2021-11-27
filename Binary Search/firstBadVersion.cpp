//https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long lo = 1, hi = n;
        int badIdx = -1;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(isBadVersion(mid)){
                badIdx = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }
        return badIdx;
    }
};