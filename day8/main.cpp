#include<iostream>
#include<vector>
using namespace std ;

int main(){

    // vectors : dynamic in size 
    // stl : std template lib
    cout<< "vectors"<<endl ;

    // creation 

    vector<int>vec ; //0
    vector<int>vec1 = {1,2,3} ;
    // vector<int>vec2(x,y) ;   //x is size of vector ,y is value at eact index  

    cout<<vec1[0]<<endl ;

    return 0 ;
}