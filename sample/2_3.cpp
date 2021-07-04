#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int N,M;

int main() {
  cin >> N >> M;
  vector<int> A(M);
  vector<int> B(M);
  vector<vector<int> > R(N,vector<int>(N));

  for(int i=0;i<M;i++){
      cin >> A[i] >> B[i];
  }
  for(int i=0;i<M;i++){
    R.at(A[i]-1).at(B[i]-1)=1;
    R.at(B[i]-1).at(A[i]-1)=-1;
  }
  for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
          if(R.at(i).at(j)==1){
              cout << "o";
          }else if(R.at(i).at(j)==-1){
              cout << "x";
          }else{
              cout << "-";
          }
          if(j!=N-1){
              cout << " ";
          }
      }
      cout << endl;
  }
  //cout << score << endl;
}


