#include<iostream>
#include<cstring>
#include<map>
#include<ctime>
#include<vector>
#define vsi vector<string>::iterator
#define vs vector<string>
using namespace std;
map<string, int> checking;
int counter = 0;
vector<string> vc;

void print(){
    
    cout << "ID\t Word" << endl;
    for(vector<string>::iterator i = vc.begin() ; i != vc.end() ; ++i){
        counter++;
        cout << counter << "\t" << *i << endl;
    }
    
}

void swap(char *x, char *y){
    char t = *x;
    *x = *y;
    *y = t;
}

void permutate(char *a, int l, int r){
    int i;
    
    if (l == r && !checking[a]){
        checking[a] = 1;
        vc.push_back(a);
    }
    
    else
        for (i = l; i <= r; ++i){
            swap((a+l), (a+i));
            permutate(a, l+1, r);
            swap((a+l), (a+i));
        }
}



int binSearch(vector<string> vecStr, int l, int h, string key){
    
    int mid = (l+h)/2;
    if(vecStr[mid] == key)
        return mid;
    else if(vecStr[mid] > key)
        return binSearch(vecStr, l, mid-1, key);
    else if(vecStr[mid] < key)
        return binSearch(vecStr, mid+1, h, key);
    else return -1;
}

int main(){
    
    // Time computating
    clock_t start, finish;
    start = clock();
    
    char str[20];
    cin >> str; // Write the Text u want.
    
    permutate(str, 0, strlen(str)-1);
    
    sort(vc.begin(), vc.end());
    print();
    
    string searchThis;
    cin >> searchThis;
    
    cout << "\nThe word searched " << searchThis << " is at the location: " << binSearch(vc, 0, vc.size(), searchThis)+1 << endl;
    
    // Time Printing
    finish = clock();
    cout << endl << "Time took for computing is: " << ((double)(finish - start))/CLOCKS_PER_SEC << endl;
    return 0;
}