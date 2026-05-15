#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nY=n/365;
    n%=365;
    int nM=n/30;
    n%=30;
    cout<<nY<<" ano(s)"<<endl;
    cout<<nM<<" mes(es)"<<endl;
    cout<<n<<" dia(s)"<<endl;
}