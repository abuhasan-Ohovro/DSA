#include<iostream>
using namespace std;
int main(){

int n;
cin >> n;

int row = 1;

while (row <= n){
    int space = n - row;
    while (space)
    {
        cout << " ";
        space = space - 1;
    }
    int j = 1;
    while (j <= row){
        cout << j;
        j = j + 1;
    }

    int start = row - 1;
    while(start){
        cout << start;
        start = start - 1;
    }

    cout << endl;
    row = row + 1;
}
    return 0;
}
//* Output **/
/*
9
        1
       121
      12321
     1234321
    123454321
   12345654321
  1234567654321
 123456787654321
12345678987654321




*/