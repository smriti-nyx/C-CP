#include<bits/stdc++.h>
using namespace std ;

void sortarray(int a[], int size );

int main(){

    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);
    

    sortarray(array, size );
    for(int element : array){
        cout<<element<< " ";
    }

    return 0;
    
}

void sortarray(int array[] , int size ){
    for(int i =0;i < size -1 ; i++){
        for( int j = 0; j < size - i -1 ; j++){
            if(array[j] > array[j+1]){
                swap( array[j], array[j+1]);
            }
        }
    }
    
    }

