// https://www.pbinfo.ro/solutii/user/gruia_cristian/problema/2222/p10_10
#include <iostream>

using namespace std;

int main() {        
    int n, k;
    cin >> n >> k;
    
    cout << 1;
    while(n > 1) {
        for(int i = 0; i < k; i++) {
            cout << 0;
        }
        n /= 10;
    }
    
    return 0;
}
