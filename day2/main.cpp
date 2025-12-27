#include <iostream>
using namespace std;

// if-else
int main()
{

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
  //
  // int n ; cout<<"enter your marks :" ;
  // cin>>n ;
  // if(n>=90){
  //   cout<<"A"<<endl;
  // }else if(n>=80 && n<90){
  //   cout<<"b"<<endl;
  // }else if (n>=70 && n<80){
  //   cout<<"C"<<endl;
  // }else{
  //   cout<<"D"<<endl;
  // }
  //
  // char ch ;
  //
  // cout<<"enter the ch :";
  // cin>>ch ;
  //
  // if(ch>='a'&& ch<='z'){
  //   cout<<"ch is lowercase "<<endl;
  // }else{
  //   cout<<"ch is uppercase "<<endl;
  // }
  //
  //
  // if(ch>=65 && ch<=90){
  //   cout<<"uppercase"<<endl;
  // }else{
  //   cout<<"lowercase "<<endl;
  // }

  // loops

  // for loop

  // for(int i = 1 ; i<= 5 ; i++){
  //   cout<<i<<endl;
  // }
  //
  // int i = 1;
  //   while (i<=5) {
  //    cout<<i<<" " ;
  //    i++ ;
  //   }
  //   cout <<endl ;

  // int sum = 0 ;
  //   for(int i = 1 ; i<= 5 ; i++){
  //     sum+=i ;
  //     if(i == 3){
  //       break ;
  //     }
  //   }
  //   cout<<sum<<endl;
  //

  // break  ,  continou ;

  // sum of odd number b/w 1 to n
  // int n ;
  // int sum = 0 ;
  //
  // int i = 1 ;
  // cout<<"enter the value of n :" ;
  //
  // cin>>n ;
  //
  // // for(int i = 1 ; i<=n ; i++){
  // //   if(i%2!=0){
  // //     cout<<i<<" " ;
  // //     sum+=i ;
  // //   }
  // // }
  //
  // while(i<=n){
  //   if(i%2!=0){
  //     sum+=i;
  //   }
  //   i++;
  // }
  // cout<<"sum is "<<sum <<endl ;

  // prime or compositer

  // int n ;
  // bool isPrime = true ;

  // cout<<"enter the value of n :" ;
  // cin>>n ;

  // for(int i=2 ; i <n ;i++){
  //   if(n%i==0){
  //     isPrime = false ;
  //     break ;
  //   }
  // }

  // if(isPrime==true){
  //   cout<<"prime"<<endl ;
  // }else{
  //   cout<<"composite"<<endl ;
  // }

  // int n;
  // bool isPrime = true;

  // cout << "enter the value of n :";
  // cin >> n;

  // for(int i=2;i*i<=n;i++){
  //   if(n%i==0){
  //     isPrime = false ;
  //     break ;
  //   }
  // }

  // if(isPrime==true){
  //   cout<<"prime"<<endl ;
  // }else{
  //   cout<<"composite"<<endl ;
  // }

  // nested loop

  // for (int i = 0; i <= 4; i++){
  //   for (int j = 0; j <= 4; j++){
  //     cout<<"*" ;
  //   }
  //   cout<<endl ;
  // }

  // q1 sum of number from 1 to n which are devisable by 3 
  // q2 print factorial of a number n 

  //q1 
  // int n ;
  // int sum = 0  ;
  // cout<<"enter the value of n :" ;
  // cin>>n ;

  // for(int i = 1 ; i<=n ; i++){
  //   if(i%3==0){
  //     cout << i <<endl ; 
  //     sum += i ;
  //   }
  // }
  // cout<<sum << endl ;

  int n ;
  cout<<"enter the value of n :" ;
  cin>>n ;

  for(int i = 1 ;i*i <= n ; i++){
    if(n%i==0){
      cout<<i<<',' ;
    }
  }
  cout<<endl;


  return 0;
}
