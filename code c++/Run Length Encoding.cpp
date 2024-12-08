// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Run Length Encoding
// link : https://www.geeksforgeeks.org/problems/run-length-encoding/1


class Solution {
public:
    
    std::string encode(string s) {
        std::string out = "";
        int t=0;
        char last_char = '\0';
        for(int i=0; i<s.length(); i++){
            if(last_char == s[i])
                t ++;
            else{
                if(t>0){
                    out += last_char + std::to_string(t);
                    t=1;
                    last_char=s[i];
                }
                else{
                    t=1;
                    last_char=s[i];
                }
            }
            
        }
        out+=last_char + to_string(t);
        return out;
    }
};
