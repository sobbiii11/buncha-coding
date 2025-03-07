// https://www.pbinfo.ro/solutii/user/gruia_cristian/problema/331/afisarenumereimpare
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = n * 2 - 1; i >= 1; i -= 2) {
        cout << i << ' ';
    }
    
    return 0;
}
