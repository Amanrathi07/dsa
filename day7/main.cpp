#include<iostream> 

using namespace std ;

int main(){
// array , first data structure 

    // creation 
    int marks[5];
    int newMarks[] ={1,2,3,4,5} ;

    for(int i = 0 ;i<sizeof(newMarks)/sizeof(int) ;i++ ){
        cout<<newMarks[i]<<endl ;
    }

    return 0 ;
}

