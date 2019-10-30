#include <iostream>
using namespace std;

typedef unsigned __int128 uint128 ;
typedef unsigned __int64 uint64 ;


uint64 Mnr          = 15564440312192434175;//-1/M mod R
uint64 REV_2        =  7782220156096217089;
uint64 M            = 15564440312192434177;
uint128   t64       = 1;
int main(){
    uint64 T=REV_2;
    uint64 m=M;
    cout<<m<<endl;
    uint128 U = ((uint128)Mnr * (uint128)T )& 0xffffffffffffffff;
    uint128 ss=U;
    while(ss){
        int t=ss-(ss/10)*10;
        cout<<t;
        ss=ss/10;
    }
    //cout <<a<<endl;
    U = (uint128)U*(uint128)m;
    ss=U;
    cout<<endl;
    while(ss){
        int t=ss-(ss/10)*10;
        cout<<t;
        ss=ss/10;
    }
    //T+Um>R^2
    uint128 r;
    if(U!=0 && U>=(~T+1)){//~按位取反
        U -= (~T+1);
        r = (U)>>64;
        r += t64;
    }else
        r = (U + T)>>64;
    if(r>=m)
        r = r-m;
    cout<<endl;
    ss=r;
    while(ss){
        int t=ss-(ss/10)*10;
        cout<<t;
        ss=ss/10;
    }
    /*uint64 test = (T%m);
    test = ((uint128)(T%m)*(uint128)REV_R) %m;
    if((uint64)r!=test)
        printf("MontRduct Error1\n");*/
    //printf(r);
    //cout<<r;

}
