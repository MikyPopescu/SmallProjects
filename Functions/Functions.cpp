#include<iostream>
#include <graphics.h>
#include <cmath>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int f1(int x)
{
    return x*x+10*x;
}

int f2(int x)
{
    return floor(x);
}

int f3(int x)
{
    return x*x*x;
}

float f4(float x)
{
    return pow(2,x);
}

float f5(float x)
{
    return pow(0.5,x);
}

float f6(float x)
{
    return log(x)/log(2);
}

float f7(float x)
{
    return log(x)/log(0.5);
}

float f8(float x)
{
    return 1./x;
}

float rad(float x)
{
    return x*3.14159/360;
}

int main()
{
    int graphdriver, graphmode;
    graphdriver = DETECT;
    ///initgraph(&graphdriver, &graphmode," ");
    int gd = DETECT, gm;

    int i,j;
///FUNCTIA DE GRADUL 2
    initwindow(1200,650,"   GRAFICUL functiei de gradul al doilea ");
    setviewport(520,400,400,400,0);
    outtextxy( 70, -150, "   GRAFICUL functiei de gradul al doilea f(x) = x^2 + 10x DEFINITA PE MULTIMEA [-b/2a; +inf)");
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);
    setcolor(10);
    moveto(-5*15,-f1(-5)*3);
    for(i=-5; i<=20; i++)
    {
        delay(100);
        lineto(i*15,-f1(i)*3);
    }
    getch();
    closegraph();


///FUNCTIA DE GRADUL 2; problema: se inchide prea repede si trece la graficul urmator
    initwindow(1200,650,"   GRAFICUL functiei de gradul al doilea ");
    setviewport(520,400,400,400,0);
    outtextxy( 70, -150, "GRAFICUL functiei de gradul al doilea f(x) = x^2 + 10x DEFINITA PE MULTIMEA (-inf; -b/2a]");
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);
    setcolor(13);
    moveto(-300,-f1(-50)*3);
    for(i=-20; i<=-5; i++)
    {
        delay(100);
        lineto(i*15,-f1(i)*3);
    }
    getch();
    closegraph();


///FUNCTIA PARTE INTREAGA
    initwindow(1200,650,"   GRAFICUL functei parte intreaga");
    setviewport(520,400,400,400,0);
    outtextxy( 100, -250, "GRAFICUL functiei parte intreaga");
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);
    setcolor(11);
    for(i=-70; i<=70; i+=10)
    {
        delay(100);
        moveto(i*5,-f2(i)*3);
        lineto((i+10)*5,-f2(i)*3);
    }
    getch();
    closegraph();


    ///FUNCTIA PUTERE CU EXPONENT NR NAT IMPAR; problema: sare la graficul urmator
    initwindow(1200,650,"   GRAFICUL functiei putere cu exponent numar natural impar = 3");
    setviewport(520,400,400,400,0);
    outtextxy( 100, -150, "GRAFICUL functiei putere cu exponent numar natural impar = 3");
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);
    setcolor(9);
    moveto(-20*15,-f3(-20));
    for(i=-20; i<=20; i++)
    {
        delay(100);
        lineto(i*15,-f3(i));
    }
    getch();
    closegraph();


///GRAFICUL FUNCTIEI EXPONENTIALE CU BAZA SUPRAUNITARA 1,5 ; problema: la inceput se blocheaza
    initwindow(1200,650,"   GRAFICUL functiei exponentiale cu baza supraunitara 1,5");
    setviewport(520,400,400,400,0);
    outtextxy( 100, -150, "GRAFICUL functiei exponentiale cu baza supraunitara 1,5 ");
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);
    i=-200;
    setcolor(9);
    moveto(i,-f4(i/20.)*10-2);
    for(i=-1000; i<=200; i++)
    {
        delay(2);
        lineto(i,-f4(i/20.)*10-2);
    }
    getch();
    closegraph();


///Graficul functiei exponentiale cu baza subunitara 0,5; problema: nu face nimic + sare la graficul urmator
    initwindow(1200,650,"   GRAFICUL functiei exponentiale cu baza subunitara  0,5");
    setviewport(520,400,400,400,0);
    outtextxy( 100, -150, "GRAFICUL functiei exponentiale cu baza subunitara 0,5");
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);
    i=-400;
    setcolor(16);
    moveto(i,-f5(i/40.)*10-5);
    for(i=-300; i<=600; i++)
    {
        delay(2);
        lineto(i,-f5(i/40.)*10-5);
    }
    getch();
    closegraph();


///GRAFICUL FUNCTIEI LOGARITMICE CU BAZA SUPRAUNITARA
    initwindow(1200,650,"   GRAFICUL functiei logaritmice cu baza supraunitara  1,5");
    setviewport(520,400,400,400,0);
    outtextxy( 100, -150, "GRAFICUL functiei logaritmice cu baza supraunitara  1,5");
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);
    i=1;
    setcolor(9);
    moveto(i,-f6(i/10.)*10-2);
    for(i=1; i<=500; i++)
    {
        delay(5);
        lineto(i,-f6(i/10.)*10-2);
    }
    getch();
    closegraph();



///GRAFICUL FUNCTIEI LOGARITMICE CU BAZA SUBUNITARA ; problema: sare la graficul urmator
    initwindow(1200,650," GRAFICUL functiei logaritmice cu baza subunitara  0,5");
    setviewport(520,400,400,400,0);
    outtextxy( 100, -150, "GRAFICUL functiei logaritmice cu baza subunitara  1,5");
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);
    i=1;
    setcolor(10);
    moveto(i,-f7(i/10.)*10-2);
    for(i=1; i<=500; i++)
    {
        delay(5);
        lineto(i,-f7(i/10.)*10-2);
    }
    getch();
    closegraph();



///GRAFICUL FUNCTIEI 1/X
    initwindow(1200,650,"  GRAFICUL functiei 1/x");
    setviewport(520,400,400,400,0);
    outtextxy( 100, -150, "GRAFICUL functiei 1/x");
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);
    i=-300;
    setcolor(15);
    moveto(i,-f8(i)*500);
    for(i=-400; i<=400; i++)
    {
        delay(5);
        lineto(i,-f8(i)*500);
    }
    getch();
    closegraph();



///GRAFICUL FUNCTIILOR EXPONENTIALA SI LOGARITMICA CU BAZA SUPRAUNITARA
    initwindow(1200,650," GRAFICUL functiilor exponentiala si logaritmica cu baza supraunitara(2)");
    setviewport(520,400,400,400,0);
    outtextxy( 100, -150, "GRAFICUl functiilor exponentiala si logaritmica cu baza supraunitara(2)");
    setcolor(14);
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);

    setcolor(10);
    i=-200;
    moveto(i,-f6(i/10.)*10-2);
    for(i=-200; i<=500; i++)
    {
        delay(5);
        lineto(i,-f6(i/10.)*10-2);
    }
    setcolor(13);
    i=-200;
    moveto(i,-i);
    for(i=-200; i<=500; i++)
        lineto(i,-i); //prima bisectoare
    setcolor(9);
    i=-200;
    moveto(i,-f4(i/10.)*10-2);
    for(i=-200; i<=400; i++)
    {
        delay(2);
        lineto(i,-f4(i/10.)*10-2);
    }
    getch();
    closegraph();



/// GRAFICUL FUNCTIILOR SINUS SI COSINUS ; problema: sare la urmatorul grafic
    initwindow(1200,650," GRAFICUL functiilor SINUS si COSINUS");
    setviewport(520,400,400,400,0);
    outtextxy( 100, -300, "GRAFICUL functiilor SINUS si COSINUS");
    setcolor(14);
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);

    setcolor(10);
    i=-500;
    moveto(i,-sin(rad(i))*200);
    for(i=-500; i<=700; i++)
    {
        delay(1);
        lineto(i,-sin(rad(i))*200);
    }
    getch();
    ///  closegraph();
    setcolor(9);
    i=-500;
    moveto(i,-cos(rad(i))*200);
    for(i=-500; i<=700; i++)
    {
        delay(1);
        lineto(i,-cos(rad(i))*200);
    }
    getch();
    closegraph();



    ///GRAFICUL FUNCTIEI TANGENTA
    initwindow(1200,650," GRAFICUL functiei TANGENTA ");
    setviewport(520,400,400,400,0);
    outtextxy( 100, -300, "GRAFICUL functiei TANGENTA ");
    setcolor(14);
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);

    setcolor(10);
    i=-500;
    moveto(i,-tan(rad(i))*50);
    int min=1000000;
    for(i=-500; i<=1000; i++)
    {
        delay(2);
        lineto(i,-tan(rad(i))*50);
    }
    getch();
    closegraph();



    ///GRAFICUL FUNCTIEI COTANGENTA
    initwindow(1200,650," GRAFICUL functiei COTANGENTA");
    setviewport(520,400,400,400,0);
    outtextxy( 100, -300, "GRAFICUL functiei COTANGENTA");
    setcolor(14);
//axa oy
    setcolor(14);
    moveto(0,0);
    lineto(0,500);
    lineto(0,-380);
    lineto(-7,-370);
    moveto(0,-380);
    lineto(7,-370);
//axa ox
    moveto(0,0);
    lineto(-600,0);
    lineto(600,0);
    lineto(580,-5);
    moveto(600,0);
    lineto(580,5);
    setcolor(9);
    i=-500;
    moveto(i,-1/tan(rad(i))*50);
    for(i=-500; i<=1000; i++)
    {
        delay(2);
        lineto(i,-1/tan(rad(i))*50);
    }
    getch();
    closegraph();
    return 0;
}
