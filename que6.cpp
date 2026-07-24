#include<iostream>
using namespace std;

void movezeros(int arr[],int n){
    int j = 0;

    for(int i = 0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
}

int main(){
    int arr[] = {1,0,2,0,3,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    movezeros(arr,n);

    for(int i = 0;i<n;i++){
        cout<< arr[i] << " ";
    }
}