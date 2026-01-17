#include<iostream>
#include<vector>
using namespace std ;

int main(){

    // vectors : dynamic in size 
    // stl : std template lib
    cout<< "vectors"<<endl ;

    // creation 

    vector<int>vec ; //0
    vector<char>vec1 = {'a','b','c','d'} ;
    // vector<int>vec2(x,y) ;   //x is size of vector ,y is value at eact index  

//====================================================================

    // for each loop 

    for(char i:vec1){    // i is value 
        cout<<i<<endl ;
    }


    return 0 ;
}