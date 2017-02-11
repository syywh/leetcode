class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i = 1; i<=n; i++){
            string temp;
            if(((i%3)!=0) && ((i%5)!=0)){
                temp = to_string(i);
                
            }else{
                if((i%3)==0){
                    if((i%5)==0){
                        temp = "FizzBuzz";
                    }else{
                        temp = "Fizz";
                    }
                }else{
                    temp = "Buzz";
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};