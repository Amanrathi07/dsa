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
    while(start<end ){   // or start< size/2
        swap(arr[start],arr[end]) ;
        start++ ;
        end-- ;
    }
    
}



int sumArr(int arr[],int size){
    int sum = 0 ;
    for(int i =0 ; i<size;i++){
        sum += arr[i] ;
    }
    return sum ;
}   

int mullArr(int arr[],int size){
  int mull = 1 ;
    for(int i =0 ; i<size;i++){
        mull *=arr[i] ;
    }
    return mull ;
}



int arrMin(int arr[] ,int size ){
    int minIndex = 0;
    for(int i = 0 ;i<size ; i++){
       if(arr[minIndex]>arr[i]){
        minIndex = i ;
       }
    }
    return minIndex ;
}

int arrMax(int arr[] ,int size ){
    int maxIndex = 0;
    for(int i = 0 ;i<size ; i++){
       if(arr[maxIndex]<arr[i]){
        maxIndex = i ;
       }
    }
    return maxIndex ;
}

void minMaxSwap(int arr[] ,int size){
    int minIndex = arrMin(arr,size) ;
    int maxIndex = arrMax(arr,size) ;


    swap(arr[minIndex],arr[maxIndex]) ;
}



void uniqueValue(int arr[] ,int size ){
    for(int i=0 ; i<size ; i++){
        bool isUnique = true ;
        for(int j=0 ; j<size ;j++){
             if(i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout<<arr[i]<<endl ;
        }
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

// ===================================================================

    // reverse an array

    // int arr[] ={1,2,3,4,5,6,7} ;
    // int size = sizeof(arr)/sizeof(int);

    // reverseArr(arr,size);

    // for(int i= 0 ;i<size ;i++){
    //     cout<<arr[i]<<endl ;
    // }

// ===================================================================


    int arr[] ={1,2,3,4,1} ;
    int size = sizeof(arr)/sizeof(int);

   
    // cout<<sumArr(arr,size)<<endl ;
  
    // cout<<mullArr(arr,size)<<endl ;

    // minMaxSwap(arr,size ) ;

    uniqueValue(arr, size) ;

    
    

    return 0 ;
}
