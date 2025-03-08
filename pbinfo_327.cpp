//https://www.pbinfo.ro/probleme/327/afisarenumere
#include <iostream>
using namespace std;

int main(){

    int n ,i;
    cin >> n;

    for(i=1; i <=n; i++) // i = 1 si i e mai mic sau egal cu n dai append la unu aka i=i+1 ca sa nu fie zero si sa arate crescator pt ca e la final ++ si se opreste la n pt ca 1 <= n
        cout<<i<<" ";

    return 0;
}