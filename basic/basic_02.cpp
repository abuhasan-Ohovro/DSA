// Here we will discuss about datatypes in C++
/*
There are three type of data type in C++. These are: 
         1.Primitive data types

               *integer
               *character
               *boolean 
               *floating point
               *Double floating point
               *valueless or Void
               *Wide Character
         2.Derived Data Types
               *Function
               *Array
               *Pointer
               *Reference
         3.Abstract or User-Defined Data types
               *Class
               *Structure
               *Union
               *Enumeration
               *Typedef defined Datatype
*/
//***********************************************************************/
//*Sample progeam using primitive data type //
#include<iostream>
using namespace std;
int main()
{
    int a = 234;  //Integer type variable
    cout<< a << endl;

    char b = 'A'; //Character type variable.Charater type variable shoud be in a single quotation.
    cout << b << endl;

    bool w = true ; // Boolean type variable.Boolean type variable have two property true and false.true indicate 1 and false indicate 0.
    cout << w << endl;

    float f = 24.46; // Floating type variable.In floating type variable there can be some point after the decimen point.
    cout << f << endl;

    double d = 2524524.555;// Double type variable nothing but entented type of float and integer type variable.whrer you can store more larger value.
    cout << d << endl;
   

//*************************************************************************************/
//***************************************Sizeof() method***************
//* Sizeof() method is used for finding the byte size of a particuler variable.
//* Sample program of sizeof() method
 
 double dx = 35654235.433;
 cout<<"Size of the double datatype is-"<< sizeof(dx)<<" Byte "<< endl;// Output : Size of the double datatype is-8 Byte 
 //*  interger to Character convertion
  char character_value = 97;
  cout<< character_value << endl; // Output : a
  //* Note : By default all the variable can store negative and positive value. But if we want to store only positive nunber we can use (unsigned).
  unsigned int x  = 23424;
  cout << x << endl; 

}