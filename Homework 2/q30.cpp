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

    int n, size;
    cout << "Please enter the number of elements.\n";
    cin >> n;
    cout << "Please enter the elements in the set.\n";
    int A[n];
    for(int i = 0; i < n; ++i) cin >> A[i];
    cout << "Please enter the size that you want...(ie: 3 for 3 element subsets).\n";
    cin >> size;
    list<int> lst;
    subset(A, n, size, 0, lst);

}