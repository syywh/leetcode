class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int max_consecutive = 0;
        bool inConsecutive = false;
        int consecutive_length = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                consecutive_length++;
                if(!inConsecutive){
                    inConsecutive = true;
                }
            }else{
                    if(inConsecutive){
                        if(consecutive_length>max_consecutive){
                            max_consecutive = consecutive_length;
                        }
                        inConsecutive = false;
                       consecutive_length = 0;
                    }
                     
                }

        }
        if(nums.back()==1){
           if(consecutive_length>max_consecutive)  max_consecutive = consecutive_length;
        }
        return max_consecutive;
    }
};