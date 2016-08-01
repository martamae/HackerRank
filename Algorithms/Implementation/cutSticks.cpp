#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findMin(vector<int> arr, int n);

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    int numSticks = n;
    
    while (numSticks > 0) {
        cout << numSticks << "\n";
        
        int min = findMin (arr, n);
        
        int sticks = 0;
        
        for (int i = 0; i < n; i++) {
            arr[i] -= min;
            
            if (arr[i] > 0) {
                sticks++;
            }
        }
        
        numSticks = sticks;        
    }
    
    return 0;
}

int findMin(vector<int> arr, int n) {
    int min = arr[0];
    
    int j = 0;   
    while (min <= 0) {
        j++;
        
        min = arr[j];
    }
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min && arr[i] > 0) {
            min = arr[i];
        }
    }
    
    return min;
}