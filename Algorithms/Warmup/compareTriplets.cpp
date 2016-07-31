int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    
    int Bob = 0;
    int Alice = 0;
    
    if (a0 > b0) {
        Alice++;
    }
    else if (b0 > a0){
        Bob++;
    } 
    
    if (a1 > b1) {
        Alice++;
    }
    else if (b1 > a1){
        Bob++;
    }
    
    if (a2 > b2) {
        Alice++;
    }
    else if (b2 > a2){
        Bob++;
    }
    
    cout << Alice << " " << Bob;
    
    return 0;
}