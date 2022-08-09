#include <iostream>
using namespace std;

int firstPosition(int arr[], int n, int target)
{
    int s = 0;
    int e = n;
    int result = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            result = mid;
            e = mid - 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return result;
}
int LastPosition(int arr[], int n, int target)
{
    int s = 0;
    int e = n;
    int result = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            result = mid;
            s = mid + 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return result;
}

int main()

{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    cout << firstPosition(arr, n, target) << "," << LastPosition(arr, n, target) << endl;

    return 0;
}
