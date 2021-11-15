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
    long long N;
    cin >> N;
    long long ans=0;
    for(long long i=1;i*i*i<=N;i++){
      for(long long j=i;i*j*j<=N;j++){
        long long k=N/(i*j);
        ans=ans+k-j+1;
      }
    }
    //cout << fixed << setprecision(10);
    cout << ans << endl;
}