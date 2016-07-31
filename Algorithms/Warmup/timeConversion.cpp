#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    char time[11];
    cin >> time;
    
    if (time[8] == 'P') {
        if (time[0] == '1'){
            if (time[1] == '1'){
                time[0] = '2';
                time[1] = '3';
            }
        }
        else if (time[0] == '0'){
            int t = time[1];
            
            time[0] = '1';
            
            t += 2;
            time[1] = t;
        }
    }
    else if (time[8] == 'A') {
        if (time[0] == '1') {
            if (time[1] == '2') {
                time[0] = '0';
                time[1] = '0';
            }
        }
    }  
        
    time[8] = '\0';
    
    printf("%s", time);
        
    return 0;
}
