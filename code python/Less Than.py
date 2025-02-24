## my profile : https://www.geeksforgeeks.org/user/aicortex/
## Geeksforgeeks solution github repository : https://github.com/AI-Cortex/geeksforgeeks_Solution
######################################################################
# name : Less Than
# link : https://www.geeksforgeeks.org/problems/less-than/1


def lessThan(arr, k):
    ans = []

    for n in arr:
        if n < k:
            ans.append(n)

    return ans
