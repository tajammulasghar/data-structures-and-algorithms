#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}};
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    for (int i = 0; i < intervals.size(); i++)
    {
        if (merged.empty() || merged.back()[1] < intervals[i][0])
        {
            merged.push_back(intervals[i]);
        }
        else
        {
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        }
    }
    for (auto &interval : merged)
    {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << "This program merges overlapping intervals.";
    return 0;
}
