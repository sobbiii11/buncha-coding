// https://www.pbinfo.ro/probleme/3178/copii2
#include <iostream>
using namespace std;

int main (){
	int n, F, B, P;
    //F= fata
    //B= baiat
    //P= pagini total
    
    cin >> F >> B >> n;
    P = (3 * F + 2 * B) * n; //3 times fete + 2 times baietii conform cerintei ori n zile pt cerinta
    cout << P << endl;		// comment here bc im cool
    
    return 0;
}