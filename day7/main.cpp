#include<iostream> 

using namespace std ;


void changeArr(int arr[],int size){
    

    for(int i = 0 ; i<size ; i++){
        arr[i]=arr[i]*2 ;
    }

}

int linearSearch(int arr[] ,int size ,int target){
    for(int i = 0 ; i<size ; i++){
        if(arr[i]==target){
            return i ;
        }
    }
    return -1 ;
}

void reverseArr(int arr[],int size){
    
    int start = 0 ;
    int end = size-1 ;
    while(start<size/2){
        swap(arr[start],arr[end]) ;
        start++ ;
        end-- ;
    }
    
}



int main(){
// array , first data structure 

//     // creation 
//     int marks[5];
//     int newMarks[] ={1,2,3,4,5,43,5,763254,456,} ;

//     //print an array 

//     int size = sizeof(newMarks)/sizeof(int);
//     // for(int i = 0 ;i<size ;i++ ){
//     //     cout<<newMarks[i]<<endl ;
//     // }

//     // Q > find smallest and largest in array 

// // ====================================================================

//     int num = newMarks[0] ;
//     int index ;
//     for(int i = 0 ;i<size ;i++ ){

//         // if(newMarks[i]<num){
//         //     num = newMarks[i] ;
//         //     index = i ;
//         // }
        
//         if(newMarks[i]>num){
//          num = newMarks[i] ;     //for the largest 
//          index = i ;
//         }
//     }

    // cout<<num <<endl ;
    // cout<<index <<endl ;

// ====================================================================

    // // pass by value(primitive) and pass by refrence(non primitive) 
    
    // int marks[] = {1,2,3,4,5} ;
    // int size = sizeof(marks)/sizeof(int);
    // changeArr(marks,size) ;

    // for(int i = 0 ; i<5 ; i++){
    //     cout<<marks[i]<<endl ;
    // }
  
// ====================================================================
    
    // linear search 
    
    // int marks[] = {1,2,3,4,5} ;
    // int size = sizeof(marks)/sizeof(int);

    // int target = 3 ;

    // cout<<linearSearch(marks,size,target)<<endl ;

// ====================================================================

    // reverse an array

    int arr[] ={1,2,3,4,5,6,7} ;
    int size = sizeof(arr)/sizeof(int);

    reverseArr(arr,size);

    for(int i= 0 ;i<size ;i++){
        cout<<arr[i]<<endl ;
    }
    return 0 ;
}

