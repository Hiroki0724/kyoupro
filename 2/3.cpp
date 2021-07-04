#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double xa,ya,xb,yb,xc,yc,a,b,c,d;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    a=xb-xa;
    b=yb-ya;
    c=xc-xa;
    d=yc-ya;
    double ans=abs(a*d-b*c);
    ans=ans/2.0;
    cout << fixed << setprecision(9) << ans << endl;
}