#include<iostream>
using namespace std;

int squareroot(int n){
    int low = 1;
    int high = n;
    int ans = 0;

    while(low <= high){
        int mid = (low+high)/2;
        int square = mid * mid;

        if(square == n){
            return mid;
        }

        else if (square < n){
            ans = mid;
            low = mid + 1;
        }

        else{
            high = mid -1;
        }
    }

    return ans;
}

int main(){
    int n = 28;
    cout << squareroot(n);
}