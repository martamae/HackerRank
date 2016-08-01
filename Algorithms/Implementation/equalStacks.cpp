#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n1;
    int n2;
    int n3;
    long int total1 = 0, total2 = 0, total3 = 0;
    
    cin >> n1 >> n2 >> n3;
    
    vector<int> h1(n1);
    
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
        
        total1 += h1[h1_i];
    }
    
    vector<int> h2(n2);
    
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
        
       total2 += h2[h2_i]; 
    }
    
    vector<int> h3(n3);
    
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
        
        total3 += h3[h3_i];
    }
    
    if (total1 == total2 && total2 == total3){
        cout << total1;
        return 0;
    }  
    
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
   
    while (total1 > 0 && total2 > 0 && total3 > 0) {
        if (total1 > total2 && total1 > total3) {
            total1 -= h1[i1];

            i1++;
        }
        else if (total2 > total1 && total2 > total3) {    
            total2 -= h2[i2];
                
            i2++;
       }
       else if (total3 > total2 && total3 > total1) {
            total3 -= h3[i3];
                
            i3++;
       }
        
        if (total1 == total2 && total2 == total3){
            cout << total1;
            return 0;
        }          
    }
    
    cout << "0";
        
    return 0;
}  