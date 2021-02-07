/**
26 remove duplicates from array
**/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int index = 0;
        int len = nums.size();
        for(int i=1; i<len; i++){
            if(nums[index]!=nums[i])
                nums[++index] = nums[i];
        }
        return index + 1;
    }
};
