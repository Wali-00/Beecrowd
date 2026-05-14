#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int nH= N/3600;
    N%=3600;
    int nM= N/60;
    N%=60;
    int nS=N;
    
    cout<<nH<<":"<<nM<<":"<<nS<<endl;
}