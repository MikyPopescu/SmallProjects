#include<iostream>
#include <stdlib.h>
using namespace std;
int v[20];
char a[20];
int main()
{
    int i,j, S1,S2,S3,S4,S5,S6,S7,S8;
    cout<<"_____________"<<endl;
    cout<<"|   |   |   |"<<endl;
    cout<<"| 1 | 2 | 3 |"<<endl;
    cout<<"|___|___|___|"<<endl;
    cout<<"|   |   |   |"<<endl;
    cout<<"| 4 | 5 | 6 |"<<endl;
    cout<<"|___|___|___|"<<endl;
    cout<<"|   |   |   |"<<endl;
    cout<<"| 7 | 8 | 9 |"<<endl;
    cout<<"|___|___|___|"<<endl;

    cout<<endl;

    for(i=1; i<=9; i++)
    {
        if(i%2!=0)
        {
            cout<<"Jucatorul X: Introdu coordonata: ";
            cin>>j;      while(v[j]!=0){cout<<"Locul este ocupat! Reintrodu coordonata: ";
                                         cin>>j;
                                        }
            v[j]=1;        a[j]='X';
        }
        else
        {
            cout<<"Jucatorul 0: Introdu coordonata: ";
            cin>>j;      while(v[j]!=0){cout<<"Locul este ocupat! Reintrodu coordonata: ";
                                         cin>>j;
                                        }
             v[j]=8;         a[j]='0';
        }
        S1=v[1]+v[2]+v[3];     S2=v[4]+v[5]+v[6];      S3=v[8]+v[9]+v[7];     S4=v[1]+v[7]+v[4];
        S5=v[5]+v[2]+v[8];     S6=v[3]+v[9]+v[6];      S7=v[1]+v[9]+v[5];     S8=v[3]+v[7]+v[5];
     cout<<"_____________"<<endl;
     cout<<"|   |   |   |"<<endl;
    cout<<"| "<<a[1]<<" | "<<a[2]<<" | "<<a[3]<<" |"<<endl;
     cout<<"|___|___|___|"<<endl;
     cout<<"|   |   |   |"<<endl;
    cout<<"| "<<a[4]<<" | "<<a[5]<<" | "<<a[6]<<" |"<<endl;
     cout<<"|___|___|___|"<<endl;
     cout<<"|   |   |   |"<<endl;
    cout<<"| "<<a[7]<<" | "<<a[8]<<" | "<<a[9]<<" |"<<endl;
     cout<<"|___|___|___|"<<endl<<endl;
        if( S1==3 || S2==3 || S3==3 || S4==3 || S5==3 || S6==3 || S7==3 || S8==3)
        {

            cout<<"Jucatorul X a castigat !";  return 0;
        }
        if( S1==24 || S2==24 || S3==24 || S4==24 || S5==24 || S6==24 || S7==24 || S8==24)
        {
            cout<<"Jucator 0 a castigat !";  return 0;
        }

    }
     cout<<"Remiza";

}
