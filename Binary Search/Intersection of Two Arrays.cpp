class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i;
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(i=0;i<=nums1.size()-1;i++){
            if(i==0||(nums1[i]!=nums1[i-1])){
                // we are searching only for each unique elements
                // search for this element in nums2 array
                if(isElePresent(nums1[i],nums2))
                    ans.push_back(nums1[i]);
            }
        }
        return ans;
    }
    bool isElePresent(int ele, vector<int> nums){
        int low=0,high=nums.size()-1,mid;
        // using binary search to find whether element is present in array or not
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==ele)
                return true;
            else if(nums[mid]>ele)
                high=mid-1;
            else low=mid+1;         // NOTE : when finding first/last occurence of element using binary search, we insted use sometimes low=mid or high=mid
        }
        return false;
    }
};
