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
  

  //loops

  //for loop   
    
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
int n ;
int sum = 0 ;
cout<<"enter the value of n :" ;

cin>>n ;

for(int i = 1 ; i<=n ; i++){
  if(i%2!=0){
    cout<<i<<" " ;
    sum+=i ;
  }
}
cout<<"sum is "<<sum <<endl ;






  return 0;
}
