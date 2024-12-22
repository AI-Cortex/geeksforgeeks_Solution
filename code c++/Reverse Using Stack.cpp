// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Reverse Using Stack
// Link: https://www.geeksforgeeks.org/problems/reverse-a-string-using-stack/1

char* reverse(char *S, int len)
{
    stack <char> stk;
    for(int i=0; i<strlen(S); i++)
        stk.push(S[i]);
    int i=0;
    while(!stk.empty()){
        S[i++] = stk.top();
        stk.pop();
    }
    return S;
}