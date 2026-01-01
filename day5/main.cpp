#include<iostream>
using namespace std ;

// binary number system 

int decToBin(int num){
    int ans = 0 ;
    int pow =1 ;
    while(0<num){
        int rem = num%2 ;
        num=num/2 ;
        ans += rem*pow ;
        pow = pow*10 ;
    }
    return ans ;
}

int main(){

    cout<<decToBin(6)<<endl;


    return 0 ;
}