#include<iostream>
using namespace std ;

// if-else
int main(){

  // int n  ;
  // cout<<"enter your age : " ;
  // cin>>n ;

  // if(n >= 18){
  //   cout<<"you can vote "<<endl ;
  // }else{
  //   cout<<"you can't vote"<<endl ;
  // }

  // odd & even 

  // int n ;
  // cout<<"enter the value of n :"<<endl ;
  // cin>>n ;

  // if (n%2==0){
  //   cout<<n<<" is even number "<<endl;
  // }else{
  //   cout<<n<<" is odd number "<<endl ;
  // }


  // else if 

  int n ;
  cout<<"enter your marks :" ;
  cin>>n ;

  if(n>=90){
    cout<<"A"<<endl;
  }else if(n>=80 && n<90){
    cout<<"b"<<endl;

  }else if (n>=70 && n<80){
    cout<<"C"<<endl;
  }else{
    cout<<"D"<<endl;
  }


  return 0;
}