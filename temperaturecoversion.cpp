#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double celsius,fahrenheit;
    char result;
    cout<<"enter result that you want (F or C): ";
    cin>>result;
    if(result=='F'){
    cout<<"Enter temperature ( in C): ";
    cin>>celsius;

    fahrenheit=(9.0/5.0)*celsius+32;
    cout<<"temperature (F): "<<fahrenheit<<endl;
    }
    else if(result=='C'){
        cout<<"temperature in fahrenheit: ";
        cin>>fahrenheit;
        celsius=(fahrenheit-32)/1.8;
         cout<<"temperature (C): "<<celsius<<endl;
    }
    return 0;
}
