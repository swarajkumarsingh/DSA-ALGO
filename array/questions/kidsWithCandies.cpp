#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*

Leetcode Question - Kids With the Greatest Number of Candies

There are n kids with candies.You are given an integer array candies,
where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies,
denoting the number of extra candies that you have. Return a boolean array result of length n,
where result[i] is true if, after giving the ith kid all the extraCandies,
they will have the greatest number of candies among all the kids, or false otherwise.

! If candy of a boy + extra candies is >= greater or equal to the existing candies array, add true in the array

Note that multiple kids can have the greatest number of candies.

Example 1:
    Input: candies = [2,3,5,1,3], extraCandies = 3
    Output: [true,true,true,false,true]

Example 2:
    Input: candies = [4,2,1,1,2], extraCandies = 1
    Output: [true,false,false,false,false]

Example 3:
    Input: candies = [12,1,12], extraCandies = 10
    Output: [true,false,true]
*/

vector<bool> kidsWithCandies(vector<int> candies, int extraCandies)
{
    vector<bool> result = {};

    // Find max element in candies array
    double max = *max_element(candies.begin(), candies.end());

    for (int i = 0; i < candies.size(); i++)
    {
        // If candy + extra candies >= max (greater and equal to max element in candies array) add true
        if (candies[i] + extraCandies >= max)
        {
            result.push_back(true);
        }

        else
        {
            result.push_back(false);
        }
    }

    // Display
    for (int j = 0; j < result.size(); j++)
    {
        cout << result[j] << " ";
    }
}

int main()
{
    vector<int> candies = {12, 1, 12};
    int extraCandies = 10;

    kidsWithCandies(candies, extraCandies);
    return 0;
}