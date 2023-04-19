#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<bool> kidsWithCandies(vector<int> candies, int extraCandies)
{
    int max_candies = *max_element(candies.begin(), candies.end());

    vector<bool> result(candies.size());

    for (int i = 0; i < candies.size(); i++)
    {
        if (candies[i] + extraCandies >= max_candies)
        {
            result[i] = true;
        }
        else
        {
            result[i] = false;
        }
    }

    for (int j = 0; j < result.size(); j++)
    {
        cout << result[j] << " ";
    }
    cout << endl;
}

vector<bool> kidsWithCandies2(vector<int> candies, int extraCandies)
{
    vector<bool> result = {};
    for (int i = 0; i < candies.size(); i++)
    {
        double max = *max_element(candies.begin(), candies.end());
        if (candies[i] + extraCandies >= max)
        {
            result.push_back(true);
        }
        else
        {
            result.push_back(false);
        }
    }

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
    kidsWithCandies2(candies, extraCandies);

    return 0;
}