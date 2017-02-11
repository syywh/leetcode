class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        string sq = "qwertyuiopQWERTYUIOP";//注意大小写都要包含！
        string sa = "asdfghjklASDFGHJKL";
        string sz = "zxcvbnmZXCVBNM";
        
        //c++ set初始化，使用时，需要#include <set>
        set<char> rowq(sq.begin(),sq.end());
        set<char> rowa(sa.begin(),sa.end());
        set<char> rowz(sz.begin(),sz.end());
        
        //vector迭代器
        vector<string>::iterator iter = words.begin();
        for(; iter!=words.end(); iter++){
            int count = 0;
            char a;
            for(int i = 0; i<iter->length(); i++){
                a = (*iter)[i];
                if(rowq.find(a)!=rowq.end()){
                    if(count){
                        if(count != 1){
                            count = 10;
                            break;
                        }
                    }else{
                        count = 1;
                    }
                }else{
                    if(rowa.find(a)!=rowa.end()){
                        if(count){
                            if(count != 2){
                                count = 10;
                                break;
                            }
                        }else{
                            count = 2;
                        }
                    }else{
                        if(count){
                            if(count != 3){
                                count = 10;
                                break;
                            }
                        }else{
                            count = 3;
                        }
                    }
                }
            }
            if(count<4)
                result.push_back(*iter);
            
        }
        return result;
        
    }
};