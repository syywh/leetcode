class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        
        vector<int> result;
        for(int i=0; i<findNums.size(); i++){
            bool findit = false;
            int j = 0;
            for(; j<nums.size(); j++)
            {
                if(nums[j]==findNums[i])
                    break;
            }
            for(; j<nums.size(); j++){
                if(nums[j]>findNums[i]){
                    result.push_back(nums[j]);
                    findit=true;
                    break;
                }

            }
            if(!findit){
                result.push_back(-1);
            }
        }
        return result;
    }
};