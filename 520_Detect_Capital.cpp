class Solution {
public:
    bool detectCapitalUse(string word) {
        
       
        if(word.length()>1){
            char a = word[0];char b = word[1];
            int thcase ;
            if( (a<91)){
                if( (b<91)){
                    thcase = 0;//all capital
                }else{
                    thcase = 1;//first capital
                }
            }else{
                if(b > 90)
                    thcase = 1;
                else  return false;
            }
            
            for(int i = 2; i<word.length(); i++){
                if(thcase && word[i]>90) continue;
                if((thcase==0) && word[i]<91) continue;
                return false;
            }
            return true;
        }else{
            return true;
        }
        
        

        
    }
};