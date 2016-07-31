#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float positive=0, negative=0, zeros=0, total=0;
    float pos, neg, zero;
    
    cin >> n;
    
    vector<int> arr(n);
    
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        
        if (arr[arr_i] > 0){
            positive++;
        }
        else if (arr[arr_i] < 0) {
            negative++;
        }
        else {
            zeros++;
        }
        
        total++;
    }
    
    pos = positive / total;
    neg = negative / total;
    zero = zeros / total;
    
    cout << pos << "\n" << neg << "\n" << zero << "\n";
    
    return 0;
}