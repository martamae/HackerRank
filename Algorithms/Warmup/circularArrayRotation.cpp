#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n, k, q;
    int * arr;
    
    cin >> n
        >> k
        >> q;
    
    arr = new int[n];
        
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    
    for (int i = 0; i < q; i++) {
        int m, shiftIndex;
        
        cin >> m;
        
        shiftIndex = (m - k + 1000*n) % n;
        
        cout << arr[shiftIndex] << "\n";
    }
    
    delete [] arr;
    
    return 0;
}