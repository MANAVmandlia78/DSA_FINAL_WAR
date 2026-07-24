#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mergearray(int arr1[],int n,int arr2[],int m){

    int arr3[n+m];
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n && j < m){
        if(arr1[i] <= arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }else{
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while(j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged Array: ";

    for(int i = 0; i < n + m; i++)
        cout << arr3[i] << " ";

}

int main(){
    int arr1[] = {1,3,5,7};
    int arr2[] = {2,4,6,8};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    mergearray(arr1,n,arr2,m);
    return 0;
}