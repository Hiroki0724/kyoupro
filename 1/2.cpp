#include<iostream>

using namespace std;

int main(){
    int m;
    cin >> m;
    if(m<100){
        cout << "00" <<endl;
    }else if(m<=5000){
        m=m/100;
        if(m<10){
            cout << 0 << m << endl;
        }else{
            cout << m << endl;
        }
    }else if(m<=30000){
        m=m/1000+50;
        cout << m << endl;
    }else if(m<=70000){
        m=(m/1000-30)/5+80;
        cout << m << endl;
    }else{
        cout << 89 << endl;
    }
    //cout << h1-h2 << endl;
}