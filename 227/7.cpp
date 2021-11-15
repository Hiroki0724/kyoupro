#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <iomanip>
#include<cmath>
#include<queue>
#include<math.h>
#include <numeric>
#include<map>

using namespace std;
typedef long long ll;

#define MOD 998244353


int main(){
	long long n,k;
	cin >> n >> k;

	//Step1.1-1000010が素数かどうかの判定
	vector<bool>prime(1000010,true);
	prime[0]=prime[1]=false;
	for(long long p=2;p*p<prime.size();p++){
    if(prime[p]){
		  for(long long i=p+p;i<prime.size();i+=p){
        prime[i]=false;
      }
	  }
  }

	//Step2.1-kの値をセット
	vector<long long>deno(k+1);
	for(long long i=1;i<=k;i++){
    deno[i]=i;
  }
	//Step2.(n-k+1)-nの値をセット
	vector<long long>nume(k);
	long long offset=n-k+1;
	for(long long i=0;i<k;i++){
    nume[i]=offset+i;
  }

	long long ans=1;
	for(long long p=2;p<prime.size();p++){
    if(prime[p]){
		  int power=0;
		  //deno
		  for(long long i=p;i<=k;i+=p){
			  while(deno[i]%p==0){
				  power--;
				  deno[i]/=p;
			  }
		  }
		  //nume
		  for(long long i=((n-k+1)+p-1)/p*p;i<=n;i+=p){
			  while(nume[i-offset]%p==0){
				  power++;
				  nume[i-offset]/=p;
			  }
		  }
		  ans=ans*(power+1)%998244353;
	  }
  }

	//nume
	for(long long i=n-k+1;i<=n;i++){
    //iが素数の時の処理
    if(nume[i-offset]!=1){
      ans=ans*2%998244353;
    }
  }

	cout << ans << endl;
}