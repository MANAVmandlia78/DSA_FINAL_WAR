#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> arr)
{
    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    vector<int> arr = {4, 7, 1, 9, 3};
    cout << largestElement(arr);
}