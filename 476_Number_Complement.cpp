class Solution {
public:
    int findComplement(int num) {
        
        uint32_t tool = 1;
        tool = tool<<31;
        int complement = 0;
        bool flag = false;

        for(int i = 0; i<32; i++){
            if(!flag){
                if((num&tool)!=0){
                    flag = true;
                }
            }else{
                if((num&tool)==0){
                    complement |= tool;
                }
            }
            tool = tool>>1;

        }
        return complement;
    }
};