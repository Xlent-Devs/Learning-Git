#include<iostream>
using namespace std;

int main(){
    int a,b;
    char c;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<"Enter the value of b :";
    cin>>b;
    cout<<"Enter the operation on a and b :";
    cin>>c;
    
    switch (c)
    {
    case '+':cout<<"Sum of a and b is "<<a+b;
             break;
    case '-':cout<<"Subs of a and b is "<<a-b;
            break;
    case '*':cout<<"Multiplication of a and b "<<a*b;
            break;
    case '/':cout<<"Divison of a and b "<<a/b;
            break;
    default : cout<<"Plz enter operation amoung + - * /";
            break;
    }
    return 0;
}
