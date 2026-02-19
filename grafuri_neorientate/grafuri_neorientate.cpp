#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

void start();
void meniu_principal();
void meniu1();
void meniu2();
void meniu21();
void meniu22();
void meniu221();
void meniu222();
void meniu23();
void meniu231();
void meniu232();
void meniu3();
void meniu31();
void meniu32();
void meniu33();
void meniu331();
void meniu332();
void meniu4();
void meniu41();
void meniu42();
void meniu5();
void meniu51();
void meniu52();
void meniu6();
void meniu61();
void meniu62();
void meniu7();
void meniu71();
void meniu72();
void meniu8();
void meniu81();
void meniu82();
void meniu83();
void meniu9();
void test1(unsigned &total);
void test2(unsigned &total);
void test3(unsigned &total);
void test_final (unsigned &total);
void barem_test();
void iesire();

struct muchie
        {unsigned x,y;} v[11];

int main(int argc, char *argv[])
{int i=1;
   if (argc > 1)
      i = atoi(argv[1]);
   else
      start();

}

void start()
{system("color E1");
   system("cls");
   int k;
   cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
   cout<<"                                             **************************************************************************"<<endl;
   cout<<"                                             *                                                                        *"<<endl;
   cout<<"                                             *                                                                        *"<<endl;
   cout<<"                                             *                                                                        *"<<endl;
   cout<<"                                             *                                                                        *"<<endl;
   cout<<"                                             *                          GRAFURI NEORIENTATE                           *"<<endl;
   cout<<"                                             *                                                                        *"<<endl;
   cout<<"                                             *                                                                        *"<<endl;
   cout<<"                                             *                                                                        *"<<endl;
   cout<<"                                             *                                                                        *"<<endl;
   cout<<"                                             **************************************************************************"<<endl;
   cout<<"  "<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
   do
   {cout<<"   Tastati 9 pentru a intra in proiect!"<<endl<<endl;
   cin>>k;
   if (k==9) meniu_principal();
   }
   while (k!=9);

}

void meniu_principal()
{system("color 0A");
   system("cls"); int i;
   cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
   cout<<"                                                                  1. Defintii"<<endl<<endl;
   cout<<"                                                                  2. Gradul unui varf"<<endl<<endl;
   cout<<"                                                                  3. Metode de reprezentare"<<endl<<endl;
   cout<<"                                                                  4. Parcurgere"<<endl<<endl;
   cout<<"                                                                  5. Conexitate"<<endl<<endl;
   cout<<"                                                                  6. Graf hamiltonian"<<endl<<endl;
   cout<<"                                                                  7. Graf eulerian"<<endl<<endl;
   cout<<"                                                                  8. Aplicatii"<<endl<<endl;
   cout<<"                                                                  9. Test"<<endl<<endl;
   cout<<"                                                                  10. Iesire"<<endl<<endl<<endl;
   cout<<"                                                              "<<endl<<endl<<endl<<endl<<endl<<endl;

   do
   {
       cout<<"Introdu acum optiunea aleasa (Ex. pt meniul 1., tastati 1)."<<endl; cin>>i;
   }
   while (i<1 || i>10);

   if (i==1) meniu1();
   if (i==2) meniu2();
   if (i==3) meniu3();
   if (i==4) meniu4();
   if (i==5) meniu5();
   if (i==6) meniu6();
   if (i==7) meniu7();
   if (i==8) meniu8();
   if (i==9) meniu9();
   if (i==10) iesire();


}
void meniu1()
{system("color 07");
   system("cls");
   int k;
    cout<<"                                                                 DEFINITII"<<endl<<endl<<endl<<endl<<endl;

    cout<<"GRAF NEORIENTAT. MUCHII. ADIACENTA. INCIDENTA"<<endl<<endl;
    cout<<"     Se numeste graf neorientat o pereche ordonata de multimi (X,U), unde:"<<endl;
    cout<<"         - X se numeste multimea varfurilor/nodurilor; este finita si nevida intotdeauna;"<<endl;
    cout<<"         - U se numeste multimea muchiilor; este o multime de perechi neordonate de elemente din multimea X;"<<endl;
    cout<<"     Notatia obisnuita este G=(X,U)."<<endl<<endl;

    cout<<"     Muchia reprezinta perechea ordonata de noduri/varfuri ce poate fi reprezentata in plan printr-un segment de dreapta/arc."<<endl<<endl;
    cout<<"     Daca x si y sunt elemente ale multimii X, perechile (x,y) sau [x,y] se numesc muchii si spunem ca varfurile x si y sunt adiacente in graf."<<endl;
    cout<<"     Astfel, adiacenta este proprietatea a doua noduri/varfuri de a fi unite printr-o muchie."<<endl<<endl;
    cout<<"     Pentru muchia u=[x,y] spunem ca varfurile x si y sunt incidente cu u."<<endl;
    cout<<"     Astfel, incidenta este proprietatea unei muchii de a uni doua noduri/varfuri."<<endl<<endl<<endl;

    cout<<"LANT. CICLU"<<endl<<endl;
    cout<<"     Lantul este o succesiune de noduri cu proprietatea ca oricare doua varfuri consecutive din lant sunt adiacente."<<endl<<endl;
    cout<<"     Astfel L=(x1, x2, ... ,xk) lant <=> exista muchiile (x1,x2), (x2, x3), ... , (xk-1, xk)."<<endl<<endl;
    cout<<"     Varfurile x1 si xk se numesc extremitatile lantului."<<endl;
    cout<<"     Lungimea lantului este reprezentata de numarul de muchii ce intra in componenta sa."<<endl;
    cout<<"     Daca varfurile din componenta lantului sunt distincte doua cate doua, atunci el se numeste elementar. In caz contrar, acesta este ne-elementar."<<endl;
    cout<<"     Lantul simplu este lantul in care fiecare muchie apare o singura data, dar nodurile se pot repeta."<<endl;
    cout<<"     Lantul compus este lantul in care muhciile se pot repeta."<<endl<<endl<<endl;

    cout<<"     Ciclul este un lant cu proprietatea ca primul varf coincide cu ultimul si muchiile distincte doua cate doua."<<endl<<endl;
    cout<<"     Astfel C=(x1, x2, ... , xk) ciclu <=> x1=xk si (x1,x2), (x2, x3), ... , (xk-1, xk) distincte doua cate doua."<<endl<<endl;
    cout<<"     Varfurile x1 si xk se numesc extremitatile ciclului."<<endl;
    cout<<"     Lungimea ciclului este reprezentata de numarul de muchii ce intra in componenta sa."<<endl;
    cout<<"     Daca varfurile din componenta ciclului, cu exceptia extremitatilor, sunt distincte doua cate doua, atunci el se numeste elementar. In caz contrar, acesta este ne-elementar."<<endl<<endl<<endl;

    cout<<"GRAF PARTIAL. SUBGRAF. GRAF COMPLET."<<endl<<endl;
    cout<<"     Graful partial este graful care se obtine prin eliminarea (suprimarea) unor muchii, dar pastrand toate varfurile din graful initial."<<endl;
    cout<<"     G1=(X,V) este graf partial pentru G=(X,U) daca V inclus sau egal cu U. Deci graful insusi poate reprezenta un graf partial."<<endl<<endl;

    cout<<"     Subgraful este graful care se obtine prin eliminarea unor varfuri si a tuturor muchiilor incidente cu acestea, din graful initial. Nu pot fi eliminate alte muchii decat cele incidente cu varfurile"<<endl;
    cout<<" eliminate."<<endl;
    cout<<"     G"<<"'"<<"=(Y,V) este subgraf pentru G=(X,U) daca Y inclus in X si V inclus sau egal cu U."<<endl<<endl;

    cout<<"     Graful complet este graful in care oricare doua varfuri sunt adiacente."<<endl<<endl;

    cout<<" TEOREMA:"<<endl;
    cout<<"     Pentru un graf G=(X,U), cu |X|=n (cardinalul multimii X=nr. de varfuri) si |U|=m (cardinalul multimii U=nr. de muchii) exista:"<<endl;
    cout<<"        m"<<endl;
    cout<<"     - 2  grafuri partiale."<<endl;
    cout<<"        n"<<endl;
    cout<<"     - 2 -1 subgrafuri."<<endl;
    cout<<"        n(n-1)/2"<<endl;
    cout<<"     - 2         grafuri neorientate cu n varfuri."<<endl;
    cout<<"     - n(n-1)=2m - numarul de muchii pentru un graf complet."<<endl<<endl<<endl;

    cout<<" GRAF BIPARTIT. GRAF BIPARTIT COMPLET. ALTE TIPURI PARTICULARE DE GRAFURI"<<endl<<endl;
    cout<<"     Graful bipartit este graful in care multimea de varfuri X poate fi partitionata in doua submultimi disjuncte A, B nevide (AUB=X) in care orice muchie din graf uneste un varf din A si unul din B. In graf "<<endl;
    cout<<" nu exista muchii intre varfurile aceleiasi sublmutimi, iar varfurile izolate (grad 0) pot apartine oricarei submultimi."<<endl;
    cout<<"     Graful bipartit complet este graful bipartit in care orice varf din A este adiacent cu orice varf din B."<<endl;
    cout<<"     Obs: Un graf bipartit nu poate contine un ciclu de lumgime impara."<<endl;
    cout<<"          Numarul muchiilor pentu un graf bipartit unde |A|=p si |B|=q este p*q."<<endl<<endl;

    cout<<" Graful aciclic este graful in care nu exista niciun ciclu."<<endl;
    cout<<" Graful regulat este graful in care toate nodurile au grade egale."<<endl<<endl<<endl<<endl;



    do
    {
            cout<<"   Tastati 9 pentru a reveni la meniu principal!"<<endl;
            cin>>k;
            if (k==9) meniu_principal();
    }
    while (k!=9);

}
void meniu2()
{system("color 04");
   system("cls");
   int i;

    cout<<"                                                                 GRADUL UNUI VARF"<<endl<<endl<<endl<<endl<<endl;


    cout<<"                                                                 2.1. Defintii"<<endl<<endl;
    cout<<"                                                                 2.2. Varf izolat"<<endl<<endl;
    cout<<"                                                                 2.3. Varf terminal"<<endl<<endl;
    cout<<"                                                                 2.4. Revenire"<<endl<<endl<<endl<<endl<<endl;


    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 2.1), introdu 21):"; cin>>i;
    }
    while (i<21 || i>24);

    if (i==21) meniu21();
    if (i==22) meniu22();
    if (i==23) meniu23();
    if (i==24) meniu_principal();
}


void meniu21()
{system("color 04");
   system("cls");
   int i;
   cout<<"                                                                          DEFINITII"<<endl<<endl<<endl<<endl<<endl;

   cout<<" VARFUL/NODUL. GRADUL UNUI VARF."<<endl;
   cout<<"      Varful/nodul este un element al multimii X ce poate fi reprezentat in plan printr-un punct/cerc, eventual numerotat."<<endl;
   cout<<"      Intr-un graf neorientat, nu exista muchie de la un varf la el insusi. Intre doua varfuri distincte exista cel mult o muchie."<<endl<<endl;

   cout<<"      Gradul unui varf x oarecare reprezinta numarul de muchii incidente cu nodul x si se noteaza d(x)."<<endl;
   cout<<"      Obs: d(x)<=n-1, n=nr de varfuri, x varf oarecare. Deci, gradul unui varf este mai mic sau egal cu nr. de varfuri-1, in orice graf neorientat."<<endl;
   cout<<"      In functie de grad, varfurile au diverse denumiri (izolat, terminal)."<<endl<<endl<<endl<<endl;

   do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu2();
}

void meniu22()
{system("color 04");
   system("cls");
   int i;
   cout<<"                                                                          VARF IZOLAT"<<endl<<endl<<endl<<endl<<endl;

   cout<<"                                                                        2.2.1. Definitie"<<endl<<endl;
   cout<<"                                                                        2.2.2. Aplicatie"<<endl<<endl;
   cout<<"                                                                        2.2.3. Revenire"<<endl<<endl<<endl<<endl<<endl;

    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 2.2.1), introdu 221):"; cin>>i;
    }
    while (i<221 || i>223);

    if (i==221) meniu221();
    if (i==222) meniu222();
    if (i==223) meniu2();

}

void meniu221()
{
   system("color 0c");
   system("cls");
    int i;
    cout<<"                                                                         DEFINITII"<<endl<<endl<<endl<<endl<<endl;

    cout<<"     Varful izolat este varful care nu este adiacent cu niciun alt varf (al carui grad este 0)."<<endl;
    cout<<"     d(x)=0 <=> x este varf izolat"<<endl<<endl<<endl;

     do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu22();
}

void nodizolat (unsigned a[11][11], unsigned n)
    {
        unsigned i, j, s, ok=0;
        for (i=1; i<=n; i++)
        {   s=0;
            for (j=1; j<=n; j++)
                s=s+a[i][j];
            if (s==0)
                {cout<<"Varful "<<i<<" este izolat"<<endl; ok=1;}
        }
        if (ok==0)
            cout<<"Nu exista varfuri izolate in graful dat";
    }

void meniu222()
{
    system("color 0c");
   system("cls");
    unsigned i, m, n, a[11][11], k, j, c, x, y;
    cout<<" Program pentru verificarea existentei unui varf izolat intr-un graf."<<endl<<endl<<endl;

cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"unsigned a[11][11];"<<endl;
cout<<"int main()"<<endl;
cout<<"{unsigned n, m, x, y, i, j, ok=0, s;"<<endl;
cout<<"do                           // nr. varfuri"<<endl;
cout<<"cin>>n;"<<endl;
cout<<"while (n<0 || n>10);"<<endl;
cout<<"do"<<endl;
cout<<"cin>>m;                      // nr. muchii"<<endl;
cout<<"while (m>=(n*(n-1))/2);"<<endl;
cout<<"for (i=1; i<=m; i++)"<<endl;
cout<<"     {cin>>x>>y;             // extremitatile muchiilor"<<endl;
cout<<"     a[x][y]++; a[y][x]++;   // construirea matricei de adiacenta"<<endl;
cout<<"     }"<<endl;
cout<<"for (i=1; i<=n; i++)"<<endl;
cout<<"     {s=0;"<<endl;
cout<<"      for (j=1; j<=n; j++)"<<endl;
cout<<"          s=s+a[i][j];"<<endl;
cout<<"      if (s==0)"<<endl;
cout<<"         {cout<<"<<'"'<<"Varful "<<'"'<<'i'<<'"'<<" este izolat"<<'"'<<"<<endl; ok=1;}"<<endl;
cout<<"     }"<<endl;
cout<<"if (ok==0)"<<endl;
cout<<"     cout<<"<<'"'<<"Nu exista varfuri izolate in graful dat"<<'"'<<";"<<endl;
cout<<"return 0;"<<endl<<endl<<endl;
cout<<"}"<<endl<<endl<<endl;

cout<<"Exemplu"<<endl;
cout<<"     Pentru n=5 varfuri, m=4 muchii si muchiile (1,2), (1,3), (1,4), (2,3), se va afisa:"<<endl<<endl;
cout<<"     Varful 5 este izolat"<<endl<<endl<<endl;


do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>i;
}
while (i<1 || i>2);
if (i==1)
{
   cout<<"Introdu acum datele de intrare (nr de varfuri sa fie cel mult egal cu 10)."<<endl<<endl;
   do
    {cout<<" Numarul de varfuri este: n="; cin>>n;
    if (n<=0 || n>10)
        cout<<"Numarul de varfuri trebuie sa fie cel mult egal cu 10!"<<endl;}
    while (n<=0 || n>10);
    do
    {
     cout<<" Numarul de muchii este: m="; cin>>m;
     if (m<0||m>(n*(n-1))/2)
        cout<<"Numarul de muchii trebuie sa fie cel mult egal cu "<<(n*(n-1))/2<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1))/2);

    for (k=1; k<=n; k++)
        for (j=1; j<=n; j++)
            a[k][j]=0;

    for (k=1; k<=m; k++)
    {
        do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
        a[x][y]++; a[y][x]++;
        while (a[x][y]>1 && a[y][x]>1)
        {
            if (a[x][y]>1 && a[y][x]>1)
                {cout<<"Aceasta muchie a fost introdusa anterior. Introdu din nou extremitatile muchiei."<<endl; a[x][y]--; a[y][x]--;}
            do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; a[y][x]++; cout<<endl;
        }
    }

   cout<<" Se va afisa: "; nodizolat(a,n);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu22();
}
else
    if (i==2)
        meniu22();


}

void nodterminal (unsigned a[11][11], unsigned n)
    {
        unsigned i, j, s, ok=0;
        for (i=1; i<=n; i++)
        {   s=0;
            for (j=1; j<=n; j++)
                s=s+a[i][j];
            if (s==1)
                {cout<<"Varful "<<i<<" este terminal"<<endl; ok=1;}
        }
        if (ok==0)
            cout<<"Nu exista varfuri terminal in graful dat";
    }

void meniu23()
{system("color 04");
   system("cls");
    int i;
   cout<<"                                                                          VARF TERMINAL"<<endl<<endl<<endl<<endl<<endl;

   cout<<"                                                                        2.3.1. Definitie"<<endl<<endl;
   cout<<"                                                                        2.3.2. Aplicatie"<<endl<<endl;
   cout<<"                                                                        2.3.3. Revenire"<<endl<<endl<<endl<<endl<<endl;

    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 2.3.1), introdu 231):"; cin>>i;
    }
    while (i<231 || i>233);

    if (i==231) meniu231();
    if (i==232) meniu232();
    if (i==233) meniu2();

   }
void meniu231()
{
    system("color 0c");
   system("cls");
    int i;
    cout<<"                                                                         DEFINITII"<<endl<<endl<<endl<<endl<<endl;

    cout<<"     Varful terminal este varful care este adiacent doar cu un alt varf (al carui grad este 1)."<<endl;
    cout<<"     d(x)=1 <=> x este varf terminal"<<endl<<endl<<endl;

     do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu23();
}
void meniu232()
{
    system("color 0c");
   system("cls");
        unsigned i, m, n, a[11][11], k, j, c, x, y;
    cout<<" Program pentru verificarea existentei unui varf terminal intr-un graf."<<endl<<endl<<endl;

cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"unsigned a[11][11];"<<endl;
cout<<"int main()"<<endl;
cout<<"{unsigned n, m, x, y, i, j, ok=0, s;"<<endl;
cout<<"do                           // nr. varfuri"<<endl;
cout<<"cin>>n;"<<endl;
cout<<"while (n<0 || n>10);"<<endl;
cout<<"do"<<endl;
cout<<"cin>>m;                      // nr. muchii"<<endl;
cout<<"while (m>=(n*(n-1))/2);"<<endl;
cout<<"for (i=1; i<=m; i++)"<<endl;
cout<<"     {cin>>x>>y;             // extremitatile muchiilor"<<endl;
cout<<"     a[x][y]++; a[y][x]++;   // construirea matricei de adiacenta"<<endl;
cout<<"     }"<<endl;
cout<<"for (i=1; i<=n; i++)"<<endl;
cout<<"     {s=0;"<<endl;
cout<<"      for (j=1; j<=n; j++)"<<endl;
cout<<"          s=s+a[i][j];"<<endl;
cout<<"      if (s==1)"<<endl;
cout<<"         {cout<<"<<'"'<<"Varful "<<'"'<<'i'<<'"'<<" este terminal"<<'"'<<"<<endl; ok=1;}"<<endl;
cout<<"     }"<<endl;
cout<<"if (ok==0)"<<endl;
cout<<"     cout<<"<<'"'<<"Nu exista varfuri terminale in graful dat"<<'"'<<";"<<endl;
cout<<"return 0;"<<endl<<endl<<endl;
cout<<"}"<<endl<<endl<<endl;

cout<<"Exemplu"<<endl;
cout<<"     Pentru n=5 varfuri, m=4 muchii si muchiile (1,2), (1,3), (1,4), (2,3), se va afisa:"<<endl<<endl;
cout<<"     Varful 4 este terminal"<<endl<<endl<<endl;


do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>i;
}
while (i<1 || i>2);
if (i==1)
{
   cout<<"Introdu acum datele de intrare (nr de varfuri sa fie cel mult egal cu 10)."<<endl<<endl;
   do
    {cout<<" Numarul de varfuri este: n="; cin>>n;
    if (n<=0 || n>10)
        cout<<"Numarul de varfuri trebuie sa fie cel mult egal cu 10!"<<endl;}
    while (n<=0 || n>10);
    do
    {
     cout<<" Numarul de muchii este: m="; cin>>m;
     if (m<0||m>(n*(n-1))/2)
        cout<<"Numarul de muchii trebuie sa fie cel mult egal cu "<<(n*(n-1))/2<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1))/2);

    for (k=1; k<=n; k++)
        for (j=1; j<=n; j++)
            a[k][j]=0;

    for (k=1; k<=m; k++)
    {
        do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
         a[x][y]++; a[y][x]++;
        while (a[x][y]>1 && a[y][x]>1)
        {
            if (a[x][y]>1 && a[y][x]>1)
                {cout<<"Aceasta muchie a fost introdusa anterior. Introdu din nou extremitatile muchiei."<<endl; a[x][y]--; a[y][x]--;}
            do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; a[y][x]++; cout<<endl;
        }
    }

   cout<<" Se va afisa: "; nodterminal(a,n);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu23();
}
else
    if (i==2)
        meniu23();
}

void meniu3()
{system("color 01");
   system("cls");
   int i;
    cout<<"                                                                 METODE DE REPREZENTARE"<<endl<<endl<<endl<<endl<<endl;

    cout<<"                                                                 3.1. Lista de adiacente"<<endl<<endl;
    cout<<"                                                                 3.2. Vectorul de muchii"<<endl<<endl;
    cout<<"                                                                 3.3. Matricea de adiacenta"<<endl<<endl;
    cout<<"                                                                 3.4. Revenire"<<endl<<endl<<endl<<endl<<endl;


     do
    {
     cout<<"Introdu optiunea dorita (ex. pt 3.1), introdu 31):"; cin>>i;
    }
    while (i<31 || i>34);

    if (i==31) meniu31();
    if (i==32) meniu32();
    if (i==33) meniu33();
    if (i==34) meniu_principal();

}

void listaadiacenta (unsigned l[11][11], unsigned n)
{
    unsigned i, j;
    for (i=1; i<=n; i++)
    {
        cout<<"Nodul "<<i<<" adiacent cu: ";
        for (j=1; j<=l[i][0]; j++)
            cout<<l[i][j]<<' ';
        cout<<endl;
    }
}

void meniu31()
{
   system("color 09");
   system("cls");
   unsigned k, i, j, c, l[11][11], a[11][11], n, m, y, x;
    cout<<"                                                                 LISTA DE ADIACENTE"<<endl<<endl<<endl<<endl<<endl;

    cout<<"     Lista de adiacente este o modalitate de a reprezenta lista varfurilor adiacente cu fiecare varf dintr-un graf dat, sub forma unui tabel."<<endl<<endl;

   cout<<"                      varf    |    vecini   "<<endl;
   cout<<"                   ___________|_____________"<<endl;
   cout<<"                        1     |     2,4     "<<endl;
   cout<<"                        2     |  1,3,4,5,6  "<<endl;
   cout<<"                        3     |    2,4,6    "<<endl;
   cout<<"                        4     | 1,2,3,5,6,7 "<<endl;
   cout<<"                        5     |   2,4,6,7   "<<endl;
   cout<<"                        6     |   2,3,5,7   "<<endl;
   cout<<"                        7     |    4,5,6    "<<endl;
   cout<<"                        8     |      -      "<<endl<<endl<<endl<<endl;

   cout<<"Program pentru afisarea listei de adiacenta a unui graf neorientat:"<<endl<<endl<<endl;

cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"int main()"<<endl;
cout<<"{unsigned n, i, j, l[11][11], m, x, y;"<<endl;
cout<<"cin>>n>>m;"<<endl;
cout<<"for (i=0; i<n; i++)"<<endl;
cout<<"  for (j=0; j<n; j++)"<<endl;
cout<<"       l[i][j]=0;"<<endl;
cout<<"for (i=1; i<=m; i++)"<<endl;
cout<<"    {"<<endl;
cout<<"       cin>>x>>y;   "<<endl;
cout<<"       l[x][0]++; l[x][l[x][0]]=y;     //indicele de sfarsit al listei nodului x si element in lista nodului x"<<endl;
cout<<"       l[y][0]++; l[y][l[y][0]]=x;     //indicele de sfarsit al listei nodului y si element in lista nodului x"<<endl;
cout<<"   }"<<endl;
cout<<"for (i=1; i<=n; i++)   "<<endl;
cout<<"  {"<<endl;
cout<<"      cout<<"<<'"'<<"Nodul "<<'"'<<"<<i<<"<<'"'<<" adiacent cu: "<<'"'<<";"<<endl;
cout<<"     for (j=1; j<=l[i][0]; j++)"<<endl;
cout<<"         cout<<l[i][j]<<"<<"'"<<" "<<"'"<<";"<<endl;
cout<<"      cout<<endl;"<<endl;
cout<<"  }    "<<endl;
cout<<"return 0;"<<endl;
cout<<"}"<<endl<<endl<<endl;


   do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>i;
}
while (i<1 || i>2);
if (i==1)
{
   cout<<"Introdu acum datele de intrare (nr de varfuri sa fie cel mult egal cu 10)."<<endl<<endl;
   do
    {cout<<" Numarul de varfuri este: n="; cin>>n;
    if (n<=0 || n>10)
        cout<<"Numarul de varfuri trebuie sa fie nenul si cel mult egal cu 10!"<<endl;}
    while (n<=0 || n>10);
    do
    {
     cout<<" Numarul de muchii este: m="; cin>>m;
     if (m<0||m>(n*(n-1))/2)
        cout<<"Numarul de muchii trebuie sa fie cel mult egal cu "<<(n*(n-1))/2<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1))/2);

    for (k=0; k<=n; k++)
        for (j=0; j<=n; j++)
            l[k][j]=0;

    for (k=1; k<=n; k++)
        for (j=1; j<=n; j++)
            a[k][j]=0;

    for (k=1; k<=m; k++)
    {
        do{
            cout<<"Prima extremitate a muchiei "<<k<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a muchiei "<<k<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);

        cout<<endl;
        a[x][y]++; a[y][x]++;
        while (a[x][y]>1 && a[y][x]>1)
        {
            if (a[x][y]>1 && a[y][x]>1)
                {cout<<"Aceasta muchie a fost introdusa anterior. Introdu din nou extremitatile muchiei."<<endl; a[x][y]--; a[y][x]--;}
            do{
            cout<<"Prima extremitate a muchiei "<<k<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a muchiei "<<k<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; a[y][x]++; cout<<endl;
        }
        l[x][0]++; l[x][l[x][0]]=y;
        l[y][0]++; l[y][l[y][0]]=x;

    }

   cout<<" Se va afisa: "<<endl; listaadiacenta(l,n);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu3();
}
else
    if (i==2)
        meniu3();
}

void vectormuchii (muchie v[10], unsigned n, unsigned m)
    {
        unsigned i;
        cout<<"Varfurile grafului sunt: ";
        for (i=1; i<=n; i++)
            cout<<i<<' ';
        cout<<endl<<"Muchiile grafului sunt: ";
        for (i=1; i<=m; i++)
            cout<<"("<<v[i].x<<','<<v[i].y<<") ";
    }

void meniu32()
{
   system("color 09");
   system("cls");
   unsigned n, m, k, i, c, a[11][11];
    cout<<"                                                                 VECTORUL DE MUCHII"<<endl<<endl<<endl<<endl<<endl;

    cout<<"     Vectorul de muchii permite inregistrarea unei muchii sub forma unei inregistrari, iar pentru toate muchiile va fi nevoie de un tablou cu astfel de elemente:"<<endl<<endl;

    cout<<"                 struct muchie"<<endl;
    cout<<"                       {int x,y;}v[10];          // x si y sunt varfurile incidente pt fiecare muchie a unui graf cu 10 varfuri"<<endl<<endl<<endl<<endl;

    cout<<"Program pentru citirea si afisarea unui graf folosind vectorul de muchii:"<<endl<<endl<<endl;
cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"struct"<<endl;
cout<<"{"<<endl;
cout<<"    unsigned x,y;"<<endl;
cout<<"}v[11];"<<endl;
cout<<"int main()"<<endl;
cout<<"{unsigned n, m, i;"<<endl;
cout<<"cin>>n>>m;"<<endl;
cout<<"for (i=1; i<=m; i++)"<<endl;
cout<<"    cin>>v[i].x>>v[i].y;"<<endl;
cout<<"cout<<"<<'"'<<"Varfurile grafului sunt: "<<'"'<<";"<<endl;
cout<<"for (i=1; i<=n; i++)"<<endl;
cout<<"    cout<<i<<"<<"'"<<" "<<"'"<<";"<<endl;
cout<<"cout<<endl<<"<<'"'<<"Muchiile grafului sunt: "<<'"'<<";"<<endl;
cout<<"for (i=1; i<=m; i++)"<<endl;
cout<<"    cout<<"<<"'"<<"("<<"'"<<"v[i].x<<"<<"'"<<","<<"'"<<"<<v[i].y<<"<<"'"<<")"<<"'"<<";"<<endl;
cout<<"return 0;"<<endl;
cout<<"}"<<endl<<endl<<endl;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);
if (k==1)
{
     cout<<"Introdu acum datele de intrare (nr de varfuri sa fie cel mult egal cu 10)."<<endl<<endl;
   do
    {cout<<" Numarul de varfuri este: n="; cin>>n;
    if (n<=0 || n>10)
        cout<<"Numarul de varfuri trebuie sa fie nenul si cel mult egal cu 10!"<<endl;}
    while (n<=0 || n>10);
    do
    {
     cout<<" Numarul de muchii este: m="; cin>>m;
     if (m<0||m>(n*(n-1))/2)
        cout<<"Numarul de muchii trebuie sa fie cel mult egal cu "<<(n*(n-1))/2<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1))/2);

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>v[i].x;
            if (v[i].x<=0 || v[i].x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (v[i].x<=0 || v[i].x>n);
        do{
            cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>v[i].y;
            if ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y);

         a[v[i].x][v[i].y]++; a[v[i].y][v[i].x]++;
        while (a[v[i].x][v[i].y]>1 && a[v[i].y][v[i].x]>1)
        {
            if (a[v[i].x][v[i].y]>1 && a[v[i].y][v[i].x]>1)
                {cout<<"Aceasta muchie a fost introdusa anterior. Introdu din nou extremitatile muchiei."<<endl; a[v[i].x][v[i].y]--; a[v[i].y][v[i].x]--;}
            do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>v[i].x;
            if (v[i].x<=0 || v[i].x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (v[i].x<=0 || v[i].x>n);
            do{
                cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>v[i].y;
                if ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y);
            a[v[i].x][v[i].y]++; a[v[i].y][v[i].x]++; cout<<endl;
        }
        cout<<endl;
    }

    cout<<" Se va afisa:"<<endl; vectormuchii (v,n,m);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu3();
}
else
    if (k==2)
        meniu3();
}

void meniu33()
{
    system("color 09");
   system("cls");
    int i;
    cout<<"                                                                 MATRICEA DE ADIACENTA"<<endl<<endl<<endl<<endl<<endl;

    cout<<"                                                                 3.3.1. Caracteistici + definitie"<<endl<<endl;
    cout<<"                                                                 3.3.2. Aplicatie"<<endl<<endl;
    cout<<"                                                                 3.3.3. Revenire"<<endl<<endl<<endl<<endl<<endl;
     do
    {
     cout<<"Introdu optiunea dorita (ex. pt 3.3.1), introdu 331):"; cin>>i;
    }
    while (i<331 || i>333);

    if (i==331) meniu331();
    if (i==332) meniu332();
    if (i==333) meniu3();

}



void meniu331()
{
    system("color 09");
   system("cls");
    int i;
    cout<<"                                                                 CARACTERISTICI. DEFINITIE"<<endl<<endl<<endl<<endl<<endl;

    cout<<"     Matricea de adiacenta a unui graf neorientat G=(X,U), |X|=n, |U|=m, este o matrice A cu n linii si n coloane (nr. de varfuri), ale carei elemente sunt definite astfel:"<<endl;
    cout<<"                   _                                                                                     "<<endl;
    cout<<"                  |  1, daca [i,j] este muchie din multimea U, i!=j <=> varfurile i si j sunt adiacente  "<<endl;
    cout<<"         a(i,j)= -|                                                                                      "<<endl;
    cout<<"                  |_ 0, in caz contrar                                                                   "<<endl<<endl<<endl;

    cout<<" Exemplu:"<<endl;
    cout<<"     Pentru graful G=(X,U), X={1,2,3,4,5}, U={(1,2),(1,4),(1,5),(3,4),(3,2)}, matricea de adiacenta va fi:"<<endl<<endl;
    cout<<"                 0 1 0 1 1"<<endl;
    cout<<"                 1 0 1 0 0"<<endl;
    cout<<"                 0 1 0 1 0"<<endl;
    cout<<"                 1 0 1 0 0"<<endl;
    cout<<"                 1 0 0 0 0"<<endl<<endl<<endl;

    cout<<"     Caracteristicile matricei de adiacenta a unui graf sunt:"<<endl;
    cout<<"         - este patratica (are n linii si n coloane)"<<endl;
    cout<<"         - este binara (elementele sunt binare, adica pot fi doar 0 sau 1)"<<endl;
    cout<<"         - este simetrica fata de diagonala principala"<<endl;
    cout<<"         - pe diagonala principala are doar valori egale cu 0"<<endl<<endl<<endl<<endl<<endl;


     do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu33();

}

unsigned verifpat (unsigned n, unsigned m)
{
  if (n == m)
    return 1;
  return 0;
}

unsigned verifdiagprinc (unsigned a[10][10], unsigned n, unsigned m)
{
  unsigned ok = 1, i;
  for (i = 0; i < n - 1; i++)
    if (a[i][i] != a[i+1][i+1])
        ok = 0;
  return ok;

}

unsigned verifelembinare (unsigned a[10][10], unsigned n, unsigned m)
{
  unsigned ok = 1, i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      if (a[i][j]<0 || a[i][j]>1)
	        ok = 0;
  return ok;
}

unsigned verifsimdp (unsigned a[10][10], unsigned n, unsigned m)
{
  unsigned ok = 1, i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      if (a[i][j] != a[j][i])
	    ok = 0;
  return ok;
}

void matriceadiacenta(unsigned a[10][10], unsigned n, unsigned m)
{
  unsigned ok=0, i, j;
  if (verifpat (n, m) == 1)
    if (verifdiagprinc (a, n, m) == 1)
        if (verifelembinare (a, n, m) == 1)
            if (verifsimdp (a, n, m) == 1)
                {
                    cout << "Matricea poate fi matrice de adiacenta pentru un graf";
                    ok = 1;
                }
  if (ok == 0)
    cout << "Matricea nu poate fi matrice de adiacenta pentru un graf";

}

void meniu332()
{
    system("color 09");
   system("cls");
    unsigned n, m, i, j, k, a[10][10], c;
    cout<<"Program pentru verificarea unei matrice daca poate fi matrice de adiacenta pentru un graf"<<endl<<endl<<endl;

cout<<"#include <iostream>"<<endl;
cout<<"#include <fstream>"<<endl;
cout<<"using namespace std;"<<endl<<endl;

cout<<"unsigned verifpat (unsigned n, unsigned m)"<<endl;
cout<<"   {"<<endl;
cout<<"     if (n==m)"<<endl;
cout<<"         return 1;"<<endl;
cout<<"     return 0;"<<endl;
cout<<"   }"<<endl<<endl;

cout<<"unsigned verifdiagprinc (unsigned a[10][10], unsigned n, unsigned m)"<<endl;
cout<<"   {"<<endl;
cout<<"      unsigned ok=1, i;"<<endl;
cout<<"      for (i=0; i<n-1; i++)"<<endl;
cout<<"           if (a[i][i]!=a[i+1][i+1])"<<endl;
cout<<"              ok=0;"<<endl;
cout<<"      return ok;"<<endl;
cout<<"   }"<<endl<<endl;

cout<<"unsigned verifelembinare (unsigned a[10][10], unsigned n, unsigned m)"<<endl;
cout<<"   {"<<endl;
cout<<"      unsigned ok = 1, i, j;"<<endl;
cout<<"      for (i=0; i<n; i++)"<<endl;
cout<<"          for (j=0; j<m; j++)"<<endl;
cout<<"              if (a[i][j]<0||a[i][j]>1)"<<endl;
cout<<"                  ok=0;"<<endl;
cout<<"      return ok;"<<endl;
cout<<"   }"<<endl<<endl;

cout<<"unsigned verifsimdp (unsigned a[10][10], unsigned n, unsigned m)"<<endl;
cout<<"   {"<<endl;
cout<<"     unsigned ok = 1, i, j;"<<endl;
cout<<"     for (i=0; i<n; i++)"<<endl;
cout<<"         for (j=0; j<m; j++)"<<endl;
cout<<"             if (a[i][j]!=a[j][i])"<<endl;
cout<<"                 ok=0;"<<endl;
cout<<"     return ok;"<<endl;
cout<<"   }"<<endl<<endl;

cout<<"int main ()"<<endl;
cout<<"{"<<endl;
cout<<"unsigned n, m, a[10][10], ok=0, i, j;"<<endl;
cout<<"cin>>n>>m;"<<endl;
cout<<"for (i=0; i<n; i++)"<<endl;
cout<<"    for (j=0; j<m; j++)"<<endl;
cout<<"        cin>>a[i][j];"<<endl;
cout<<"if (verifpat (n, m)==1)"<<endl;
cout<<"   if (verifdiagprinc (a, n, m)==1)"<<endl;
cout<<"      if (verifelembinare (a, n, m)==1)"<<endl;
cout<<"         if (verifsimdp (a, n, m)==1)"<<endl;
cout<<"             {"<<endl;
cout<<"                 cout<<"<<'"'<<"Matricea poate fi matrice de adiacenta pentru un graf"<<'"'<<";"<<endl;
cout<<"                 ok=1;"<<endl;
cout<<"             }"<<endl;
cout<<"if (ok==0)"<<endl;
cout<<"     cout<<"<<'"'<<"Matricea nu poate fi matrice de adiacenta pentru un graf"<<'"'<<";"<<endl<<endl;

cout<<"return 0;"<<endl;
cout<<"}"<<endl<<endl<<endl<<endl<<endl;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);
if (k==1)
{
    cout<<" Introdu acum datele de intrare (matricea trebuie sa aiba maxim 10 linii si 10 coloane):"<<endl;
    do
    {cout<<"n="; cin>>n;cout<<endl;
     if (n<=0 || n>10)
        cout<<"Nr. de linii trebuie sa fie cel mult egal cu 10!"<<endl;
    }
    while (n<=0 || n>10);

    do
    {cout<<"m="; cin>>m; cout<<endl;
     if (m<=0 || m>10)
        cout<<"Nr. de coloane trebuie sa fie cel mult egal cu 10!"<<endl;
    }
    while (m<=0 || m>10);

    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            do
            {cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];cout<<endl;
            if (a[i][j]<0)
                cout<<"Elementele matricei trebuie sa fie numere naturale!"<<endl;
            }
            while (a[i][j]<0);

    cout<<" Se va afisa: "; matriceadiacenta (a,n,m);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu33();
}
else
    if (k==2)
        meniu33();

}

void meniu4()
{system("color 06");
   system("cls");
   int i;

cout<<"                                                                                 PARCURGERE"<<endl<<endl<<endl<<endl<<endl;

cout<<"                                                                             4.1. In latime"<<endl<<endl;
cout<<"                                                                             4.2. In adancime"<<endl<<endl;
cout<<"                                                                             4.3. Revenire"<<endl<<endl<<endl<<endl<<endl;


    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 4.1, introdu 41):"; cin>>i;
    }
    while (i<41 || i>43);

    if (i==41) meniu41();
    if (i==42) meniu42();
    if (i==43) meniu_principal();
}


void latime (unsigned nod, unsigned n, unsigned a[11][11], unsigned coada[11], unsigned s[11])
{
    unsigned i, ic=0, sc=0;
    coada[ic]=nod;
    cout<<coada[ic]<<' ';
    s[nod]=1;
    while (ic<=sc)
        {
            for (i=1; i<=n; i++)
                if (a[coada[ic]][i]==1 && s[i]==0)
                    {
                        sc++;
                        coada[sc]=i;
                        cout<<coada[sc]<<' ';
                        s[i]=1;
                    }
            ic++;
        }
}

void meniu41()
{
    system("color 0E");
   system("cls");
   cout<<"                                                                          PARCURGEREA IN LATIME"<<endl<<endl<<endl<<endl<<endl;

   cout<<"      Parcurgerea in latime a unui graf se realizeaza cu ajutorul listei adiacentelor, precizandu-se pentru fiecare varf, toti vecinii sai nevizitati."<<endl;
   cout<<"      Se foloseste principiul cozii."<<endl;
   cout<<"      Exemplu: pentru lista de adiacenta urmatoare, parcurgerea in latime din varful 1 va fi:"<<endl;
   cout<<"                      varf    |   vecini  "<<endl;
   cout<<"                    __________|___________                            1,2,4,3,5,6,7"<<endl;
   cout<<"                        1     |    2,4    "<<endl;
   cout<<"                        2     |  1,3,4,5  "<<endl;
   cout<<"                        3     |    2,4    "<<endl;
   cout<<"                        4     |  1,2,3,5  "<<endl;
   cout<<"                        5     |  2,4,6,7  "<<endl;
   cout<<"                        6     |    5,7    "<<endl;
   cout<<"                        7     |    5,6    "<<endl;
   cout<<"                        8     |     -     "<<endl<<endl<<endl<<endl;

   cout<<"Program pentru parcurgerea in latime (breadth first) a unui graf neorientat:"<<endl<<endl<<endl;
cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"unsigned a[11][11], n, m, coada[11], s[11];"<<endl;
cout<<"void citire (unsigned &n, unsigned a[11][11])"<<endl;
cout<<"     {"<<endl;
cout<<"         unsigned i, j, m, x, y;"<<endl;
cout<<"         cout<<"<<'"'<<"n="<<'"'<<"; cin>>n;"<<endl;
cout<<"         for (i=1; i<=n; i++)"<<endl;
cout<<"             for (j=1; j<=n; j++)"<<endl;
cout<<"                 a[i][j]=0;"<<endl;
cout<<"         cout<<"<<'"'<<"m="<<'"'<<"; cin>>m;"<<endl;
cout<<"         for (i=1; i<=m; i++)"<<endl;
cout<<"             {cin>>x>>y; a[x][y]=1; a[y][x]=1;}"<<endl;
cout<<"     }"<<endl<<endl;

cout<<"void latime (unsigned nod)"<<endl;
cout<<"     {"<<endl;
cout<<"         unsigned i, ic=0, sc=0;"<<endl;
cout<<"         coada[ic]=nod;"<<endl;
cout<<"         cout<<coada[ic]<<"<<"'"<<" "<<"'"<<";"<<endl;
cout<<"         s[nod]=1;"<<endl;
cout<<"         while (ic<=sc)"<<endl;
cout<<"             {"<<endl;
cout<<"                 for (i=1; i<=n; i++)"<<endl;
cout<<"                     if (a[coada[ic]][i]==1 && s[i]==0)"<<endl;
cout<<"                       {"<<endl;
cout<<"                         sc++;"<<endl;
cout<<"                         coada[sc]=i;"<<endl;
cout<<"                         cout<<coada[sc]<<"<<"'"<<" "<<"'"<<";"<<endl;
cout<<"                         s[i]=1;"<<endl;
cout<<"                       }"<<endl;
cout<<"                 ic++;        "<<endl;
cout<<"             }"<<endl;
cout<<"     }"<<endl<<endl;

cout<<"int main()"<<endl;
cout<<"{"<<endl;
cout<<"  unsigned nod;"<<endl;
cout<<"  cout<<"<<'"'<<"Nodul de inceput este:"<<'"'<<"; cin>>nod;"<<endl;
cout<<"  citire (n,a); latime(nod);"<<endl;
cout<<"  return 0;"<<endl;
cout<<"}"<<endl<<endl<<endl<<endl<<endl;

unsigned a[11][11], n, nod, m, i, j, k, c, coada[11]={0}, s[11]={0}, x, y;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);
if (k==1)
{
     cout<<"Introdu acum datele de intrare (nr de varfuri sa fie cel mult egal cu 10)."<<endl<<endl;
   do
    {cout<<" Numarul de varfuri este: n="; cin>>n;
    if (n<=0 || n>10)
        cout<<"Numarul de varfuri trebuie sa fie nenul si cel mult egal cu 10!"<<endl;}
    while (n<=0 || n>10);

    for (i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            a[i][j]=0;

    do
    {
        cout<<"Nodul de inceput este:"; cin>>nod;
        if (nod<=0 || nod>n)
            cout<<"Numarul de varfuri trebuie sa fie cel mult egal cu 10!"<<endl;}
    while (nod<=0 || nod>n);

    do
    {
     cout<<" Numarul de muchii este: m="; cin>>m;
     if (m<0||m>(n*(n-1))/2)
        cout<<"Numarul de muchii trebuie sa fie cel mult egal cu "<<(n*(n-1))/2<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1))/2);

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
        a[x][y]++; a[y][x]++;
        while (a[x][y]>1 && a[y][x]>1)
        {
            if (a[x][y]>1 && a[y][x]>1)
                {cout<<"Aceasta muchie a fost introdusa anterior. Introdu din nou extremitatile muchiei."<<endl; a[x][y]--; a[y][x]--;}
            do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; a[y][x]++; cout<<endl;
        }
    }

    cout<<" Se va afisa:"<<endl; latime (nod,n,a,coada,s);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu4();
}
else
    if (k==2)
        meniu4();
}

void adancime (unsigned nod, unsigned a[11][11], unsigned s[11], unsigned n)
{
    unsigned i;
    cout<<nod<<" "; s[nod]=1;
    for (i=1; i<=n; i++)
        if (a[nod][i]==1 && s[i]==0)
            adancime (i,a,s,n);
}

 void meniu42()
 {
     system("color 0E");
   system("cls");
cout<<"                                                                             PARCURGEREA IN ADANCIME"<<endl<<endl<<endl<<endl<<endl;

   cout<<"      Parcurgerea in adancime a unui graf se realizeaza cu ajutorul listei adiacentelor, precizandu-se pentru fiecare varf, primul vecin nevizitat."<<endl;
   cout<<"      Se foloseste principiul stivei."<<endl;
   cout<<"      Exemplu: pentru lista de adiacenta urmatoare, parcurgerea in latime din varful 6 va fi:"<<endl;
   cout<<"                      varf    |   vecini  "<<endl;
   cout<<"                    __________|___________                            6,5,2,1,4,3,7"<<endl;
   cout<<"                        1     |    2,4    "<<endl;
   cout<<"                        2     |  1,3,4,5  "<<endl;
   cout<<"                        3     |    2,4    "<<endl;
   cout<<"                        4     |  1,2,3,5  "<<endl;
   cout<<"                        5     |  2,4,6,7  "<<endl;
   cout<<"                        6     |    5,7    "<<endl;
   cout<<"                        7     |    5,6    "<<endl;
   cout<<"                        8     |     -     "<<endl<<endl<<endl<<endl;

   cout<<"Program pentru parcurgerea in adancime a unui graf neorientat (depth first):"<<endl;
cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"unsigned a[11][11], n, m, s[20];"<<endl;
cout<<"void citire(unsigned &n, unsigned a[11][11])"<<endl;
cout<<"{"<<endl;
cout<<"    unsigned i, j, m, x, y;"<<endl;
cout<<"    cout<<"<<'"'<<"n="<<'"'<<"; cin>>n;"<<endl;
cout<<"    for (i=1; i<=n; i++)"<<endl;
cout<<"        for (j=1; j<=n; j++)"<<endl;
cout<<"            a[i][j]=0;"<<endl;
cout<<"    cout<<"<<'"'<<"m="<<'"'<<"; cin>>m;"<<endl;
cout<<"    for (i=1; i<=m; i++)"<<endl;
cout<<"         {"<<endl;
cout<<"           cin>>x>>y; a[x][y]=1; a[y][x]=1;"<<endl;
cout<<"         }"<<endl;
cout<<"}"<<endl<<endl;

cout<<"void adancime (unsigned nod)"<<endl;
cout<<"{"<<endl;
cout<<"    unsigned i; "<<endl;
cout<<"    cout<<nod<<" "; s[nod]=1;"<<endl;
cout<<"    for (i=1; i<=n; i++)"<<endl;
cout<<"        if (a[nod][i]==1 && s[i]==0)"<<endl;
cout<<"            adancime (i);"<<endl;
cout<<"}"<<endl<<endl;

cout<<"int main()"<<endl;
cout<<"{unsigned nod;"<<endl;
cout<<"cout<<"<<'"'<<"Nodul de inceput este: "<<'"'<<"; cin>>nod;"<<endl;
cout<<"citire(n,a);"<<endl;
cout<<"adancime (nod);"<<endl;
cout<<"return 0;"<<endl;
cout<<"}"<<endl<<endl<<endl<<endl;

unsigned a[11][11], n, nod, m, i, j, k, c, s[11]={0}, x, y;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);
if (k==1)
{
     cout<<"Introdu acum datele de intrare (nr de varfuri sa fie cel mult egal cu 10)."<<endl<<endl;
   do
    {cout<<" Numarul de varfuri este: n="; cin>>n;
    if (n<=0 || n>10)
        cout<<"Numarul de varfuri trebuie sa fie nenul si cel mult egal cu 10!"<<endl;}
    while (n<=0 || n>10);

    for (i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            a[i][j]=0;

    do
    {
        cout<<"Nodul de inceput este:"; cin>>nod;
        if (nod<=0 || nod>n)
            cout<<"Numarul de varfuri trebuie sa fie cel mult egal cu 10!"<<endl;}
    while (nod<=0 || nod>n);

    do
    {
     cout<<" Numarul de muchii este: m="; cin>>m;
     if (m<0||m>(n*(n-1))/2)
        cout<<"Numarul de muchii trebuie sa fie cel mult egal cu "<<(n*(n-1))/2<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1))/2);

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
         a[x][y]++; a[y][x]++;
        while (a[x][y]>1 && a[y][x]>1)
        {
            if (a[x][y]>1 && a[y][x]>1)
                {cout<<"Aceasta muchie a fost introdusa anterior. Introdu din nou extremitatile muchiei."<<endl; a[x][y]--; a[y][x]--;}
            do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; a[y][x]++; cout<<endl;
        }
    }

    cout<<" Se va afisa:"<<endl; adancime (nod,a,s,n);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu4();
}
else
    if (k==2)
        meniu4();
 }


void meniu5()
{system("color 07");
   system("cls");
   int i;
cout<<"                                                                                 CONEXITATE"<<endl<<endl<<endl<<endl<<endl;

cout<<"                                                                             5.1. Definitii (graf conex, componenta conexa)"<<endl<<endl;
cout<<"                                                                             5.2. Verificare graf conex"<<endl<<endl;
cout<<"                                                                             5.3. Revenire"<<endl<<endl<<endl<<endl<<endl;

    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 5.1, introdu 51):"; cin>>i;
    }
    while (i<51 || i>53);

    if (i==51) meniu51();
    if (i==52) meniu52();
    if (i==53) meniu_principal();


}

void adancime (unsigned nod, unsigned s[11], unsigned n, unsigned a[11][11])
{
    unsigned i;
    s[nod]=1;
    for (i=1; i<=n; i++)
        if (a[nod][i]==1 && s[i]==0)
            adancime (i,s,n,a);
}
unsigned verificare_conex (unsigned nod, unsigned a[11][11], unsigned s[11], unsigned n)
{
    unsigned i;
    for (i=1; i<=n; i++)
        if (s[i]==0)
            return 0;
    return 1;
}

void meniu51()
{
   system("color 07");
   system("cls");
   int i;
   cout<<"                                                                          DEFINITII GRAF CONEX. COMPONENTA CONEXA"<<endl<<endl<<endl<<endl<<endl;

   cout<<"  GRAF CONEX"<<endl;
   cout<<"      Un graf neorientat este conex daca oricare doua varfuri ale sale pot fi extremitatile unui lant."<<endl;
   cout<<"      Conditia ca un graf sa nu contina varfuri izolate nu este suficienta pentru conexitate."<<endl<<endl<<endl;

   cout<<"  COMPONENTE CONEXE"<<endl;
   cout<<"      Se numeste componenta conexa a unui graf G=(X,U), un subgraf G1=(Y,V) al lui G, conex, cu proprietatea ca nu exista niciun lant care sa aiba o extremitate in Y"<<endl;
   cout<<" si cealalta in X\Y."<<endl<<endl;

   cout<<" Obs: 1. Un graf conex are o singura componenta conexa."<<endl;
   cout<<"      2. Un nod izolat constituie o componenta conexa (cea mai simpla)."<<endl;
   cout<<"      3. Intr-un graf neorientat cu n noduri si p componente conexe, numarul minim de muchii de adaugat astfel incat sa devina conex este p-1."<<endl<<endl<<endl<<endl<<endl;

   do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu5();
}

void meniu52()
{
    system("color 07");
   system("cls");
   cout<<"Program pentru verificarea unui graf conex:"<<endl;
   cout<<"*se foloseste principiul parcurgerii in adancime"<<endl<<endl;
cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"unsigned a[11][11], n, m, s[11];"<<endl;
cout<<"void citire (unsigned &n, unsigned a[11][11])"<<endl;
cout<<"     {"<<endl;
cout<<"         unsigned i, j, m , x, y;"<<endl;
cout<<"         cout<<"<<'"'<<"n="<<'"'<<"; cin>>n;"<<endl;
cout<<"         for (i=1; i<=n; i++)"<<endl;
cout<<"             for (j=1; j<=n; j++)"<<endl;
cout<<"                 a[i][j]=0;"<<endl;
cout<<"         cout<<"<<'"'<<"m="<<'"'<<"; cin>>m;"<<endl;
cout<<"         for (i=1; i<=m; i++)"<<endl;
cout<<"             {"<<endl;
cout<<"                 cin>>x>>y;"<<endl;
cout<<"                 a[x][y]=1; a[y][x]=1;"<<endl;
cout<<"             }"<<endl;
cout<<"     }"<<endl<<endl;
cout<<"void adancime (unsigned nod)"<<endl;
cout<<"     {"<<endl;
cout<<"         unsigned i;"<<endl;
cout<<"         s[nod]=1;"<<endl;
cout<<"         for (i=1; i<=n; i++)"<<endl;
cout<<"             if (a[nod][i]==1 && s[i]==0)"<<endl;
cout<<"                 adancime (i);"<<endl;
cout<<"     }"<<endl<<endl;
cout<<"unsigned verificare_conex (unsigned n, unsigned s[11])"<<endl;
cout<<"     {"<<endl;
cout<<"         unsigned i;"<<endl;
cout<<"         for (i=1; i<=n; i++)"<<endl;
cout<<"             if (s[i]==0)"<<endl;
cout<<"                 return 0;"<<endl;
cout<<"         return 1;        "<<endl;
cout<<"     }"<<endl<<endl;
cout<<"int main()"<<endl;
cout<<"     {"<<endl;
cout<<"         unsigned nod=1;"<<endl;
cout<<"         citire (n,a);"<<endl;
cout<<"         adancime (nod);"<<endl;
cout<<"         if (verificare_conex(n,s)==0)"<<endl;
cout<<"             cout<<"<<'"'<<"Graful nu este conex"<<'"'<<";"<<endl;
cout<<"          else"<<endl;
cout<<"             cout<<"<<'"'<<"Graful este conex"<<'"'<<";"<<endl;
cout<<"          return 0;"<<endl;
cout<<"     } "<<endl;

unsigned a[11][11], n, nod=1, m, i, j, k, c, s[11]={0}, x, y;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);
if (k==1)
{
     cout<<"Introdu acum datele de intrare (nr de varfuri sa fie cel mult egal cu 10)."<<endl<<endl;
   do
    {cout<<" Numarul de varfuri este: n="; cin>>n;
    if (n<=0 || n>10)
        cout<<"Numarul de varfuri trebuie sa fie nenul si cel mult egal cu 10!"<<endl;}
    while (n<=0 || n>10);

    for (i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            a[i][j]=0;
    do
    {
     cout<<" Numarul de muchii este: m="; cin>>m;
     if (m<0||m>(n*(n-1))/2)
        cout<<"Numarul de muchii trebuie sa fie cel mult egal cu "<<(n*(n-1))/2<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1))/2);

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
         a[x][y]++; a[y][x]++;
        while (a[x][y]>1 && a[y][x]>1)
        {
            if (a[x][y]>1 && a[y][x]>1)
                {cout<<"Aceasta muchie a fost introdusa anterior. Introdu din nou extremitatile muchiei."<<endl; a[x][y]--; a[y][x]--;}
            do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; a[y][x]++; cout<<endl;
        }
    }

    adancime (nod,s,n,a);
    cout<<" Se va afisa:"<<endl;
    if (verificare_conex (nod,a,s,n)==0)
        cout<<"Graful nu este conex"<<endl;
     else
        cout<<"Graful este conex"<<endl;

   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu5();
}
else
    if (k==2)
        meniu5();
}

void meniu6()
{system("color 02");
   system("cls");
   int i;

cout<<"                                                                                 GRAF HAMILTONIAN"<<endl<<endl<<endl<<endl<<endl;

cout<<"                                                                              6.1. Teorie"<<endl<<endl;
cout<<"                                                                              6.2. Verificare graf hamiltonian"<<endl<<endl;
cout<<"                                                                              6.3. Revenire"<<endl<<endl<<endl<<endl<<endl;


    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 6.1, introdu 61):"; cin>>i;
    }
    while (i<61 || i>63);

    if (i==61) meniu61();
    if (i==62) meniu62();
    if (i==63) meniu_principal();
}

void meniu61()
{
    system("color 0A");
   system("cls");
   int i;
   cout<<"                                                                          TEORIE GRAFUL HAMILTONIAN"<<endl<<endl<<endl<<endl<<endl;

   cout<<"      Intr-un graf neorientat G, se numeste ciclu hamiltonian ciclul elementar care contine toate varfurile grafului."<<endl;
   cout<<"      Un graf norientat G care are cel putin un ciclu hamiltonian se numeste graf hamiltonian."<<endl<<endl;

   cout<<"      Obs: 1. Ciclul hamiltonian nu este unic si, fiind elementar, trece o singura data prin toate varfurile."<<endl;
   cout<<"           2. Ciclul hamiltonian contine numar par de noduri de grad impar."<<endl;
   cout<<"           3. Un graf hamiltonian este conex."<<endl;
   cout<<"           4. Un graf neorientat complet cu n varfuri (n nr. impar) este si hamiltonian si eulerian (vezi meniul 7 - GRAFUL EULERIAN)."<<endl;
   cout<<"           5. Un graf neorientat complet cu n varfuri (n nr. par) este hamiltonian si nu este eulerian."<<endl<<endl;

   cout<<"  Teorema:"<<endl;
   cout<<"      Daca intr-un graf neorientat G=(X,U), cu n>=3 varfuri si fiecare varf verifica conditia d(x)>=n/2 (gradul fiecarui varf sa fie mai mare sau egal cu jumatate din"<<endl;
   cout<<" nr. varfurilor), atunci el este hamiltonian."<<endl<<endl<<endl<<endl<<endl;

   do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu6();
}

void adancime_ham (unsigned nod, unsigned s[11], unsigned n, unsigned a[11][11])
{
    unsigned i;
    s[nod]=1;
    for (i=1; i<=n; i++)
        if (a[nod][i]==1 && s[i]==0)
            adancime_ham (i,s,n,a);
}
unsigned verificare_conex_ham (unsigned n, unsigned s[11])
{
    unsigned i;
    for (i=1; i<=n; i++)
        if (s[i]==0)
            return 0;
    return 1;
}

void grafhamiltonian (unsigned a[11][11], unsigned n, unsigned m)
{
unsigned i, j, x, y, d[11], k=0, ok=1, s[11];
    for (i=1; i<=n; i++)
        d[i]=0;
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            d[i]+=a[i][j];
    adancime_ham(1,s,n,a);
    for (i=1; i<=n && ok==1; i++)
        {
            if (d[i]%2==1)
                k++;
            if (d[i]==0)
                ok=0;
        }
    if (k%2==0 && verificare_conex_ham(n,s)==1 && n>2)
        cout<<"Graful este hamiltonian";
     else
        cout<<"Graful nu este hamiltonian";
}

void meniu62()
{
    system("color 0A");
   system("cls");

   cout<<"Program pentru verificarea unui graf hamiltonian:"<<endl<<endl<<endl;
cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"void adancime (unsigned nod, unsigned s[11], unsigned n, unsigned a[11][11])"<<endl;
cout<<"{"<<endl;
cout<<"   unsigned i;"<<endl;
cout<<"   s[nod]=1;"<<endl;
cout<<"   for (i=1; i<=n; i++)"<<endl;
cout<<"       if (a[nod][i]==1 && s[i]==0)"<<endl;
cout<<"          adancime (i,s,n,a);"<<endl;
cout<<"}"<<endl;
cout<<"unsigned verificare_conex (unsigned n, unsigned s[11])"<<endl;
cout<<"{"<<endl;
cout<<"    unsigned i;"<<endl;
cout<<"    for (i=1; i<=n; i++)"<<endl;
cout<<"        if (s[i]==0)"<<endl;
cout<<"           return 0;"<<endl;
cout<<"   return 1;   "<<endl;
cout<<"}"<<endl;
cout<<"int main()"<<endl;
cout<<"{"<<endl;
cout<<"    unsigned n, m, i, j, x, y, a[11][11], d[11], k=0, ok=1, s[11];"<<endl;
cout<<"   cin>>n>>m; "<<endl;
cout<<"    for (i=1; i<=n; i++)"<<endl;
cout<<"        d[i]=0;"<<endl;
cout<<"   for (i=1; i<=n; i++)"<<endl;
cout<<"       for (j=1; j<=n; j++)"<<endl;
cout<<"          a[i][j]=0;"<<endl;
cout<<"   for (i=1; i<=m; i++)"<<endl;
cout<<"       {cin>>x>>y; a[x][y]=1; a[y][x]=1;}"<<endl;
cout<<"   adancime(1,s,n,a);"<<endl;
cout<<"   for (i=1; i<=n; i++)"<<endl;
cout<<"      for (j=1; j<=n; j++)"<<endl;
cout<<"           d[i]+=a[i][j];"<<endl;
cout<<"   for (i=1; i<=n && ok==1; i++)"<<endl;
cout<<"      {"<<endl;
cout<<"           if (d[i]%2==1)"<<endl;
cout<<"             k++;"<<endl;
cout<<"      }"<<endl;
cout<<"   if (k%2==0 && verificare_conex(n,s)==1 && n>2)"<<endl;
cout<<"     cout<<"<<'"'<<"Graful este hamiltonian"<<'"'<<";"<<endl;
cout<<"    else"<<endl;
cout<<"      cout<<"<<'"'<<"Graful nu este hamiltonian"<<'"'<<";"<<endl;
cout<<" return 0;"<<endl;
cout<<"}"<<endl<<endl<<endl<<endl;

   unsigned n, m, i, j, x, y, a[11][11], k, c;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);
if (k==1)
{
     cout<<"Introdu acum datele de intrare (nr de varfuri sa fie cel mult egal cu 10)."<<endl<<endl;
   do
    {cout<<" Numarul de varfuri este: n="; cin>>n;
    if (n<=0 || n>10)
        cout<<"Numarul de varfuri trebuie sa fie nenul si cel mult egal cu 10!"<<endl;}
    while (n<=0 || n>10);

    for (i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            a[i][j]=0;
    do
    {
     cout<<" Numarul de muchii este: m="; cin>>m;
     if (m<0||m>(n*(n-1))/2)
        cout<<"Numarul de muchii trebuie sa fie cel mult egal cu "<<(n*(n-1))/2<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1))/2);

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
         a[x][y]++; a[y][x]++;
        while (a[x][y]>1 && a[y][x]>1)
        {
            if (a[x][y]>1 && a[y][x]>1)
                {cout<<"Aceasta muchie a fost introdusa anterior. Introdu din nou extremitatile muchiei."<<endl; a[x][y]--; a[y][x]--;}
            do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; a[y][x]++; cout<<endl;
        }
    }
   cout<<endl<<endl<<"Se va afisa:"<<endl; grafhamiltonian(a,n,m);
   cout<<endl<<endl;

   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu6();
}
else
    if (k==2)
        meniu6();
}

void meniu7()
{system("color 05");
   system("cls");
   int i;

cout<<"                                                                                GRAF EULERIAN"<<endl<<endl<<endl<<endl<<endl;

cout<<"                                                                            7.1. Teorie"<<endl<<endl;
cout<<"                                                                            7.2. Verificare graf eulerian"<<endl<<endl;
cout<<"                                                                            7.3. Revenire"<<endl<<endl<<endl<<endl<<endl;


    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 7.1, introdu 71):"; cin>>i;
    }
    while (i<71 || i>73);

    if (i==71) meniu71();
    if (i==72) meniu72();
    if (i==73) meniu_principal();
}

void meniu71()
{
    system("color 0D");
   system("cls");
   int i;
   cout<<"                                                                           TEORIE GRAFUL EULERIAN"<<endl<<endl<<endl<<endl<<endl;

   cout<<"      Intr-un graf neorientat G, se numeste ciclu eulerian un ciclu care contine toate muchiile grafului."<<endl;
   cout<<"      Un graf G care contine un ciclu eulerian se numeste graf eulerian."<<endl<<endl;

   cout<<"  Teorema:"<<endl;
   cout<<"      Un graf neorientat G fara varfuri izolate este eulerian daca si numai daca este conex si gradele tuturor varfurilor sunt numere pare."<<endl<<endl;

   cout<<"Obs: 1. Un ciclu eulerian trece o singura data prin toate muchiile, dar poate trece de mai multe ori prin acelasi varf."<<endl;
   cout<<"     2. Un graf neorientat complet cu n varfuri (n nr. impar) este si hamiltonian (vezi meniul 6 - GRAFUL HAMILTONIAN) si eulerian."<<endl;
   cout<<"     3. Un graf neorientat complet cu n varfuri (n nr. par) este hamiltonian si nu este eulerian (toate varfurile ar avea toate gradele impare). Pentru a deveni eulerian,"<<endl;
   cout<<" trebuie eliminate (suprimate) minim n/2 muchii."<<endl<<endl<<endl<<endl<<endl;

       do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu7();
}

void adancime_eul (unsigned nod, unsigned s[11], unsigned n, unsigned a[11][11])
{
    unsigned i;
    s[nod]=1;
    for (i=1; i<=n; i++)
        if (a[nod][i]==1 && s[i]==0)
            adancime_eul (i,s,n,a);
}
unsigned verificare_conex_eul (unsigned n, unsigned s[11])
{
    unsigned i;
    for (i=1; i<=n; i++)
        if (s[i]==0)
            return 0;
    return 1;
}

void grafeulerian (unsigned a[11][11], unsigned n, unsigned m)
{
    unsigned i, j, x, y, d[11], ok=1, s[11];
    for (i=1; i<=n; i++)
        d[i]=0;
    adancime_eul (1,s,n,a);
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            d[i]+=a[i][j];
    for (i=1; i<=n && ok==1; i++)
        if (d[i]%2==1)
            ok=0;
    if (ok==1 && verificare_conex_eul(n,s)==1 && n>2)
        cout<<"Graful este eulerian";
     else
        cout<<"Graful nu este eulerian";

}

void meniu72()
{
    system("color 0D");
   system("cls");
   cout<<"Program pentru verificarea unui graf eulerian"<<endl<<endl<<endl;
cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"void adancime (unsigned nod, unsigned s[11], unsigned n, unsigned a[11][11])"<<endl;
cout<<"{"<<endl;
cout<<"    unsigned i;"<<endl;
cout<<"    s[nod]=1;"<<endl;
cout<<"    for (i=1; i<=n; i++)"<<endl;
cout<<"        if (a[nod][i]==1 && s[i]==0)"<<endl;
cout<<"            adancime (i,s,n,a);"<<endl;
cout<<"}"<<endl;
cout<<"unsigned verificare_conex (unsigned n, unsigned s[11])"<<endl;
cout<<"{"<<endl;
cout<<"    unsigned i;"<<endl;
cout<<"    for (i=1; i<=n; i++)"<<endl;
cout<<"        if (s[i]==0)"<<endl;
cout<<"            return 0;"<<endl;
cout<<"    return 1;   "<<endl;
cout<<"}"<<endl;
cout<<"int main()"<<endl;
cout<<"{"<<endl;
cout<<"    unsigned n, m, i, j, x, y, a[11][11], d[11], ok=1, s[11];"<<endl;
cout<<"   cin>>n>>m;"<<endl;
cout<<"    for (i=1; i<=n; i++)"<<endl;
cout<<"        d[i]=0;"<<endl;
cout<<"    for (i=1; i<=n; i++)"<<endl;
cout<<"        for (j=1; j<=n; j++)"<<endl;
cout<<"            a[i][j]=0;"<<endl;
cout<<"    for (i=1; i<=m; i++)"<<endl;
cout<<"        {cin>>x>>y; a[x][y]=1; a[y][x]=1;}"<<endl;
 cout<<"   adancime (1,s,n,a);    "<<endl;
cout<<"    for (i=1; i<=n; i++)"<<endl;
 cout<<"       for (j=1; j<=n; j++)"<<endl;
 cout<<"           d[i]+=a[i][j];"<<endl;
 cout<<"   for (i=1; i<=n && ok==1; i++)"<<endl;
 cout<<"       if (d[i]%2==1)"<<endl;
 cout<<"           ok=0;"<<endl;
 cout<<"   if (ok==1 && verificare_conex(n,s)==1 && n>2)"<<endl;
 cout<<"       cout<<"<<'"'<<"Graful este eulerian"<<'"'<<";"<<endl;
 cout<<"    else"<<endl;
 cout<<"       cout<<"<<'"'<<"Graful nu este eulerian"<<'"'<<";"<<endl;
 cout<<"   return 0;"<<endl;
cout<<"}"<<endl<<endl<<endl<<endl;

unsigned n, m, i, j, x, y, a[11][11], k, c;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);
if (k==1)
{
     cout<<"Introdu acum datele de intrare (nr de varfuri sa fie cel mult egal cu 10)."<<endl<<endl;
   do
    {cout<<" Numarul de varfuri este: n="; cin>>n;
    if (n<=0 || n>10)
        cout<<"Numarul de varfuri trebuie sa fie nenul si cel mult egal cu 10!"<<endl;}
    while (n<=0 || n>10);

    for (i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            a[i][j]=0;
    do
    {
     cout<<" Numarul de muchii este: m="; cin>>m;
     if (m<0||m>(n*(n-1))/2)
        cout<<"Numarul de muchii trebuie sa fie cel mult egal cu "<<(n*(n-1))/2<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1))/2);

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
         a[x][y]++; a[y][x]++;
        while (a[x][y]>1 && a[y][x]>1)
        {
            if (a[x][y]>1 && a[y][x]>1)
                {cout<<"Aceasta muchie a fost introdusa anterior. Introdu din nou extremitatile muchiei."<<endl; a[x][y]--; a[y][x]--;}
            do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; a[y][x]++; cout<<endl;
        }
    }
   cout<<endl<<endl<<"Se va afisa:"<<endl; grafeulerian(a,n,m);
   cout<<endl<<endl;

   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu7();
}
else
    if (k==2)
        meniu7();
}

void meniu8()
{system("color 03");
   system("cls");
   int i;

cout<<"                                                                             APLICATII"<<endl<<endl<<endl<<endl<<endl;

cout<<"                                                                         8.1. Aplicatie 1"<<endl<<endl;
cout<<"                                                                         8.2. Aplicatie 2"<<endl<<endl;
cout<<"                                                                         8.3. Aplicatie 3"<<endl<<endl;
cout<<"                                                                         8.4. Revenire"<<endl<<endl<<endl<<endl<<endl;


    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 8.1, introdu 81):"; cin>>i;
    }
    while (i<81 || i>84);

    if (i==81) meniu81();
    if (i==82) meniu82();
    if (i==83) meniu83();
    if (i==84) meniu_principal();
}

void aplicatie1 (unsigned n, unsigned a[21][21])
{

    unsigned m, i, j, x, y, maxi=0, d[21], ok=0;

    for (i=1; i<=n; i++)
        d[i]=0;

    for (i=1; i<=n; i++)
        {for (j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
         cout<<endl;
         }
    cout<<endl;
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            d[i]+=a[i][j];
    for (i=1; i<=n; i++)
        cout<<"Gradul nodului "<<i<<" este:"<<d[i]<<endl;
    cout<<endl;
    for (i=1; i<=n; i++)
        if (d[i]>maxi)
            maxi=d[i];
    cout<<endl;
    cout<<"Gradul maxim este "<<maxi<<endl;
    for (i=1; i<=n; i++)
        if (d[i]==0)
            {cout<<" Varful "<<i<<" este izolat"<<endl; ok=1;}
    if (ok==0)
        cout<<"Nu exista varfuri izolate"<<endl;
    ok=0;
    cout<<endl;
    for (i=1; i<=n; i++)
        if (d[i]==1)
            {cout<<" Varful "<<i<<" este terminal"<<endl<<endl<<endl;; ok=1;}
    if (ok==0)
        cout<<"Nu exista varfuri terminale"<<endl<<endl<<endl;

}

void meniu81()
{
    system("color 0B");
   system("cls");
    unsigned i, j, n, k, c, a[21][21], m, x, y;

    cout<<"Aplicatiie 1:"<<endl<<endl;
    cout<<"     Se citesc numarul de varfuri (0<n<21), numarul de muchii si extremitatile muchiilor unui graf neorientat. Afisati matricea de adiacenta a grafului, gradul"<<endl;
    cout<<"fiecarui varf, varfurile care au grad maxim, varfurile izolate si varfurile terminale."<<endl<<endl;

    cout<<"Exemplu:"<<endl;
    cout<<" Pentru graful dat prin datele: n=5; m=6; U={(1,2),(1,3),(1,4),(1,5),(2,3),(3,4)}, se va afisa:"<<endl<<endl;
            cout<<"0 1 1 1 1 "<<endl;
            cout<<"1 0 1 0 0 "<<endl;
            cout<<"1 1 0 1 0 "<<endl;
            cout<<"1 0 1 0 0 "<<endl;
            cout<<"1 0 0 0 0 "<<endl<<endl;
            cout<<"Gradul nodului 1 este:4"<<endl;
            cout<<"Gradul nodului 2 este:2"<<endl;
            cout<<"Gradul nodului 3 este:3"<<endl;
            cout<<"Gradul nodului 4 este:2"<<endl;
            cout<<"Gradul nodului 5 este:1"<<endl<<endl;
            cout<<"Gradul maxim este 4"<<endl<<endl;
            cout<<"Nu exista varfuri izolate"<<endl<<endl;
            cout<<" Varful 5 este terminal"<<endl<<endl<<endl<<endl;

  cout<<"Rezolvare:"<<endl<<endl;

 cout<<"   #include <iostream>"<<endl;
 cout<<"   using namespace std;"<<endl;
 cout<<"   int main()"<<endl;
 cout<<"   {"<<endl;
 cout<<"   unsigned n, m, i, j, x, y, maxi=0, a[21][21], d[21], ok=0;"<<endl;
 cout<<"   cin>>n>>m;"<<endl;
 cout<<"   for (i=1; i<=n; i++)"<<endl;
 cout<<"       d[i]=0;"<<endl;
 cout<<"   for (i=1; i<=n; i++)"<<endl;
 cout<<"       for (j=1; j<=n; j++)"<<endl;
 cout<<"           a[i][j]=0;"<<endl;
 cout<<"   for (i=1; i<=m; i++)"<<endl;
 cout<<"       {cin>>x>>y; a[x][y]=1; a[y][x]=1;}"<<endl;
 cout<<"   for (i=1; i<=n; i++)"<<endl;
 cout<<"       {for (j=1; j<=n; j++)"<<endl;
 cout<<"            cout<<a[i][j]<<" ";"<<endl;
 cout<<"        cout<<endl;}"<<endl;
 cout<<"   for (i=1; i<=n; i++)"<<endl;
 cout<<"       for (j=1; j<=n; j++)"<<endl;
 cout<<"           d[i]+=a[i][j];"<<endl;
 cout<<"   for (i=1; i<=n; i++)"<<endl;
 cout<<"       cout<<"<<'"'<<"Gradul nodului "<<'"'<<"<<i<<"<<'"'<<" este:"<<'"'<<"<<d[i]<<endl;"<<endl;
 cout<<"   cout<<endl;"<<endl;
 cout<<"   for (i=1; i<=n; i++)"<<endl;
 cout<<"       if (d[i]>maxi)"<<endl;
 cout<<"           maxi=d[i];"<<endl;
 cout<<"   cout<<"<<'"'<<"Gradul maxim este "<<'"'<<"<<maxi<<endl;"<<endl;
 cout<<"   for (i=1; i<=n; i++)"<<endl;
 cout<<"      if (d[i]==0)"<<endl;
 cout<<"          {cout<<"<<'"'<<" Varful "<<i<<" este izolat"<<'"'<<"<<endl; ok=1;}"<<endl;
 cout<<"  if (ok==0)"<<endl;
 cout<<"       cout<<"<<'"'<<"Nu exista varfuri izolate"<<'"'<<"<<endl;"<<endl;
 cout<<"  ok=0;    "<<endl;
 cout<<"   cout<<endl;      "<<endl;
 cout<<"   for (i=1; i<=n; i++)"<<endl;
 cout<<"       if (d[i]==1)"<<endl;
 cout<<"           {cout<<"<<'"'<<" Varful "<<'"'<<"<<i<<"<<'"'<<" este terminal"<<'"'<<"<<endl; ok=1;} "<<endl;
 cout<<"   if (ok==0)"<<endl;
 cout<<"       cout<<"<<'"'<<"Nu exista varfuri terminale"<<'"'<<"<<endl;"<<endl;
 cout<<"   return 0;"<<endl;
 cout<<"}"<<endl<<endl<<endl;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);
if (k==1)
{
     cout<<"Introdu acum datele de intrare (nr de varfuri sa fie cel mult egal cu 10)."<<endl<<endl;
   do
    {cout<<" Numarul de varfuri este: n="; cin>>n;
    if (n<=0 || n>10)
        cout<<"Numarul de varfuri trebuie sa fie nenul si cel mult egal cu 10!"<<endl;}
    while (n<=0 || n>10);

    for (i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            a[i][j]=0;
    do
    {
     cout<<" Numarul de muchii este: m="; cin>>m;
     if (m<0||m>(n*(n-1))/2)
        cout<<"Numarul de muchii trebuie sa fie cel mult egal cu "<<(n*(n-1))/2<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1))/2);

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
         a[x][y]++; a[y][x]++;
        while (a[x][y]>1 && a[y][x]>1)
        {
            if (a[x][y]>1 && a[y][x]>1)
                {cout<<"Aceasta muchie a fost introdusa anterior. Introdu din nou extremitatile muchiei."<<endl; a[x][y]--; a[y][x]--;}
            do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; a[y][x]++;
        }
    }

    cout<<endl<<endl<<" Se va afisa:"<<endl;
    aplicatie1 (n,a);

   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu8();
}
else
    if (k==2)
        meniu8();

}

void aplicatie2 (unsigned n, unsigned v[21])
{
unsigned i, j, k, h=1, aux, a[21][21];

for (i=1; i<=n; i++)
    for (j=1; j<=n; j++)
        a[i][j]=0;

for (i=1; i<=n; i++)
do
{
  h=1;
  for (i=1; i<=n-1; i++)
    if (v[i]<v[i+1])
        {
            aux=v[i]; v[i]=v[i+1]; v[i+1]=aux; h=0;
        }
}
while (h==0);
for (i=1; i<=n; i++)
    {
        for (j=i+1; j<=n; j++)
            if (v[j]>0 && v[i]>0)
                {
                    a[i][j]=1; a[j][i]=1; v[i]--; v[j]--;
                }
        if (v[i]>0)
            h=0;
    }

if (h==1)
{ cout<<"Vectorul poate reprezenta vectorul gradelor varfurilor unui graf neorientat."<<endl<<endl;
 for (i=1; i<=n; i++)
        {
            for (j=1; j<=n; j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
}
else
    cout<<"Vectorul NU poate reprezenta vectorul gradelor varfurilor unui graf neorientat."<<endl<<endl;
}
void meniu82()
{system("color 0B");
   system("cls");
    unsigned i, n, v[21], k, c;
cout<<"Aplicatie 2:"<<endl<<endl;
cout<<"     Se citeste un numar natural n (0<n<21) si apoi un sir de n numere naturale. Sa se afiseze daca valorile din sir pot reprezenta gradele varfurilor unui graf"<<endl;
cout<<" neorientat (in caz afirmativ, se va afisa matricea de adiacenta a grafului)."<<endl<<endl;
cout<<"Exemplu:"<<endl;
cout<<" Pentru valorile:  4             se va afisa: Vectorul poate reprezenta vectorul gradelor varfurilor unui graf neorientat."<<endl;
cout<<"                   3 3 3 3 "<<endl;
cout<<"                                              0 1 1 1"<<endl;
cout<<"                                              1 0 1 1"<<endl;
cout<<"                                              1 1 0 1"<<endl;
cout<<"                                              1 1 1 0"<<endl<<endl<<endl;
cout<<"Rezolvare:"<<endl<<endl;

cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"int main()"<<endl;
cout<<"{unsigned n, i, j, k, v[21], h=1, aux, a[21][21];"<<endl;
cout<<"cin>>n;"<<endl;
cout<<"for (i=1; i<=n; i++)"<<endl;
cout<<"    for (j=1; j<=n; j++)"<<endl;
cout<<"        a[i][j]=0;"<<endl;
cout<<"for (i=1; i<=n; i++)"<<endl;
cout<<"    cin>>v[i];"<<endl;
cout<<"do"<<endl;
cout<<"{"<<endl;
cout<<"    h=1;"<<endl;
cout<<"    for (i=1; i<=n-1; i++)"<<endl;
cout<<"    if (v[i]<v[i+1])"<<endl;
cout<<"       {"<<endl;
cout<<"          aux=v[i]; v[i]=v[i+1]; v[i+1]=aux; h=0;"<<endl;
cout<<"       }"<<endl;
cout<<"}"<<endl;
cout<<"while (h==0);"<<endl;
cout<<"for (i=1; i<=n; i++)"<<endl;
cout<<"    {"<<endl;
cout<<"        for (j=i+1; j<=n; j++)"<<endl;
cout<<"            if (v[j]>0 && v[i]>0)"<<endl;
cout<<"                {"<<endl;
cout<<"                   a[i][j]=1; a[j][i]=1; v[i]--; v[j]--;"<<endl;
cout<<"                }"<<endl;
cout<<"        if (v[i]>0)"<<endl;
cout<<"           h=0;"<<endl;
cout<<"   }"<<endl<<endl;

cout<<"if (h==1)"<<endl;
cout<<"  {  "<<endl;
cout<<"     cout<<"<<'"'<<"Vectorul poate reprezenta vectorul gradelor varfurilor unui graf neorientat."<<'"'<<"<<endl<<endl;"<<endl;
cout<<"     for (i=1; i<=n; i++)"<<endl;
cout<<"        {"<<endl;
cout<<"           for (j=1; j<=n; j++)"<<endl;
cout<<"               cout<<a[i][j]<<" ";"<<endl;
cout<<"           cout<<endl;"<<endl;
cout<<"        }"<<endl;
cout<<"  }"<<endl;
cout<<" else"<<endl;
cout<<"    cout<<"<<'"'<<"Vectorul NU poate reprezenta vectorul gradelor varfurilor unui graf neorientat."<<'"'<<"<<endl<<endl;"<<endl;
cout<<"return 0;"<<endl;
cout<<"}"<<endl<<endl<<endl;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);
if (k==1)
{
     cout<<"Introdu acum datele de intrare (0<n<21)."<<endl<<endl;
   do
    {cout<<"n="; cin>>n;
    if (n<=0 || n>20)
        cout<<"n trebuie sa fie nenul si cel mult egal cu 20!"<<endl;}
    while (n<=0 || n>20);

    for (i=1; i<=n; i++)
    {
        do{
            cout<<"v["<<i<<"]= "; cin>>v[i];
            if (v[i]<0)
                cout<<"Gradul unui nod trebuie sa fie pozitiv!"<<endl;
          }
        while (v[i]<0);
    }

    cout<<endl<<endl<<" Se va afisa:"<<endl; aplicatie2 (n,v);

   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu8();
}
else
    if (k==2)
        meniu8();
}

unsigned lant (unsigned p, unsigned a[21][21], unsigned v[21])
{ unsigned i;
for (i=1; i<p; i++)
    if (a[v[i]][v[i+1]]==0)
        return 0;
    return 1;
}

unsigned natura (unsigned p, unsigned v[21])
{
    unsigned i, j;
    for (i=1; i<p; i++)
        for (j=i+1; j<=p; j++)
            if (v[i]==v[j])
                return 0;
    return 1;
}

void aplicatie3(unsigned a[21][21], unsigned p, unsigned v[21])
{
if (lant (p,a,v)==1)
    if (natura (p,v)==1)
        cout<<"Lantul este elementar";
     else
        cout<<"Lantul este ne-elementar";
 else
    cout<<"Sirul dat nu poate fi lant";
}

void meniu83()
{system("color 0B");
   system("cls");
    cout<<"Aplicatie 3:"<<endl<<endl;
    cout<<"     Se citesc trei numere naturale n, m, p (0<n<21, p<=n) reprezentand numarul de varfuri si numarul de muchii al unui graf neorientat, respectiv numarul de elemente"<<endl;
    cout<<" ale unui tablou unidimensionial. Apoi se citesc extremitatile muchiilor grafului si cele p elemente (numere naturale) ale tabloului. Sa se verifice daca elementele"<<endl;
    cout<<" tabloului pot reprezenta un lant in cadrul grafului. In caz afirmativ, sa se precizeze si natura lantului."<<endl<<endl<<endl;

    cout<<"Exemplu"<<endl;
    cout<<"Pentru valorile  n=5, m=6, p=4                        se va afisa:    Lantul este elementar"<<endl;
    cout<<"                 muchiile: (1,2), (1,4), (2,3)"<<endl;
    cout<<"                           (3,4), (3,5), (5,1)"<<endl;
    cout<<"                 si tabloul: (5, 3, 2, 1)"<<endl<<endl<<endl<<endl;
  cout<<"Rezolvare:"<<endl<<endl;

cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"unsigned lant (unsigned p, unsigned a[21][21], unsigned v[21])"<<endl;
cout<<"{ unsigned i;"<<endl;
cout<<"for (i=1; i<p; i++)"<<endl;
cout<<"    if (a[v[i]][v[i+1]]==0)"<<endl;
cout<<"       return 0;"<<endl;
cout<<"   return 1;"<<endl;
cout<<"}"<<endl<<endl;

cout<<"unsigned natura (unsigned p, unsigned v[21])"<<endl;
cout<<"{"<<endl;
cout<<"   unsigned i, j;"<<endl;
cout<<"    for (i=1; i<p; i++)"<<endl;
cout<<"        for (j=i+1; j<=p; j++)"<<endl;
cout<<"            if (v[i]==v[j])"<<endl;
cout<<"                return 0;"<<endl;
cout<<"    return 1;"<<endl;
cout<<"}"<<endl<<endl;

cout<<"int main()"<<endl;
cout<<"{unsigned a[21][21], n, m, v[21], i, p, j, x, y;"<<endl;
cout<<"cin>>n>>m>>p;                           // nr de varfuri, de muchii, de elemente din sir"<<endl;
cout<<"for (i=1; i<=n; i++)"<<endl;
cout<<"    for (j=1; j<=n; j++)"<<endl;
cout<<"        a[i][j]=0;"<<endl;
cout<<"for (i=1; i<=m; i++)"<<endl;
cout<<"    {cin>>x>>y; a[x][y]=1; a[y][x]=1;}  // citirea extremitatilor muchiilor si incarcarea matricei de adiacenta"<<endl;
cout<<"for (i=1; i<=p; i++)"<<endl;
cout<<"    cin>>v[i];                          // citirea elementelor de verificat lant"<<endl;
cout<<"if (lant (p,a,v)==1)"<<endl;
cout<<"    if (natura (p,v)==1)"<<endl;
cout<<"        cout<<"<<'"'<<"Lantul este elementar"<<'"'<<";"<<endl;
cout<<"     else"<<endl;
cout<<"        cout<<"<<'"'<<"Lantul este ne-elementar"<<'"'<<";"<<endl;
cout<<" else"<<endl;
cout<<"   cout<<"<<'"'<<"Sirul dat nu poate fi lant"<<'"'<<";"<<endl;
cout<<"   return 0;"<<endl;
cout<<"}"<<endl<<endl<<endl<<endl;

unsigned n, m, p, i, j, x, y, a[21][21], v[21], k, c;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);
if (k==1)
{
     cout<<"Introdu acum datele de intrare (nr de varfuri sa fie cel mult egal cu 10)."<<endl<<endl;
   do
    {cout<<" Numarul de varfuri este: n="; cin>>n;
    if (n<=0 || n>10)
        cout<<"Numarul de varfuri trebuie sa fie nenul si cel mult egal cu 10!"<<endl;}
    while (n<=0 || n>10);

    for (i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            a[i][j]=0;
    do
    {
     cout<<" Numarul de muchii este: m="; cin>>m;
     if (m<0||m>(n*(n-1))/2)
        cout<<"Numarul de muchii trebuie sa fie cel mult egal cu "<<(n*(n-1))/2<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1))/2);

    do
    {cout<<" Numarul de elemente al tabloului este: p="; cin>>p;
    if (p<=0 || p>n)
        cout<<"Numarul de elemente trebuie sa fie nenul si cel mult egal cu numarul de varfuri ale grafului!"<<endl;}
    while (p<=0 || p>n);

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
         a[x][y]++; a[y][x]++;
        while (a[x][y]>1 && a[y][x]>1)
        {
            if (a[x][y]>1 && a[y][x]>1)
                {cout<<"Aceasta muchie a fost introdusa anterior. Introdu din nou extremitatile muchiei."<<endl; a[x][y]--; a[y][x]--;}
            do{
            cout<<"Prima extremitate a muchiei "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a muchiei "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; a[y][x]++; cout<<endl;
        }
    }
    for (i=1; i<=p; i++)
    {
        do{
            cout<<"v["<<i<<"]= "; cin>>v[i];
            if (v[i]<0 || v[i]>n)
                cout<<"Elementul trebuie sa se regaseasca printre varfurile grafului!"<<endl;
          }
        while (v[i]<0 || v[i]>n);
    }
   cout<<endl<<endl<<"Se va afisa:"<<endl; aplicatie3 (a,p,v);
   cout<<endl<<endl;

   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu8();
}
else
    if (k==2)
        meniu8();
}

void meniu9()
{system("color 08");
   system("cls");
   char i; unsigned total=0;

cout<<"                                                                            TEST"<<endl;
cout<<"                                                                     GRAFURI NEORIENTATE"<<endl<<endl<<endl<<endl<<endl;

cout<<" Testul contine 10 intrebari. Se acorda 10p din oficiu. Punctajul fiecarei intrebari este specificat la inceputul acesteia."<<endl;
cout<<" Toate subiectele sunt obligatorii."<<endl;
cout<<" SUCCES!"<<endl<<endl;

do{
cout<<"Apasa s/S pentru a incepe testul."<<endl; cin>>i;
}
while (i!='s' && i!='S');

if (i=='s' || i=='S')
    test1(total);

}

void test1(unsigned &total)
{
   system("color 08");
   system("cls");
   char raspuns, c;
   cout<<"PARTEA I"<<endl<<endl<<endl;

   cout<<"Pentru intrebarile 1-4, tasteaza litera corespunzatoare raspunsului corect."<<endl<<endl;

   cout<<"(5p) 1. Se considera un graf neorientat cu 2022 de varfuri si 1000 de muchii. Cate valori de 1 se gasesc in matricea de adiacenta a acestui graf?"<<endl;
   cout<<"          a) 2022"<<endl;
   cout<<"          b) 4044"<<endl;
   cout<<"          c) 2000"<<endl;
   cout<<"          d) 1000"<<endl<<endl<<endl;

   do
    {
        cout<<"Introdu una din literele a, b, c, d. Varianta corecta este: "; cin>>raspuns;
    }
   while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='c' || raspuns=='C')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;


   cout<<"(5p) 2. Se considera un graf neorientat G=(X,U), unde X={1,2,3,4,5,6,7,8,9,10} si U={[1,2],[1,3],[2,3],[2,10],[4,5],[4,6],[5,6],[6,7],[7,8],[7,9],[8,9]}. Care este numarul"<<endl;
   cout<<" minim de muchii ce trebuie eliminat astfel incat graful sa devina eulerian?"<<endl;
   cout<<"          a) 1"<<endl;
   cout<<"          b) 3"<<endl;
   cout<<"          c) 2"<<endl;
   cout<<"          d) 0"<<endl<<endl<<endl;

   do
    {
        cout<<"Introdu una din literele a, b, c, d. Varianta corecta este: "; cin>>raspuns;
    }
   while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='c' || raspuns=='c')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;


   cout<<"(5p) 3. Matricea de adiacenta a unui graf neorientat G are numarul valorilor de 0 egal cu dublul numarului de valori egale cu 1. Care dintre urmatoarele variante reprezinta"<<endl;
   cout<<" numarul de varfuri ale grafului G?"<<endl;
   cout<<"          a) 6"<<endl;
   cout<<"          b) 10"<<endl;
   cout<<"          c) 2"<<endl;
   cout<<"          d) 9"<<endl<<endl<<endl;

   do
    {
        cout<<"Introdu una din literele a, b, c, d. Varianta corecta este: "; cin>>raspuns;
    }
   while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='a' || raspuns=='A')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;


   cout<<"(5p) 4. Fie graful neorientat cu 6 varfuri in care exista muchia (i,j) daca si numai daca i si j sunt ambele pare sau ambele impare. Suma tuturor gradelor este:"<<endl;
   cout<<"          a) 10"<<endl;
   cout<<"          b) 12"<<endl;
   cout<<"          c) 6"<<endl;
   cout<<"          d) 24"<<endl<<endl<<endl;

   do
    {
        cout<<"Introdu una din literele a, b, c, d. Varianta corecta este: "; cin>>raspuns;
    }
   while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='b' || raspuns=='B')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;

 do{
   cout<<"FELICITARI! Ai terminat prima parte a testului! Apasa tasta c pentru a continua. "; cin>>c;
   }
while (c!='C' && c!='c');
    if (c=='c' || c=='C')
        test2(total);

}

void test2(unsigned &total)
{
   system("color 08");
   system("cls");
   char raspuns, c;

   cout<<"PARTEA A II-A"<<endl<<endl<<endl;

   cout<<"Pentru intrebarile 5-8, tasteaza A daca raspunsul este adevarat sau F daca este fals."<<endl<<endl;

   cout<<"                                                           45"<<endl;
   cout<<"(5p) 5. Numarul grafurilor neorientate cu 10 varfuri este 2  ."<<endl<<endl;

   do
    {
        cout<<"Introdu A daca propozitia este adevarata sau F daca este falsa:"; cin>>raspuns;
    }
   while (strchr("AaFf",raspuns)==0);

if (raspuns=='a' || raspuns=='A')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;

   cout<<"(5p) 6. Pentru un graf neorientat complet cu 15 muchii, numarul de varfuri este 5."<<endl<<endl;

   do
    {
        cout<<"Introdu A daca propozitia este adevarata sau F daca este falsa:"; cin>>raspuns;
    }
   while (strchr("AaFf",raspuns)==0);

if (raspuns=='f' || raspuns=='F')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;

   cout<<"(5p) 7. Se considera graful neorientat G=(X,U), unde X={1,2,3,4} si U={[1,2],[1,4],[2,3],[3,4]}. Despre graful G se poate spune ca este hamiltonian, dar nu eulerian."<<endl<<endl;

   do
    {
        cout<<"Introdu A daca propozitia este adevarata sau F daca este falsa:"; cin>>raspuns;
    }
   while (strchr("AaFf",raspuns)==0);

if (raspuns=='f' || raspuns=='F')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;

   cout<<"(5p) 8. Pentru un graf neorientat complet cu varfurile numerotate de la 1 la 2024, gradul varfului 2023 este 2023."<<endl<<endl;


   do
    {
        cout<<"Introdu A daca propozitia este adevarata sau F daca este falsa:"; cin>>raspuns;
    }
   while (strchr("AaFf",raspuns)==0);

if (raspuns=='a' || raspuns=='A')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;

do{
   cout<<"FELICITARI! Ai terminat a doua parte a testului! Apasa tasta c pentru a continua. "; cin>>c; cin.get();
      }
while (c!='C' && c!='c');
    if (c=='c' || c=='C')
        test3(total);
}

void test3(unsigned &total)
{
   system("color 08");
   system("cls");
   char c,s[11],i, aux;

    cout<<"PARTEA A III-A"<<endl<<endl<<endl;

   cout<<"Pentru intrebarea 9, tasteaza literele corespunzatoare raspunsurilor corecte."<<endl;
   cout<<"Pentru intrebare 10, introdu un scurt raspuns."<<endl<<endl;

   cout<<"(20p) 9. Ce muchii lipsesc din graful neorientat G=(X,U), X={1,2,3,4,5}, U={[1,2],[1,3],[1,5],[2,4],[3,4],[3,5],[4,5]}, astfel incat el sa fie complet? "<<endl;
   cout<<"          a) [1,4]"<<endl;
   cout<<"          b) [2,1]"<<endl;
   cout<<"          c) [2,3]"<<endl;
   cout<<"          d) [5,2]"<<endl<<endl<<endl;

   cout<<" Variantele corecte sunt:"; cin.get (s, 11); cin.get();
    for (i=0; i<strlen(s); i++)
        if (strchr(" ,.;/:*[]{}()", s[i])!=NULL)
            {strcpy (s+i, s+i+1); i--;}
    for (i=0; i<strlen(s)-1; i++)
        if (s[i]>s[i+1])
            {aux=s[i]; s[i]=s[i+1]; s[i+1]=aux;}
    strlwr(s);
    if (strcmp(s, "acd")==0)
        {total+=20; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
     else
        cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;

   cout<<"(30p) 10. Fie G un graf neorientat, unde X reprezinta multimea varfurilor, iar U multimea muchiilor. Daca cardinalul multimii X este egal cu 11, iar matricea de"<<endl;
   cout<<" adiacenta a grafului este urmatoarea: 0 1 1 0 1 0 0 0 1 1 1  scrie nodurile grafului etichetate cu un numar impar si prim de grad maxim, separate printr-o"<<"'"<<'*'<<'"'<<'.'<<endl;
   cout<<"                                       1 0 0 1 0 1 0 1 1 1 0"<<endl;
   cout<<"                                       1 0 0 1 0 1 1 0 1 0 0"<<endl;
   cout<<"                                       0 1 1 0 0 0 1 0 0 0 1"<<endl;
   cout<<"                                       1 0 0 0 0 0 1 0 0 1 0"<<endl;
   cout<<"                                       0 1 1 0 0 0 1 1 1 1 1"<<endl;
   cout<<"                                       0 0 1 1 1 1 0 0 0 1 1"<<endl;
   cout<<"                                       0 1 0 0 0 1 0 0 1 1 0"<<endl;
   cout<<"                                       1 1 1 0 0 1 0 1 0 0 1"<<endl;
   cout<<"                                       1 1 0 0 1 1 1 1 0 0 1"<<endl;
   cout<<"                                       1 0 0 1 0 1 1 0 1 1 0"<<endl<<endl<<endl;

   cout<<" Raspunsul este:";  cin.get (s, 11); cin.get();

    if (strcmp(s, "7*11")==0)
        {total+=30; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
     else
        cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;

    do{
   cout<<"FELICITARI! Ai terminat ultima parte a testului! Apasa tasta c pentru a continua si a vedea rezultatul. "; cin>>c;
   }
while (c!='C' && c!='c');
    if (c=='c' || c=='C')
        test_final(total);
}

void test_final (unsigned &total)
{
   system("color 08");
   system("cls");
   int i;
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                                  FELICITARI! Ai finalizat testul cu succes!"<<endl<<endl;
   cout<<"                                                                          Punctajul tau este: "<<total+10<<endl<<endl;
   do
{

   cout<<"Daca doresti sa reiei testul, apasa 1, daca doresti sa revii la meniul principal apasa 2, iar daca doresti sa vezi baremul apasa 3"<<endl;
   cin>>i;
}
while (i<1 || i>3);
if (i==1)
    meniu9();
 else
    if (i==2)
        meniu_principal();
     else
        if (i==3)
            barem_test();



}

void barem_test()
{
   system("color 08");
   system("cls");
   int i;
cout<<"                                                                          BAREMUL TESTULUI"<<endl<<endl<<endl<<endl<<endl;
cout<<"PARTEA I"<<endl<<endl;
cout<<"1.	c"<<endl;
cout<<"2.	c"<<endl;
cout<<"3.	a"<<endl;
cout<<"4.	b"<<endl<<endl;

cout<<"PARTEA A II-A"<<endl<<endl;
cout<<"5.	A (adevarat)"<<endl;
cout<<"6.	F (fals)"<<endl;
cout<<"7.	F (fals)"<<endl;
cout<<"8.	A (adevarat)"<<endl<<endl;

cout<<"PARTEA A III-A"<<endl<<endl;
cout<<"9.	a, c, d"<<endl;
cout<<"10.	7*11"<<endl<<endl<<endl;

do{
cout<<"Pentru a reveni la meniul anterior, apasa tasta 2. "; cin>>i;
}
while (i!=2);
if (i==2)
    meniu_principal();

}

void iesire()
{system("color E1");
   system("cls");
   cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
   cout<<"                                                            SFARSIT";
   cout<<endl<<endl<<endl<<endl<<endl<<endl;

}

