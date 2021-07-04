#include<iostream>
#include<string>
#include<vector>

using namespace std;
int n;
int a[300];

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    int s,e;
    scanf("%d-%d",&s,&e);
    s= s-s%5;
    if(e%5!=0) e=e+5-(e%5);
    a[12*(s/100)+((s%100)/5)]+=1;
    a[12*(e/100)+((e%100)/5)]-=1;

  }

  int f,sum=0;
  for(int i=0;i<300;i++){
    if(sum==0){
      sum+=a[i];
      if(sum>0) f = i;
    }
    else{
      sum+=a[i];
      if(sum==0)
        printf("%02d%02d-%02d%02d\n",f/12,(f%12)*5,i/12,(i%12)*5);
    }
  }

  return 0;
}

