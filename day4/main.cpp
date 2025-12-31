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

int min(int a,int b){ // a and b are parameters 
  if(a<b) return a ;
  return b ;
}

int numSum(int numb){
  int sum =0;

  for(int i=0 ; i<= numb ;i++){
    sum += i ;
  }

  return sum ;
}


int factorial(int num){
  // if(num==1){
  //   return 1 ;
  // }else{
  //   return num * factorial(num -1 );
  // }

  int fact = 1 ;

  for(int i =1 ; i<=num ; i++){
    fact *= i ;
  }
  return fact ;
}

int digitSum(int num){

  int sum = 0 ;

  while(num >0 ){
    int lastDigit = num %10 ;

    num = num/10 ;

    sum +=lastDigit ;
  }

  return sum ;
}

int binomial(int n , int r){
  int factN = factorial(n) ;
  int factR = factorial(r) ;
  int factNmR = factorial(n-r);

  return factN/(factR*factNmR) ;
}

int main(){
 
  // int val = printHello() ;
  // cout<<val<<endl ;
  // cout << sum(5,6)<<endl ;

  // cout<<min(42,5)<<endl ;  // 42 , 5  arguments 

// ------------------------------------------------------------------------------------------------------
   //calculate sum of no from 1 to n ;

    // cout<<numSum(5)<<endl ;

// ------------------------------------------------------------------------------------------------------
  //calculate n factorial 

  // cout<<factorial(5)<<endl ;

// ------------------------------------------------------------------------------------------------------
  //calculate sum of digit of a number

  // cout<<digitSum(1234)<<endl ;

// ------------------------------------------------------------------------------------------------------
  //calculate nCr binomial coefficient for n & r 

  cout<<binomial(8,2)<<endl ;

// ------------------------------------------------------------------------------------------------------

  return 0 ; 
}




