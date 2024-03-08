// Conditionals in C++
#include<iostream>
using namespace std;
/* Basic program to check which number is greater*/
/*
int main(){
    int a,b;
    cin >> a;
    cin >> b;
  if(a > b){
    cout << a << " is geater" << endl;
  }else{
    cout << b << " is geater" << endl;
  }
  return 0;
}
*/
//* A basic program to determine either a number is positive or negative
/*
int main(){
    double num;
    cout << "Enter a number:";
    cin >> num ;
    if(num > 0){
        cout << "You entered  a positive number" << endl;
    }else{
        cout << "You entered  a negative number" << endl;
    }
    return 0;
}
*/
//* A simple theory ***/ In C++ program execution by default it don't read (enter),(space),(tab) button opration. but if you want your program to read this key opration you can use (cin.get()) method.By performing this operation it will return the partiular ASCII value of that key. 
//* A basic program to determine whether the entered value is a lowercase letter or uppercase letter or numeric value
// Incomplete program
/*
int main(){
    int x;
    cout <<" Enter whatever you want it will be checked anyway :)  => " ;
    cin >> x ;
    if( 'a'<= x  || x <= 'z'){
        cout << " You entered lowercase letter";
    } else if('A'<= x ||  x <= 'Z'){
        cout << " You entered uppercase letter";
    }else if (0 <=x || x<=9){
        cout <<" You entered number";
    }else {
        cout <<" You entered special character"; 
    }
   return 0;
}   */
//* Basic porgram to calculate the sum of n number
/*
int main()
{
    int n;
    cin >> n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum = sum+ i;
        i = i+1;
    }
  cout << " The value of sum is "<< sum << endl;
}
*/
//*  ****** Basic program to determine either the entered value is prime or not

int main()
{
    int num, i, chk=0;
    cout<<"Enter a Number: ";
    cin>>num;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            chk++;
            break;
        }
    }
    if(chk==0)
        cout<<"\nIt is a Prime Number";
    else
        cout<<"\nIt is not a Prime Number";
    cout<<endl;
    return 0;
}

