#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    int primary = 0;
    int secondary = 0;
    
    for (int i = 0; i < n; i++){
        primary += a[i][i];
        secondary += a[i][n-i-1];
    }
    
    int difference;
    
    difference = abs(primary - secondary);
        
    cout << difference;
    
    return 0;
}