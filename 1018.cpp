#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int original = N;

    int n100 = N / 100;
    N %= 100;

    int n50 = N / 50;
    N %= 50;

    int n20 = N / 20;
    N %= 20;

    int n10 = N / 10;
    N %= 10;

    int n5 = N / 5;
    N %= 5;

    int n2 = N / 2;
    N %= 2;

    int n1 = N;

    cout << original << endl;
    cout << n100 << " nota(s) de R$ 100,00" << endl;
    cout << n50 << " nota(s) de R$ 50,00" << endl;
    cout << n20 << " nota(s) de R$ 20,00" << endl;
    cout << n10 << " nota(s) de R$ 10,00" << endl;
    cout << n5 << " nota(s) de R$ 5,00" << endl;
    cout << n2 << " nota(s) de R$ 2,00" << endl;
    cout << n1 << " nota(s) de R$ 1,00" << endl;

    
}