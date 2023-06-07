#include <bits/stdc++.h>
using namespace std;

int findSecondSmallest(vector<int> arr)
{
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        if (arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int findSecondLargest(vector<int> arr)
{
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

vector<int> findSecondSmallestLargest(vector<int> arr)
{
    vector<int> ans;
    int n = arr.size();
    int ans1 = findSecondSmallest(arr), ans2 = findSecondLargest(arr);
    ans.push_back(ans1);
    ans.push_back(ans2);

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 7, 8, 2};
    vector<int> ans = findSecondSmallestLargest(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}