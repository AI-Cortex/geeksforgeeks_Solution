// my profile : 
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
// name : Parenthesis Checker
// link : https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1

class Solution {
  public:
    bool isParenthesisBalanced(string& s) {
        stack<char> st;
        st.push('0');
        char c;
        for(int i=0; i<s.length(); i++){
            c=s[i];
            if(c == '(' || c =='[' || c=='{')
                st.push(c);
            else{
                
                if(
                    (c == ')' && st.top() == '(') || 
                    (c == ']' && st.top() == '[') || 
                    (c == '}' && st.top() == '{')
                ){
                    st.pop();
                }
                else
                    return 0;
     
            }
        }
        if(st.top()=='0')
            return 1;
        return 0;
    }
};