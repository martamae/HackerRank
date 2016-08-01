#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        int onTime = 0;
        
        cin >> n >> k;
        
        vector<int> a(n);
        
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        
        for (int i = 0; i < n; i++){
            if (a[i] <= 0) {
                onTime++;
            }
        }
        
        if (onTime < k) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}