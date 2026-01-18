#include<iostream>
#include<vector>
using namespace std ;

int main(){
    // maximum array sum 
    int n = 5 ;
    vector<int>arr = {1,2,3,4,5} ;

   // print all subarray of arr ;

   for(int st = 0 ; st<n ; st++){
    for(int en =st ; en<n ;en++ ){
        for(int i ; i<n;i++){
            cout<<arr[i] ;
        }
    }
    cout<<endl;
   }
    return 0 ;
}

//                       st    en   time
// 1 12 123 1234 12345   1      
// 2 23 234 2345        2
// 3 34 345               3
// 4 45                     4
// 5            