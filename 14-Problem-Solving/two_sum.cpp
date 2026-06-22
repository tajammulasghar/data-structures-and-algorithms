#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    int first = -1;
    int second = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                first = i;
                second = j;
            }
        }
    }
    cout << first << " " << second << "
";
    cout << "This program finds two numbers that add up to the target.";
    return 0;
}
