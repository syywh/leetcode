class Solution {
public:
    string reverseString(string s) {
    
    
        string s1;
        s1.assign(s.rbegin(), s.rend());

       
        return s1;
        
        
    }
};