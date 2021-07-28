#include <iostream>
using namespace std;

int get_gcd(int u, int v){
    int t;
    while(u>0){
        if(u<v){
            t=u; u=v; v=t; 
        }
        u = u-v;
    }
    return v;
}

int main(){
    int u,v;

    u=280;
    v=30;
    cout << "get_gcd result: "  << get_gcd(u,v);

}

