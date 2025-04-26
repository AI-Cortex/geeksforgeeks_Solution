// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Vector Shrink To Fit
// link : https://www.geeksforgeeks.org/problems/vector-shrink-to-fit/1

void ShrinkMe(vector<int> myvector, int newsize)
{

    // Your code here
    myvector.resize(newsize);
    // Use shrink_to_fit function
    // Write here
    cout << myvector.capacity();

    cout << endl;

    myvector.shrink_to_fit();
    // Write here
    cout << myvector.capacity();
}
