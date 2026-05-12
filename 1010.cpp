#include<bits/stdc++.h>
using namespace std;
int main(){
    int cp1,np1,cp2,np2;
    double pp1,vp2;
    cin>>cp1>>np1>>pp1>>cp2>>np2>>vp2;
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<np1*pp1+np2*vp2<<endl;
    return 0;
}