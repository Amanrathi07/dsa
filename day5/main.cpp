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

int binToDec(int num){
    int ans = 0 ;
    int pow = 1 ;
    while(0<num){
        int rem = num%10 ;
        ans +=rem*pow;

        num = num/10 ;
        pow = pow*2 ;

    }
    return ans ;
}

void funTry(){
    cout<<"just git branch try"<<endl ;
}


int main(){

    cout<<decToBin(6)<<endl;

    cout<<binToDec(110)<<endl ;

    return 0 ;
}