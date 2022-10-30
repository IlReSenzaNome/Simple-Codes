#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct datos
{
    char Nombre[40];
    int Edad;
    char Sexo[20];
}d1;

void pedirdato(int& );
datos op1(datos);
void op2();
int op3(int);
int fibonacci(int );

int main()
{
    int option,n;
    system("Title Operation Menu");
    system("Color 4a");
    system("cls");
    do
    {
        pedirdato(option);
        switch (option)
        {
        case 1:
            op1(d1);
            break;
        case 2:
            op2();
            break;
        case 3:
            do
            {
                cout<<"dijite el numero que deseas: ";
                cin>>n;
            } while (n <= 0);
            op3(n);
            system("cls");
            break;
        case 4:
            do
            {
                cout<<"Dijite un numero: ";
                cin>>n;
            } while (n <= 0);
            cout<<"Serie fibonacci: "<<endl;
            for (int i = 0; i < n; i++)
            {
                cout<<fibonacci(i)<<" , ";
            }
            cout<<endl;
            system("pause");
            system("cls");
            break;
        case 5:
            default:
                cout<<"\t\tThanks You"<<endl;
                system("pause");
                exit(0);
            break;
        }
    } while (option != 5);

    getch();
    return 0;
}

void pedirdato(int& option)
{
    cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t";
    cout<<"\bGRUPO Nro 2."<<endl;
    cout<<"PROGRAMMING PROJECT"<<endl;
    cout<<"1. Heart Beats."<<endl;
    cout<<"2. Draw Figures."<<endl;
    cout<<"3. Show a Multiplication Table."<<endl;
    cout<<"4. Fibonacci serie"<<endl;
    cout<<"5. Exit."<<endl;
    cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t"<<endl;
    cout<<"Select an option: "; cin>>option;
    system("cls");
}

datos op1(datos d1)
{
    char mas[] = "masculino";
    char fem[] = "femenino";
    cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t"<<endl;
    fflush(stdin);
    cout<<"Type the name: "; cin.getline(d1.Nombre,40,'\n');
    cout<<"Enter your age: "; cin>>d1.Edad;
    fflush(stdin);
    cout<<"type your gender: "; cin.getline(d1.Sexo,20,'\n');
    cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t"<<endl;
    system("cls");
    strlwr(d1.Sexo);
    if (strcmp(d1.Sexo,mas) == 0)
    {
        cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t"<<endl;
        cout<<"\nPersonal information"<<endl;
        cout<<"Name: "<<d1.Nombre<<endl;
        cout<<"Age: "<<d1.Edad<<endl;
        cout<<"Sex: "<<d1.Sexo<<endl;
        cout<<"The number of beats per minute is: "<<210 - d1.Edad<<endl;
        cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t"<<endl;
        system("pause");
        system("cls");
    }
    else if (strcmp(d1.Sexo,fem) == 0)
    {
        cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t"<<endl;
        cout<<"\nPersonal information"<<endl;
        cout<<"Name: "<<d1.Nombre<<endl;
        cout<<"Age: "<<d1.Edad<<endl;
        cout<<"Sex: "<<d1.Sexo<<endl;
        cout<<"The number of beats per minute is: "<<220 - d1.Edad<<endl;
        cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t"<<endl;
        system("pause");
        system("cls");
    }
    else
    {
        cout<<"Invalid Gender"<<endl;
        system("cls");
    } 
    return d1;
}

void op2()
{
    int f;
    do {
    cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t"<<endl;
    cout<<" 1. Triangle "<<endl;
    cout<<" 2. Square "<<endl;
    cout<<" 3. Rectangle "<<endl;
    cout<<" 4. Exit "<<endl;
    cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t"<<endl;
    cout<<"Select an option: "<<endl; cin>>f;
    system("cls");
    switch (f) {
        case 1:
            cout<<"\t     / \\ \n";
            cout<<"\t    /   \\ \n";
            cout<<"\t   /     \\ \n";
            cout<<"\t  /       \\ \n";
            cout<<"\t /_________\\ \n\n";
            system("pause");
            system("cls");
            break;
        case 2:
            cout<<"\t* * * * * *"<<endl;
            cout<<"\t*         *"<<endl;
            cout<<"\t*         *"<<endl;
            cout<<"\t*         *"<<endl;
            cout<<"\t*         *"<<endl;
            cout<<"\t* * * * * *\n"<<endl;
            system("pause");
            system("cls");
            break;
        case 3:
            cout<<"\t* * * * * * * * \n";
            cout<<"\t*             * \n";
            cout<<"\t*             * \n";
            cout<<"\t*             * \n";
            cout<<"\t* * * * * * * * \n"<<endl;
            system("pause");
            system("cls");
            break;
        case 4:
            default:
            system("cls");
            break;
        }
    }while(f != 4);
}

int op3(int n)
{
    cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t"<<endl;
    cout<<"The multiplication table of the number "<<n<<" is: "<<endl;
    for (int i = 1; i <= 12; i++) {
        cout<<"\t\t"<<n<<" x "<<i<<" = "<<n * i<<"\t\t"<<endl;
    }
    cout<<"\t+++++++++++++++++++++++++++++++++++++++++\t"<<endl;
    system("pause");
    return n;
}

int fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}