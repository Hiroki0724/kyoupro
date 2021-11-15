#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <iomanip>
#include<cmath>
#include<queue>
#include<math.h>

using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
    int N,K,A;
    cin >> N >> K >> A;
    int ans=(A+K-1)%N;
    if(ans==0){
        ans=N;
    }
    cout << ans << endl;
    //cout << round(N) << endl;
    //cout << fixed << setprecision(10);
    //cout << ans << endl;
}