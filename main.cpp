#include<iostream>
using namespace std;

int main(){
 cout <<"pointer"<<endl;
 int num = 10 ;

 int* prt = &num;  // & gives the address of num
 cout << prt << endl; // print num addres

 // derefrensing 

 cout <<*prt << endl ; // print 10 
return 0;
}