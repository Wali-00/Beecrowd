#include<bits/stdc++.h>
using namespace std;

int main() {

    double N;
    cin >> N;

    // Round the amount to the nearest cent to avoid floating-point precision issues
    int money = round(N * 100);

    int n100 = money / 10000;
    money %= 10000;

    int n50 = money / 5000;
    money %= 5000;

    int n20 = money / 2000;
    money %= 2000;

    int n10 = money / 1000;
    money %= 1000;

    int n5 = money / 500;
    money %= 500;

    int n2 = money / 200;
    money %= 200;

    int n1 = money / 100;
    money %= 100;

    int n50cent = money / 50;
    money %= 50;

    int n25cent = money / 25;
    money %= 25;

    int n10cent = money / 10;
    money %= 10;

    int n5cent = money / 5;
    money %= 5;

    int n1cent = money;

    cout << "NOTAS:" << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << n1 << " moeda(s) de R$ 1.00" << endl;
    cout << n50cent << " moeda(s) de R$ 0.50" << endl;
    cout << n25cent << " moeda(s) de R$ 0.25" << endl;
    cout << n10cent << " moeda(s) de R$ 0.10" << endl;
    cout << n5cent << " moeda(s) de R$ 0.05" << endl;
    cout << n1cent << " moeda(s) de R$ 0.01" << endl;
}