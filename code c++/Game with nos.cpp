// my profile : https://www.geeksforgeeks.org/user/aicortex/
// Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
//////////////////////////////////////////////////////////////////////
// Name: Game with nos
// Link: https://www.geeksforgeeks.org/problems/game-with-nos3123/1

int *game_with_number(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i] ^ arr[i + 1];
    }

    return arr;
}
