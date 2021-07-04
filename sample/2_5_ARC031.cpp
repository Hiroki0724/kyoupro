#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

char a[10][10], b[10][10];

void dfs(int h, int w) {
  if(h<0 || h>=10 || w<0 || w>=10 || b[h][w]=='x'){
      return;
    }
  b[h][w]='x';
  dfs(h-1,w);
  dfs(h+1,w);
  dfs(h,w-1);
  dfs(h,w+1);
}

int main() {
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(a[i][j]=='x'){
        for(int k=0;k<10;k++){
            for(int l=0;l<10;l++){
                b[k][l]=a[k][l];
            }
        }
        b[i][j]='o';
        dfs(i,j);
        bool ok=true;
        for(int k=0;k<10;k++){
            for(int l=0;l<10;l++){
                if(b[k][l]=='o'){
                    ok=false;
                }
            }
        }
        if(ok){
          cout<<"YES"<<endl;
          return 0;
        }
      }
    }
  }
  cout<<"NO"<<endl;
  return 0;
}

