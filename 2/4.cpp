#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <iomanip>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> X(M);
    vector<int> Y(M);
    if(M==0){
        cout << 1 << endl;
        return 0;
    }
    //vector<vector<int> > G(N+1);
    for(int i=0;i<M;i++){
        cin >> X[i] >> Y[i];
    }
    int max=1;
    for(int i=0;i<(1 << (N+1));i++){
        int as=0;
        for(int j=0;j<=N;j++){
            if((i & (1 << j))!=0){
                if(j==0){
                    break;
                }else{
                    as++;
                }
            }
        }
        if(as<2){
            continue;
        }
        int count=0;
        for(int j=0;j<M;j++){
            if(((i & (1 << X[j]))!=0) && ((i & (1 << Y[j]))!=0) ){
                count++;
            }
        }
        if(count==as*(as-1)/2){
            if(max<as){
                max=as;
                //cout << i << endl;
            }
        }
    }
    cout << max << endl;
}