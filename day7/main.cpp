#include<iostream> 

using namespace std ;

int main(){
// array , first data structure 

    // creation 
    int marks[5];
    int newMarks[] ={1,2,3,4,5,43,5,763254,456,} ;

    //print an array 

    int size = sizeof(newMarks)/sizeof(int);
    // for(int i = 0 ;i<size ;i++ ){
    //     cout<<newMarks[i]<<endl ;
    // }

    // Q > find smallest and largest in array 

// ====================================================================

    int num = newMarks[0] ;
    int index ;
    for(int i = 0 ;i<size ;i++ ){

        // if(newMarks[i]<num){
        //     num = newMarks[i] ;
        //     index = i ;
        // }
        
        if(newMarks[i]>num){
         num = newMarks[i] ;     //for the largest 
         index = i ;
        }
    }

// ====================================================================



    cout<<num <<endl ;
    cout<<index <<endl ;

    return 0 ;
}

