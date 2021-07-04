#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int N;

int main() {
  //cin >> N ;
  N=5;
  vector<int> A(N);
  for(int i=0;i<N;i++){
      cin >> A[i];
  }
  int score=0;
  for(int i=0;i<N-1;i++){
      if(A[i]==A[i+1]){
          score++;
      }
  }
  if(score>0){
      cout << "YES" << endl;
  }else{
      cout << "NO" << endl;
  }
  
}

