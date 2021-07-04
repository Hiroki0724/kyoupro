#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

char c[10001][10001];
int f[10001][10001];
int n,m,l;

void dp(int row,int col){
    int i,j;
    //cout << row << col << endl;
    if(row>0 && row<=n && col>0 && col<=m){
        if(c[row][col]!='#' && f[row][col]==0){
            f[row][col]=1;
            if(c[row][col]=='g')l=1;
            dp(row-1,col);
            dp(row+1,col);
            dp(row,col-1);
            dp(row,col+1);
        }
    }
    //return f[row][col];
}
int main(){
    int i,j,k;
    int row,col;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++){
        cin>>c[i][j];
        if(c[i][j]=='s'){
            row=i;
            col=j;
        }
    }
    dp(row,col);
    if(l==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}