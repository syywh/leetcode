class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int xor_answer = (x^y);
        int tool = 1;
        int count = 0;
        for(int i=0; i<32; i++)
        {
            if(!((tool & xor_answer) == 0))
            {
                count++;
                
            }
            tool*=2; //之前写成tool<<1的时候是error..........没有赋值的问题
        }
        return count;
        
    }
};