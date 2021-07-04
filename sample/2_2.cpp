#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int N,S;

int main() {
  cin >> N >> S;
  vector<int> A(N);
  vector<int> P(N);
  for(int i=0;i<N;i++){
      cin >> A[i];
  }
  for(int i=0;i<N;i++){
      cin >> P[i];
  }
  int ans=0;
  for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
          if(A[i]+P[j]==S){
              ans++;
          }
      }
  }
  cout << ans << endl;
}

