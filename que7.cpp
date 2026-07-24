#include <iostream>
#include <set>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    // Step 1: Store unique elements in set
    set<int> st;

    for(int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    // Step 2: Copy set elements back to array
    int index = 0;

    for(auto it : st)
    {
        arr[index] = it;
        index++;
    }

    return index; // New size of array
}

int main()
{
    int arr[] = {1,1,2,2,3,4,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}