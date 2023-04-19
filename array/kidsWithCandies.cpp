#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<bool> kidsWithCandies(vector<int> candies, int extraCandies)
{
    vector<bool> result = {};
    for (int i = 0; i < candies.size(); i++)
    {
        double max = *max_element(candies.begin(), candies.end());
        cout << max << endl;
        if (candies[i] + extraCandies >= max)
        {
            result.push_back(true);
        }
        else
        {
            result.push_back(false);
            candies[0] = candies[i];
        }
    }

    for (int j = 0; j < result.size(); j++)
    {
        cout << result[j] << " ";
    }
}

int main()
{

    kidsWithCandies({2, 3, 5, 1, 3}, 3);

    return 0;
}