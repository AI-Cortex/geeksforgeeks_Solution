// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// name : Print Square wall
// link : https://www.geeksforgeeks.org/problems/print-square-wall-1605682270/1

void squareWall(int s)
{
    string wall;
    for (int i = 0; i < s; i++)
        wall += "* ";
    for (int i = 0; i < s; i++)
        cout << wall << "\n";
}