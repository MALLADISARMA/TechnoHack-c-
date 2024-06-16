#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double num1,num2,result;
    char operation;
    cout<<"enter number 1: ";
    cin>>num1;
    cout<<endl;
    cout<<"enter operand (+ - * /): ";
    cin>>operation;
    cout<<endl;
    cout<<"enter number 2: "<<endl;
    cin>>num2;
    cout<<endl;
    if(operation=='+'){
       result= num1+num2;
    }
    else if(operation=='-'){
        result=num1-num2;
    }
    else if(operation=='*'){
        result=num1*num2;
    }
    else if(operation=='/'){
        result=num1/num2;
    }
    cout<<endl;
    cout<<"result is: "<<result<<endl;
    
}