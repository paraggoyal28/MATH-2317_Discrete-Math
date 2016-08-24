#include<iostream>
#include<cstring>
#include<fstream>
#include<map>
#include<ctime>
#include<vector>
using namespace std;
//ofstream myfile;
map<string, int> checking;
int counter = 0;
vector<string> vc;

void print(vector<string> vec)
{
    sort(vec.begin(), vec.end());
    cout << "ID\t Word" << endl;
    cout << "______________________" << endl;
    for(vector<string>::iterator i = vec.begin() ; i != vec.end() ; ++i){
        counter++;
        cout << "|" << counter << "\t|\t" << *i << "|"<< endl;
    }
    cout << "______________________" << endl;
}

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int l, int r)
{
    int i;
    if (l == r && !checking[a]){
        checking[a] = 1;
        vc.push_back(a);
        //myfile << counter << "\t" << a << endl;
        //cout << counter << "\t" << a << endl;
    }
    
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((a+l), (a+i));
            permute(a, l+1, r);
            swap((a+l), (a+i)); //backtrack
        }
    }
}

int main()
{
    clock_t start, finish;
    start = clock();
    
    //char str[] = "MISSISSIPPI";
    char str[20];
    cin >> str;
    int n = strlen(str);
    //myfile.open ("results.txt");
    permute(str, 0, n-1);
    print(vc);
    finish = clock();
    cout << endl << "Time took for computing is: " << ((double)(finish - start))/CLOCKS_PER_SEC << endl;
    
    //myfile.close();
    return 0;
}