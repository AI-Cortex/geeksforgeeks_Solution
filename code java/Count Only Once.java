// my profile : https://Geeksforgeeks.com/profile/AI-Cortex
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Count Only Once
// link : https://www.geeksforgeeks.org/problems/count-only-once/1

public static int countOnce(int arr[]) {
    HashSet<Integer> st = new HashSet<>();  
        for (int i = 0; i < arr.length; i++)
        st.add(arr[i]);
        
    return st.size();
}
