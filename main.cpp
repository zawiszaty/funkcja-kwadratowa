#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <winbase.h>

using namespace std;

float delta(float A, float B, float C)
{
  float wynik;
 wynik = (B*B)-(4*A*C);
 return wynik;
}

 float x1(float p, float A,float B)
{
    float wynik;
    int o=-1;
    wynik = (o*B-p)/(2*A);
    return wynik;
}

float x2(float p, float A,float B)
{
    float wynik;
    int o=-1;
    wynik = (o*B+p)/(2*A);
    return wynik;
}
float x0(float A, float B)
{
    float wynik;
    int o=-1;
    wynik = (o*B)/(2*A);
    return wynik;
}
float a,b,c,delta2;
int main()
{
    while(1==1)
    {
    system("cls");

    cout << "Podaj A:" ;
        while(!(cin>>a))
    {
        system("cls");
         cout<<"To nie jest liczba "<<endl;
         cout << "Podaj A:" ;
            cin.clear();
            cin.sync();
    }
    Beep( 400,300 );

        cout << "Podaj B:" ;
              while(!(cin>>b))
    {
        system("cls");
         cout<<"To nie jest liczba "<<endl;
         cout << "Podaj B:" ;
            cin.clear();
            cin.sync();
    }
    Beep( 400,300 );

            cout << "Podaj C:" ;
                 while(!(cin>>c))
    {
        system("cls");
         cout<<"To nie jest liczba "<<endl;
         cout << "Podaj C:" ;
            cin.clear();
            cin.sync();
    }
    Beep( 400,300 );

            delta2=delta(a,b,c);
cout<<"Delta rowna sie "<<delta2<<endl;

   int flaga = 1;
           while(flaga==1)
            {
                char wybor;
                cout<<"Liczyc pierwiastki ?"<<endl;
                cout<<"1:Tak: "<<endl;
                cout<<"2:Nie: (wyjscie z programu)"<<endl;
                cout<<"3: Wpisz liczby ponownie"<<endl;
                wybor=getch();
           switch(wybor)
{
case '1':
 float pierwiastek;
 pierwiastek = sqrt(delta2);
  Beep( 400,300 );
 if(delta2<0)
 {
     cout<<"Delta jest mniejsza od zera rownanie nie ma rozwiazan"<<endl;
     Beep( 400,300 );
     int flaga3=1;
     while(flaga3==1)
     {


     cout<<"1: liczyc ponownie ?"<<endl;
     cout<<"2: Wyjscie z programu"<<endl;

     char z;
     z=getch();
     switch(z)
     {
         case '1':
             flaga=0;
             flaga3=0;
             Beep( 400,300 );
             break;

         case'2':
             exit(0);
             Beep( 400,300 );
            break;
         default:
             cout<<"Nic nie wybrales ";
             Beep( 400,300 );
            break;
     }
     }



 }
 else
    if(delta2==0)
 {
     cout<<"delta mniejsza od zera jeden pierwiastek"<<"x0: "<<x0(a,b)<<endl;

  Beep( 400,300 );
 }
    else
        if(delta>0)
    {


    cout<<"Pierwiastki sa rowne: "<<endl;
    cout<<"x1: "<<x1(pierwiastek,a,b)<<endl;
    cout<<"x2: "<<x2(pierwiastek,a,b);

     Beep( 400,300 );
    }
    break;

case '2':

    exit(0);
     Beep( 400,300 );
    break;
case '3':
    {system("cls");
        flaga=0;
        Beep( 400,300 );
        break;

    }

default:
    cout<<"Nic nie wybrales !!!!!!";
    Sleep(1000);
    system("cls");
     Beep( 400,300 );
    break;
}
           }
    }
           while(true){}
    return 0;
}
