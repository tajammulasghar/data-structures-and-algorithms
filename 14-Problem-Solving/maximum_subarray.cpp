#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSoFar = arr[0];
    int currentMax = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        currentMax = max(arr[i], currentMax + arr[i]);
        maxSoFar = max(maxSoFar, currentMax);
    }
    cout << maxSoFar << "
";
    cout << "This program finds the largest sum of a contiguous subarray.";
    return 0;
}
