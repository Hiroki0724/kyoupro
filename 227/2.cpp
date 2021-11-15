#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <iomanip>
#include<cmath>
#include<queue>
#include<map>
#include<math.h>

using namespace std;
typedef long long ll;

#define MOD 1000000007

int main(){
    int N;
    cin >> N;
    vector<int> S(N);
    map<int,int> M;
    for(int i=0;i<N;i++){
      cin >> S[i];
    }
    for(int i=1;i<1000;i++){
      for(int j=1;j<1000;j++){
        M[4*i*j+3*i+3*j]++;
      }
    }
    int count=0;
    for(int i=0;i<N;i++){
      if(M[S[i]]==0){
        count++;
      }
    }
    //cout << fixed << setprecision(10);
    cout << count << endl;
}