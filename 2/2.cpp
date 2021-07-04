#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <iomanip>

using namespace std;

int main(){
    string S,T;
    cin >> S;
    for(int i=0;i<S.size();i++){
        if(S[i]=='a' || S[i]=='i' || S[i]=='u' || S[i]=='e' || S[i]=='o'){
            continue;
        }else{
            T=T+S[i];
        }
    }
    cout << T << endl;
}