#include<iostream> 
using namespace std ;


bool checkTheNumber(int num){
    if (num <= 0) return false;

    bool isPower = false ;
    int div = 1 ;

    for(int i=0 ; div<=num ; i++){
        if(num==div){
            cout<<i<<endl ;
            isPower = true ;
            break ;
        }
        div*=2 ;

    }

    return isPower ;
}


int reverseInt(int num ){
    //  1234 --> 4321 
    int reverseNum = 0 ;
    int pow =10 ;
    while(0<num){
        reverseNum = reverseNum *10 ;
        int rem = num % pow ;
        num = num/pow ;
        reverseNum +=rem ;
    }

    return reverseNum ;
}


int main(){
    
//     // bitwise operators 
//     // & | ^ 

// // bitwise and
//     cout<<(4 & 5)<<endl ;
//     cout<<(4 & 8)<<endl ;

// // bitwise or
//     cout<<(4 | 5)<<endl ;
//     cout<<(4 | 8)<<endl ;

// //bitwise xor
//     cout<<(4^8)<<endl ;

// // bitwise leftshift  <<    and >> right shift 

// // n<<i 
// cout<<(6<<1)<<endl ;


// check the n is power of 2

    
    // bool responce = checkTheNumber(12) ;

    // if(responce==true){
    //     cout<<"num is power of 2"<<endl ;
    // }else{
    //     cout<<"num is not power of 2"<<endl ;
    // }


// reverse an integer n .

   cout<< reverseInt(1234)<<endl ;
    return 0 ;
}