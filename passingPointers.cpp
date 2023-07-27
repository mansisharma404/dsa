#include<iostream>
using namespace std;

int getSquareByPassingThroughValue(int n){
return n*n;
}

void getSquareByPassingReferenceAsPointer(int* n){
cout << n << "address - what is passed into function \n" ;
cout << *n << "address - value at address which is passed into function \n" ;
*n *= *n ;
return;
}

void getSquareByPassingReferenceAsReference(int& n){
cout << n << "address - what is passed into function this is just the value \n" ;
cout << &n << "address -  address which is passed into function \n" ;
n *= n ;
return;
}

int main(){
int nByValue = 2;
// As we are passing the number itself its value will remain same and address also wont change we will get a new  int
int nByValueSquare = getSquareByPassingThroughValue(nByValue);
cout << nByValue << "\n" ;


// We will pass address - as pointer is nothing but the address of variable we will the use this address to get the value at address and change it

int nByReferencePointer = 2;
cout << &nByReferencePointer << "address before passing \n" ;
getSquareByPassingReferenceAsPointer(&nByReferencePointer);
cout << nByReferencePointer << "value of variable in main function \n" ;


// we will not pass the address but in function we will take address and hence no de structuring will be required
int nByReference = 2;
cout << &nByReference << "address before passing \n" ;
getSquareByPassingReferenceAsReference(nByReference);
cout << nByReference << "value of variable in main function \n" ;

}