class Solution {
public:
    int getPivot(vector<int>&nums){
        int s=0,e=nums.size()-1;
        int mid = s+(e-s)/2;
        while(s<e){
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid = s+(e-s)/2;
        }
        return s;
    }
    int binarySearch(int s,int e, vector<int>&nums, int target){
        int mid = s+(e-s)/2;
        while(s<=e){
            mid = s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s= mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums);
        if(nums[pivot]<=target && nums[n-1]>=target){
            return binarySearch(pivot,n-1,nums,target);
        }
        return binarySearch(0,pivot-1,nums,target);
    }
};