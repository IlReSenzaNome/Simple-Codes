#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
    system("Title Calculators");
    
    char operarion;
    double FirstNumber,SecondNumber;

    cout<<"Enter the operator (+,-,*,/): "; cin>>operarion;

    cout<<"Enter two operators: ";
    cin>>FirstNumber>>SecondNumber;
    
    switch (operarion){
    case '+':
        cout<<FirstNumber<<" + "<<SecondNumber<<" = "<<FirstNumber+SecondNumber<<endl;
        break;
    case '-':
        cout<<FirstNumber<<" - "<<SecondNumber<<" = "<<FirstNumber-SecondNumber<<endl;
        break;
    case '*':
        cout<<FirstNumber<<" * "<<SecondNumber<<" = "<<FirstNumber*SecondNumber<<endl;
        break;
    case '/':
        cout<<FirstNumber<<" / "<<SecondNumber<<" = "<<FirstNumber/SecondNumber<<endl;
        break;
    
    default:
        cout<<"operator is not correct";
        break;
    }

    getch();
    return 0;
}