#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    double salary,sale;
    cin>>name>>salary>>sale;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<salary+sale*(15.0/100.0)<<endl;


}