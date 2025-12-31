#include<iostream>
using namespace std ;

// function 

int printHello(){
  cout<<"hello world " << endl ;
  return 5 ;
}

int sum(int a,int b){   //pass by value
  return (a+b);
}

int main(){
 
  // int val = printHello() ;
  // cout<<val<<endl ;
  cout << sum(5,6)<<endl ;


  return 0 ; 
}




