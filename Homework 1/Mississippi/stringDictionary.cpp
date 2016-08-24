#include<iostream>
#include<cstring>
#include<map>
#include<ctime>
#include<vector>
using namespace std;
map<string, int> checking;
int counter = 0;
vector<string> vc;

void print(vector<string> vec){
    
    sort(vec.begin(), vec.end());
    cout << "ID\t Word" << endl;
    for(vector<string>::iterator i = vec.begin() ; i != vec.end() ; ++i){
        counter++;
        cout <<  counter << "\t" << *i << endl;
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

int main(){
    
    // Time computating
    clock_t start, finish;
    start = clock();
    
    char str[20];
    cin >> str; // Write the Text u want.
    
    permutate(str, 0, strlen(str)-1);
    
    print(vc);
    
    // Time Printing
    finish = clock();
    cout << endl << "Time took for computing is: " << ((double)(finish - start))/CLOCKS_PER_SEC << endl;
    return 0;
}