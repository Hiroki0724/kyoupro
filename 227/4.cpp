#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <iomanip>
#include<cmath>
#include<queue>
#include<math.h>
#include<map>

using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
    int N,K;
    cin >> N >> K;
    vector<long long> A(N);
    long long mi=1000000000000000000;
    for(int i=0;i<N;i++){
        cin >> A[i];
        if(mi>A[i]){
            mi=A[i];
        }
    }
    if(N==K){
        cout << mi << endl;
        return 0;
    }
    long long left=0;
    long long right=1000000000000000000/K;
    long long mid=left+(right-left)/2;
    while(right-left>1){
        long long sum=0;
        for(int i=0;i<N;i++){
            sum=sum+min(A[i],mid);
        }
        if(sum>=K*mid){
            left=mid;
            mid=left+(right-left)/2;
        }else{
            right=mid;
            mid=left+(right-left)/2;
        }
    }
    cout << left << endl;


    //cout << fixed << setprecision(10);
    //cout << ans << endl;
}