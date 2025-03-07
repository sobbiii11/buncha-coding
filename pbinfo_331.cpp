// https://www.pbinfo.ro/solutii/user/gruia_cristian/problema/331/afisarenumereimpare
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n) {
        cout << n * 2 - 1 << " ";
        n--;
    }
    
    return 0;
}
