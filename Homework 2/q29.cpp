#include <iostream>
#include <list>
#include <stdlib.h>
using namespace std;

void subset(int * arr, int size, int left, int index, list<int> &lst){
    
    if(left == 0){
        for(list<int>::iterator it = lst.begin(); it != lst.end() ; ++it)
            cout << *it << " ";
        cout << endl; 
        return;
    }

    for(int i = index ; i < size ; i++){
        lst.push_back(arr[i]);
        subset(arr,size,left-1,i+1,lst);
        lst.pop_back();
    }

}

int main (){

    int A[7]={1,2,3,4,5,6,7};
    list<int> lst;   
    subset(A, 7, 4, 0, lst);

}