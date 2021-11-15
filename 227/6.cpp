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
long long inf=1001001001001001001;

int main(){
    int H,W,K;
	cin >> H >> W >> K;
	vector<vector<long long>> A(H,vector<long long>(W));
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cin >> A[i][j];
		}
	}
	long long ans=inf;
	//A[0][0],A[0][1],..,A[H-1][W-1]のそれぞれをXを置いたとき、DPを用いてX以上の整数が書かれたマスをk個通った時のX以上の整数の和の最小値を各マスについて管理する。
	//dp[足した数][行の位置][列の位置]=(最小値)
	for(auto y:A){
		for(auto x:y){
			vector<vector<vector<long long>>> dp(K+1,vector<vector<long long>>(H,vector<long long>(W,inf)));
			if(x<=A[0][0]){
				dp[1][0][0]=A[0][0];
			}else{
				dp[0][0][0]=0;
			}
			for(int i=0;i<=K;i++){
				for(int j=0;j<H;j++){
					for(int k=0;k<W;k++){
						if(j!=H-1){
							if(i!=K && A[j+1][k]>=x){
								dp[i+1][j+1][k]=min(dp[i+1][j+1][k],dp[i][j][k]+A[j+1][k]);
							}
							if(A[j+1][k]<=x){
								dp[i][j+1][k]=min(dp[i][j+1][k],dp[i][j][k]);
							}
						}
						if(k!=W-1){
							if(i!=K && A[j][k+1]>=x){
								dp[i+1][j][k+1]=min(dp[i+1][j][k+1],dp[i][j][k]+A[j][k+1]);
							}
							if(A[j][k+1]<=x){
								dp[i][j][k+1]=min(dp[i][j][k+1],dp[i][j][k]);
							}
						}
					}
				}
			}
			ans=min(ans,dp[K][H-1][W-1]);
		}
	}

    //cout << fixed << setprecision(10);
    cout << ans << endl;
}