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
  string S;
  cin >> S;
  int K;
  cin >> K;
  int N = S.size();
  vector<vector<int>> sum(N + 1, vector<int>(3, 0));
  vector<vector<int>> pos(3);
  for (int i = 0; i < N; i++){
    sum[i + 1] = sum[i];
    if (S[i] == 'K'){
      sum[i + 1][0]++;
      pos[0].push_back(i);
    }
    if (S[i] == 'E'){
      sum[i + 1][1]++;
      pos[1].push_back(i);
    }
    if (S[i] == 'Y'){
      sum[i + 1][2]++;
      pos[2].push_back(i);
    }
  }
  int C1 = sum[N][0];
  int C2 = sum[N][1];
  int C3 = sum[N][2];
  int mx = N * (N - 1) / 2;
  //dp[]
  vector<vector<vector<vector<long long>>>> dp(C1 + 1, vector<vector<vector<long long>>>(C2 + 1, vector<vector<long long>>(C3 + 1, vector<long long>(mx + 1, 0))));
  dp[0][0][0][0] = 1;
  vector<int> cnt(3);
  for (cnt[0] = 0; cnt[0] <= C1; cnt[0]++){
    for (cnt[1] = 0; cnt[1] <= C2; cnt[1]++){
      for (cnt[2] = 0; cnt[2] <= C3 ; cnt[2]++){
        for (int i = 0; i <= mx; i++){
          if (dp[cnt[0]][cnt[1]][cnt[2]][i] != 0){
            for (int j = 0; j < 3; j++){
              vector<int> cnt2 = cnt;
              cnt2[j]++;
              if (cnt2[0] <= C1 && cnt2[1] <= C2 && cnt2[2] <= C3){
                int p = pos[j][cnt[j]];
                int add = 0;
                for (int k = 0; k < 3; k++){
                  add += max(sum[p][k] - cnt[k], 0);
                }
                dp[cnt2[0]][cnt2[1]][cnt2[2]][i + add] += dp[cnt[0]][cnt[1]][cnt[2]][i];
              }
            }
          }
        }
      }
    }
  }
  long long ans = 0;
  for (int i = 0; i <= min(mx, K); i++){
    ans += dp[C1][C2][C3][i];
  }
  cout << ans << endl;
}