#include<bits/stdc++.h>
using namespace std;
int main(){
    double A,B,C;
    double pi=3.14159;
    cin>>A>>B>>C;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<(0.5*A*C)<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<(C*C*pi)<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<.5*(A+B)*C<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<(B*B)<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<(A*B)<<endl;
}