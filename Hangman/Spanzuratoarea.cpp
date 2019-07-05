# include <iostream>
# include <cstring>
# include <conio.h>

using namespace std;

int main()
{
    int i,ok1,ok2,vieti;
    cout<<endl<<endl<<"     Cate vieti ?    ";
    cin>>vieti;
    char x[101],l,ch;

    i=0;
    cout<<"\n     Introduceti cuvantul de ghicit:    ";
    ch=getch();

    while(!(ch>='a' && ch<='z' || ch>='A' && ch<='Z') && ch!=13) {
            ch=getch();
    }

    cout<<"*";
    while(ch!=13 )
    {
        x[i]=ch;
        ch=getch();
        while(!(ch>='a' && ch<='z' || ch>='A' && ch<='Z') && ch!=13){
            ch=getch();
        }
        cout<<"*";
        i++;
    }


    cout<<endl;
    x[i]='\0';
    cout<<"\n     Ghiceste o litera !"<<endl;
    int v[strlen(x)+1];
    ok1=strlen(x);
    for(i=0; i<strlen(x); ++i)
    {
        cout<<"-";
        v[i]=1;
    }
    cout<<endl<<endl;
    while(ok1>0 && vieti>0)
    {
        cin>>l;
        ok2=0;
        for(i=0; i<strlen(x); ++i)
        if(x[i]==l)
            {
                v[i]=0;
                ok2=1;
                ok1--;
            }
        if(ok2==0)
        {
            vieti--;
            cout<<"                 Mai ai "<<vieti<<" vieti"<<endl;
        }

            for(i=0; i<strlen(x);i++)
                if(v[i]==0)cout<<x[i];
                 else cout<<"_";

            cout<<endl;
            if(vieti==0)cout<<"\n        Cuvantul era "<<x<<endl<<"Ai pierdut !";
            if(ok1==0)cout<<"\nAi castigat !"<<endl<<endl<<endl;
        }
    }

