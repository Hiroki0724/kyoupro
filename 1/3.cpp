#include<iostream>
#include<string>
using namespace std;

int main(){;
    double Deg,Dis;
    string Dir;
    int W;
    cin >> Deg >> Dis;
    if(Deg>=112.5 && Deg<337.5){
        Dir="NNE";
    }else if(Deg>=337.5 && Deg<=562.5){
        Dir="NE";
    }else if(Deg>=562.5 && Deg<=787.5){
        Dir="ENE";
    }else if(Deg>=787.5 && Deg<=1012.5){
        Dir="E";
    }else if(Deg>=1012.5 && Deg<=1237.5){
        Dir="ESE";
    }else if(Deg>=1237.5 && Deg<=1462.5){
        Dir="SE";
    }else if(Deg>=1462.5 && Deg<=1687.5){
        Dir="SSE";
    }else if(Deg>=1687.5 && Deg<=1912.5){
        Dir="S";
    }else if(Deg>=1912.5 && Deg<=2137.5){
        Dir="SSW";
    }else if(Deg>=2137.5 && Deg<=2362.5){
        Dir="SW";
    }else if(Deg>=2362.5 && Deg<=2587.5){
        Dir="WSW";
    }else if(Deg>=2587.5 && Deg<=2812.5){
        Dir="W";
    }else if(Deg>=2812.5 && Deg<=3037.5){
        Dir="WNW";
    }else if(Deg>=3037.5 && Deg<=3262.5){
        Dir="NW";
    }else if(Deg>=3037.5 && Deg<=3487.5){
        Dir="NNW";
    }else{
        Dir="N";
    }

    if(Dis>=0 && Dis<15){
        W=0;
        Dir="C";
    }else if(Dis>=15 && Dis<93){
        W=1;
    }else if(Dis>=93 && Dis<201){
        W=2;
    }else if(Dis>=201 && Dis<327){
        W=3;
    }else if(Dis>=327 && Dis<477){
        W=4;
    }else if(Dis>=477 && Dis<645){
        W=5;
    }else if(Dis>=645 && Dis<831){
        W=6;
    }else if(Dis>=831 && Dis<1029){
        W=7;
    }else if(Dis>=1029 && Dis<1245){
        W=8;
    }else if(Dis>=1245 && Dis<1467){
        W=9;
    }else if(Dis>=1467 && Dis<1707){
        W=10;
    }else if(Dis>=1707 && Dis<1959){
        W=11;
    }else{
        W=12;
    }

    cout << Dir << " " << W << endl;
}