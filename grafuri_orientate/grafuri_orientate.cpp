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
void meniu34();
void meniu341();
void meniu342();
void meniu35();
void meniu351();
void meniu352();
void meniu36();
void meniu361();
void meniu362();
void meniu37();
void meniu371();
void meniu372();
void meniu4();
void meniu41();
void meniu42();
void meniu5();
void meniu51();
void meniu52();
void meniu6();
void meniu61();
void meniu62();
void meniu63();
void meniu7();
void test1(unsigned &total);
void test2(unsigned &total);
void test3(unsigned &total);
void test_final (unsigned &total);
void barem_test();
void iesire();

struct arc
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
   cout<<"                                             *                            GRAFURI ORIENTATE                           *"<<endl;
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
   cout<<"                                                                  4. Conexitate"<<endl<<endl;
   cout<<"                                                                  5. Tare conexitate"<<endl<<endl;
   cout<<"                                                                  6. Aplicatii"<<endl<<endl;
   cout<<"                                                                  7. Test"<<endl<<endl;
   cout<<"                                                                  8. Iesire"<<endl<<endl<<endl;
   cout<<"                                                              "<<endl<<endl<<endl<<endl<<endl<<endl;

   do
   {
       cout<<"Introdu acum optiunea aleasa (Ex. pt meniul 1., tastati 1)."<<endl; cin>>i;
   }
   while (i<1 || i>8);

   if (i==1) meniu1();
   if (i==2) meniu2();
   if (i==3) meniu3();
   if (i==4) meniu4();
   if (i==5) meniu5();
   if (i==6) meniu6();
   if (i==7) meniu7();
   if (i==8) iesire();


}
void meniu1()
{system("color 07");
   system("cls");
   int k;
    cout<<"                                                                 DEFINITII"<<endl<<endl<<endl<<endl<<endl;

    cout<<" GRAF ORIENTAT"<<endl<<endl;

    cout<<"Exista mai multe definitii pentru un graf orientat/digraf:"<<endl;
    cout<<"     1. Se numeste graf orientat o pereche ordonata de multimi G=(X,U), unde X - multime finita si nevida ale carei elemente se numesc varfuri/noduri si"<<endl;
    cout<<" U - multime de perechi ordonate de elemente distincte din multimea X, ale carei elemente se numesc arce."<<endl<<endl;

    cout<<"     2. Se numeste graf orientat o pereche ordonata de multimi G=(X,U), unde X - multime finita si nevida ale carei elemente se numesc varfuri/noduri si"<<endl;
    cout<<" U - multime de perechi ordonate de elemente* din multimea X, ale carei elemente se numesc arce."<<endl;
    cout<<" *- diferenta la a doua definitie este ca elementele nu trebuie sa fie neaparat distincte, existand muchii de forma u=(x,x), numite bucle"<<endl<<endl;

    cout<<"     3. Se numeste graf orientat o pereche ordonata de multimi G=(X,U), unde X - multime finita si nevida ale carei elemente se numesc varfuri/noduri si"<<endl;
    cout<<" U - familie de perechi ordonate de elemente din multimea X, numita familie de arce**."<<endl;
    cout<<"**- in acest caz, nu numai ca se admit bucle, se admit si arce identice; in acest caz, graful se numeste p-graf daca numarul de arce identice nu depaseste numarul p"<<endl<<endl;

    cout<<" ADIACENTA. INCIDENTA. EXTREMITATI"<<endl<<endl;

    cout<<" Fie arcul u=(x,y)."<<endl;
    cout<<" - x si y se numesc extremitatile arcului;"<<endl;
    cout<<" - x se numeste extremitate initiala a arcului"<<endl;
    cout<<" - y se numeste extremitate finala a arcului"<<endl;
    cout<<" - y se numeste succesor al lui x"<<endl;
    cout<<" - x se numeste predecesor al lui y"<<endl<<endl;

    cout<<" Daca intr-un graf orientat exista arcul u=(x,y) sau u=(y,x) sau amandoua, atunci varfurile x si y sunt adiacente"<<endl<<endl;

    cout<<" Incidenta se poate raporta atat la un arc si extremitatile sale, cat si la doua arce, astfel:"<<endl;
    cout<<"     - despre arcul u=(x,y) si varfurile x si y se spune ca sunt incidente"<<endl;
    cout<<"     - despre doua arce se spune ca sunt incidente daca au o extremitate comuna (ex: arcele u1=(x,y) si u2=(y,z) se spune ca sunt incidente"<<endl<<endl;

    cout<<" GRAF PARTIAL. SUBGRAF"<<endl<<endl;

    cout<<" Fie G=(X,U) un graf orientat. Se numeste graf partial al grafului G, graful orientat G1=(X,U1), unde U1 inclus sau egal in U."<<endl;
    cout<<" Observatii:"<<endl;
    cout<<" 1) Din definitie rezulta ca un graf partial al unui graf orientat are aceeasi multime de varfuri cu cel initial, iar multimea arcelor este o submultime a lui U, sau chiar U."<<endl;
    cout<<" 2) Un graf partial se poate obtine din graful initial daca se pastreaza toate varfurile si optional se elimina arce (niciunul, unul, mai multe sau toate.)"<<endl<<endl;

    cout<<" Fie G=(X,U) un graf orientat. Se numeste subgraf al grafului G, graful orientat G1=(Y,U1), unde Y inclus sau egal in X si U1 contine toate arcele care au extremitati in Y."<<endl;
    cout<<" Observatii:"<<endl;
    cout<<" 1) Din definitie rezulta ca un subgraf se poate obtine din graful initial prin eliminarea unor varfuri si a arcelor care admit varfurile respective ca extremitate."<<endl;
    cout<<" 2) Nu se pot elimina toate varfurile deoarece s-ar obtine un graf cu multimea varfurilor vida"<<endl<<endl;

    cout<<" TIPURI PARTICULARE DE GRAFURI ORIENTATE"<<endl<<endl;

    cout<<" GRAFUL PLIN"<<endl;
    cout<<" Graful plin este graful orientat in care intre orice varfuri distincte x si y exista atat arcul (x,y), cat si (y,x)."<<endl;
    cout<<" Numarul de arce intr-un graf plin este n(n-1)."<<endl;
    cout<<" Teorema:"<<endl;
    cout<<"               n(n-1)/2"<<endl;
    cout<<" Se pot forma 4         grafuri pline."<<endl<<endl;

    cout<<" GRAFUL COMPLET"<<endl;
    cout<<" Graful orientat complet este graful in care intre oricare doua varfuri distincte x si y exista arcul (x,y) SAU (y,x) sau (x,y) SI (y,x)."<<endl;
    cout<<" Graful orientat complet nu este unic, deoarece numarul de arce (m) respecta relatia:"<<endl;
    cout<<"                                                                     n(n-1)/2 <= m <= n(n-1)"<<endl;
    cout<<" Teorema:"<<endl;
    cout<<"               n(n-1)/2"<<endl;
    cout<<" Se pot forma 3         grafuri orientate complete."<<endl<<endl;

    cout<<" GRAFUL TURNEU"<<endl;
    cout<<" Graful turneu este graful orientat in care intre oricare doua varfuri distincte x si y exista EXACT un arc intre ele"<<endl;
    cout<<" Graful turneu nu este unic, deoarece numarul de arce (m) respecta relatia:"<<endl;
    cout<<"                                                             m=n(n-1)/2"<<endl;
    cout<<" Teorema:"<<endl;
    cout<<"               n(n-1)/2"<<endl;
    cout<<" Se pot forma 2         grafuri turneu."<<endl<<endl;

    cout<<" LANT. DRUM. CIRCUIT"<<endl<<endl;

    cout<<" Fie graful orientat G=(X,U)."<<endl;

    cout<<"     Se numeste lant in graful G, o multime de arce notata L=(u1, u2, ... , uk), cu proprietatea ca oricare doua arce consecutive au o extremitate comuna (nu conteaza"<<endl;
    cout<<" orientarea arcelor)"<<endl;
    cout<<"     Lungimea unui lant este data de numarul de arce din componenta sa."<<endl;
    cout<<"     Primul si ultimul nod al lantului reprezinta extremitatile lantului."<<endl;
    cout<<"     Un lant se numeste simplu daca in el nu se repeta arce"<<endl<<endl;

    cout<<"     Se numeste drum in graful orientat G, o succesiune de noduri notata D=(x1, x2, ... , xk), cu proprietatea ca pentru orice i, 1<=i<=k, exista arcul (xi, xi+1) in graf."<<endl;
    cout<<"     Lungimea unui drum este data de numarul de noduri din componenta sa."<<endl;
    cout<<"     Primul si ultimul nod al drumului (x1 si xk) reprezinta extremitatile drumului."<<endl;
    cout<<"     Un drum se numeste elementar daca in el nu se repeta noduri."<<endl<<endl;

    cout<<"     Se numeste circuit un drum simplu in care extremitatea initiala si finala sunt egale."<<endl;
    cout<<"     Se numeste circuit elementar un circuit in care, cu exceptia extremitatilor,  nu se repeta noduri."<<endl;
    cout<<"     Lungimea unui circuit este reprezentata de numarul de arce din care acesta este alcatuit."<<endl<<endl<<endl<<endl<<endl;



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
    cout<<"                                                                 2.3. Revenire"<<endl<<endl<<endl<<endl<<endl;


    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 2.1), introdu 21):"; cin>>i;
    }
    while (i<21 || i>23);

    if (i==21) meniu21();
    if (i==22) meniu22();
    if (i==23) meniu_principal();
}


void meniu21()
{system("color 04");
   system("cls");
   int i;
   cout<<"                                                                          DEFINITII"<<endl<<endl<<endl<<endl<<endl;

   cout<<" VARFUL/NODUL. GRADUL UNUI VARF."<<endl;
   cout<<"      Varful/nodul este un element al multimii X ce poate fi reprezentat in plan printr-un punct/cerc, eventual numerotat."<<endl;
   cout<<"      Intr-un graf orientat, poate exista arc de la un varf la el insusi, numita bucla. In general, nu se utilizeaza notiunea (vezi definitia 2 de la Graful Orientat)."<<endl;
   cout<<"      In general, intre doua varfuri distincte exista cel mult 2 arce, insa exista grafuri orientate si cu mai multe arce identice (vezi definitia 3 de la Graful Orientat)."<<endl<<endl;

   cout<<" Gradul interior. Gradul exterior"<<endl;
   cout<<" Fie G=(X,U) un graf orientat si un varf al sau x"<<endl;
   cout<<" Gradul exterior al varfului x (notat d+(x)) reprezinta numarul de arce de forma (x,y) (arce care ies din x/care il au pe x ca extremitate initiala)."<<endl;
   cout<<" Gradul interior al varfului x (notat d-(x)) reprezinta numarul de arce de forma (y,x) (arce care intra in x/care il au pe x ca extremitate finala)."<<endl<<endl;

   cout<<" Teorema:"<<endl;
   cout<<" Intr-un graf orientat, suma gradelor interioare ale tuturor varfurilor este egala cu suma gradelor exterioare ale tuturor varfurilor si cu numarul de arce."<<endl;
   cout<<"            d+(x1)+d+(x2)+...+d+(xk)=d-(x1)+d-(x2)+...+d-(xk)=m , unde x1, x2, ..., xk - varfurile grafului"<<endl;
   cout<<"                                                                       m - nr de arce ale grafului"<<endl<<endl<<endl<<endl;

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

    cout<<"     Varful izolat este varful care nu este adiacent cu niciun alt varf, adica are atat gradul interior, cat si cel exterior egal cu 0."<<endl;
    cout<<"     d+(x)=d-(x)=0 <=> x este varf izolat"<<endl<<endl<<endl;

     do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu22();
}

unsigned grad_ext (unsigned x, unsigned n, unsigned a[11][11])
{
    unsigned gr=0, j;
    for (j=1; j<=n; j++)
        if (a[x][j]==1) gr++;
    return gr;
}
unsigned grad_int (unsigned x, unsigned n, unsigned a[11][11])
{
    unsigned gr=0, i;
    for (i=1; i<=n; i++)
        if (a[i][x]==1) gr++;
    return gr;
}
void nodizolat (unsigned a[11][11], unsigned n)
    {
        unsigned i, j, s, ok=0;
        for (i=1; i<=n; i++)
            if (grad_int(i,n,a)==0)
                if (grad_ext(i,n,a)==0)
                    {cout<<"Varful "<<i<<" este izolat"<<endl; ok=1;}
        if (ok==0)
            cout<<"Nu exista varfuri izolate in graful dat";
    }

void meniu222()
{
    system("color 0c");
   system("cls");
    unsigned i, m, n, a[11][11], k, j, c, x, y;
    cout<<" Program pentru verificarea existentei unui varf izolat intr-un graf orientat: "<<endl<<endl<<endl;
    cout<<"#include <iostream>"<<endl;
    cout<<"using namespace std;"<<endl;
    cout<<"unsigned n, m, a[11][11];"<<endl;
    cout<<"unsigned grad_ext (unsigned x)"<<endl;
    cout<<" {"<<endl;
    cout<<"     unsigned gr=0, j;"<<endl;
    cout<<"     for (j=1; j<=n; j++)"<<endl;
    cout<<"         if (a[x][j]==1) gr++;"<<endl;
    cout<<"     return gr;  "<<endl;
    cout<<" }"<<endl;
    cout<<"unsigned grad_int (unsigned x)"<<endl;
    cout<<" {"<<endl;
    cout<<"     unsigned gr=0, i;"<<endl;
    cout<<"     for (i=1; i<=n; i++)"<<endl;
    cout<<"         if (a[i][x]==1) gr++;"<<endl;
    cout<<"     return gr;    "<<endl;
    cout<<" }"<<endl<<endl;
    cout<<"int main()"<<endl;
    cout<<" {unsigned i, j, ok=0, x, y;"<<endl;
    cout<<"  cin>>n>>m; "<<endl;
    cout<<"  for (i=1; i<=m; i++)"<<endl;
    cout<<"     {cin>>x>>y; a[x][y]++;}"<<endl;
    cout<<"  for (i=1; i<=n; i++)"<<endl;
    cout<<"     if (grad_int(i)==0)"<<endl;
    cout<<"         if (grad_ext(i)==0)"<<endl;
    cout<<"             {cout<<"<<'"'<<"Varful "<<'"'<<"<<i<<"<<'"'<<" este izolat"<<'"'<<"<<endl; ok=1;}"<<endl;
    cout<<"  if (ok==0)"<<endl;
    cout<<"     cout<<"<<'"'<<"Nu exista varfuri izolate in graful dat"<<'"'<<";"<<endl;
    cout<<"  return 0;"<<endl;
    cout<<" }"<<endl;

cout<<"Exemplu"<<endl;
cout<<"     Pentru n=5 varfuri, m=4 arce si arcele (1,2), (1,3), (2,1), (2,3), se va afisa:"<<endl<<endl;
cout<<"     Varful 4 este izolat"<<endl;
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
     cout<<" Numarul de arce este: m="; cin>>m;
     if (m<0||m>(n*(n-1)))
        cout<<"Numarul de arce trebuie sa fie cel mult egal cu "<<(n*(n-1))<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1)));

    for (k=1; k<=n; k++)
        for (j=1; j<=n; j++)
            a[k][j]=0;

    for (k=1; k<=m; k++)
    {
        do{
            cout<<"Prima extremitate a arcului "<<k<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a arcului "<<k<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
        a[x][y]++;

        while (a[x][y]>1)
        {
            if (a[x][y]>1)
                {cout<<"Acest arc a fost introdus anterior. Introdu din nou extremitatile arcului."<<endl; a[x][y]--;}
            do{
            cout<<"Prima extremitate a arcului "<<k<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a arcului "<<k<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; cout<<endl;
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


void meniu3()
{system("color 01");
   system("cls");
   int i;
    cout<<"                                                                 METODE DE REPREZENTARE"<<endl<<endl<<endl<<endl<<endl;

    cout<<"                                                                 3.1. Lista de adiacente"<<endl<<endl;
    cout<<"                                                                 3.2. Vectorul arcelor"<<endl<<endl;
    cout<<"                                                                 3.3. Matricea de adiacenta"<<endl<<endl;
    cout<<"                                                                 3.4. Matricea de incidenta"<<endl<<endl;
    cout<<"                                                                 3.5. Matricea drumurilor"<<endl<<endl;
    cout<<"                                                                 3.6. Multimea succesorilor/predecesorilor"<<endl<<endl;
    cout<<"                                                                 3.7. Multimea arcelor"<<endl<<endl;
    cout<<"                                                                 3.8. Revenire"<<endl<<endl<<endl<<endl<<endl;


     do
    {
     cout<<"Introdu optiunea dorita (ex. pt 3.1), introdu 31):"; cin>>i;
    }
    while (i<31 || i>38);

    if (i==31) meniu31();
    if (i==32) meniu32();
    if (i==33) meniu33();
    if (i==34) meniu34();
    if (i==35) meniu35();
    if (i==36) meniu36();
    if (i==37) meniu37();
    if (i==38) meniu_principal();

}

void listaadiacenta (unsigned a[11][11], unsigned n)
{
    unsigned i, j, ok;
for (i=1; i<=n; i++)
    {ok=0; cout<<"L+("<<i<<"):";
    for (j=1; j<=n; j++)
        if (a[i][j]==1)
            {cout<<j<<' '; ok=1;}
    if (ok==0)
        cout<<'-';
    cout<<endl;
    }
  cout<<endl;
for (j=1; j<=n; j++)
    {ok=0; cout<<"L-("<<j<<"):";
    for (i=1; i<=n; i++)
        if (a[i][j]==1)
            {cout<<i<<' '; ok=1;}
    if (ok==0)
        cout<<'-';
    cout<<endl;
    }
}

void meniu31()
{
   system("color 09");
   system("cls");
   unsigned k, i, j, c, a[11][11], n, m, y, x;
    cout<<"                                                                 LISTA DE ADIACENTE"<<endl<<endl<<endl<<endl<<endl;

    cout<<"     Lista de adiacente este o modalitate de a reprezenta lista varfurilor adiacente cu fiecare varf dintr-un graf dat, sub forma unui tabel."<<endl;
    cout<<" In aceasta se pot reprezenta, ca in exemplul de mai jos, atat adiacentele interioare, cat si cele exterioare."<<endl<<endl;

    cout<<"Pentru graful G=(X,U), X={1,2,3,4,5,6,7,8} si U={(1,2),(2,3),(3,1),(2,4),(5,6),(3,7),(8,4),(4,8),(7,1),(6,2)}, lista de adiacente este:"<<endl<<endl;

   cout<<"                      varf    |   L+(x)  |  L-(x)"<<endl;
   cout<<"                   ___________|__________|__________"<<endl;
   cout<<"                        1     |     2    |   3,7"<<endl;
   cout<<"                        2     |    3,4   |   1,6"<<endl;
   cout<<"                        3     |    1,7   |    2"<<endl;
   cout<<"                        4     |     8    |   2,8"<<endl;
   cout<<"                        5     |     6    |    -"<<endl;
   cout<<"                        6     |     2    |    5"<<endl;
   cout<<"                        7     |     1    |    3"<<endl;
   cout<<"                        8     |     4    |    4"<<endl<<endl<<endl<<endl;

   cout<<"Program pentru afisarea listei de adiacenta a unui graf orientat:"<<endl<<endl<<endl;

    cout<<"#include <iostream>"<<endl;
    cout<<"using namespace std;"<<endl;
    cout<<"int main()"<<endl;
    cout<<"{unsigned n, m, a[11][11], i, j, x, y, ok;"<<endl;
    cout<<"cin>>n>>m;"<<endl;
    cout<<"for (i=1; i<=n; i++)"<<endl;
    cout<<"    for (j=1; j<=n; j++)"<<endl;
    cout<<"        a[i][j]=0;"<<endl;
    cout<<"for (i=1; i<=m; i++)"<<endl;
    cout<<"    {"<<endl;
    cout<<"        cin>>x>>y; a[x][y]++;"<<endl;
    cout<<"    }"<<endl;
    cout<<"for (i=1; i<=n; i++)"<<endl;
    cout<<"    {"<<endl;
    cout<<"        ok=0; cout<<"<<'"'<<"L+("<<'"'<<"<<i<<"<<'"'<<"):"<<'"'<<";"<<endl;
    cout<<"        for (j=1; j<=n; j++)"<<endl;
    cout<<"            if (a[i][j]==1)"<<endl;
    cout<<"                {cout<<j<<"<<'"'<<" "<<'"'<<"; ok=1;}"<<endl;
    cout<<"        if (ok==0)"<<endl;
    cout<<"            cout<<"<<'"'<<"-"<<'"'<<";"<<endl;
    cout<<"        cout<<endl;  "<<endl;
    cout<<"    }"<<endl;
    cout<<"cout<<endl;  "<<endl;
    cout<<"for (j=1; j<=n; j++)"<<endl;
    cout<<"    {"<<endl;
    cout<<"        ok=0; cout<<"<<'"'<<"L-("<<'"'<<"<<j<<"<<'"'<<"):"<<'"'<<";"<<endl;
    cout<<"        for (i=1; i<=n; i++)"<<endl;
    cout<<"           if (a[i][j]==1)"<<endl;
    cout<<"                {cout<<i<<"<<'"'<<" "<<'"'<<"; ok=1;}"<<endl;
    cout<<"        if (ok==0)"<<endl;
    cout<<"            cout<<"<<'"'<<"-"<<'"'<<";"<<endl;
    cout<<"        cout<<endl;"<<endl;
    cout<<"    }"<<endl;
    cout<<"return 0;"<<endl;
    cout<<"}"<<endl;


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
     cout<<" Numarul de arce este: m="; cin>>m;
     if (m<0||m>(n*(n-1)))
        cout<<"Numarul de arce trebuie sa fie cel mult egal cu "<<(n*(n-1))<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1)));

    for (k=1; k<=n; k++)
        for (j=1; j<=n; j++)
            a[k][j]=0;

    for (k=1; k<=m; k++)
    {
        do{
            cout<<"Prima extremitate a arcului "<<k<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a arcului "<<k<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);

        cout<<endl;
        a[x][y]++;
        while (a[x][y]>1)
        {
            if (a[x][y]>1)
                {cout<<"Acest arc a fost introdus anterior. Introdu din nou extremitatile arcului."<<endl; a[x][y]--;}
            do{
            cout<<"Prima extremitate a arcului "<<k<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a arcului "<<k<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++;  cout<<endl;
        }

    }

   cout<<" Se va afisa: "<<endl; listaadiacenta(a,n);
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

void vectorarce (arc v[10], unsigned n, unsigned m)
    {
        unsigned i;
        cout<<"Varfurile grafului sunt: ";
        for (i=1; i<=n; i++)
            cout<<i<<' ';
        cout<<endl<<"Arcele grafului sunt: ";
        for (i=1; i<=m; i++)
            cout<<"("<<v[i].x<<','<<v[i].y<<") ";
    }

void meniu32()
{
   system("color 09");
   system("cls");
   unsigned n, m, k, i, c, a[11][11],j
   ;
    cout<<"                                                                 VECTORUL DE ARCE"<<endl<<endl<<endl<<endl<<endl;

    cout<<"     Vectorul de arce permite inregistrarea unui arc sub forma unei inregistrari, iar pentru toate arcele va fi nevoie de un tablou cu astfel de elemente:"<<endl<<endl;

    cout<<"                 struct arc"<<endl;
    cout<<"                       {int x,y;}v[10];          // x si y sunt extremitatile fiecarui arc al unui graf cu 10 varfuri"<<endl<<endl<<endl<<endl;

    cout<<"Program pentru citirea si afisarea unui graf folosind vectorul de arce:"<<endl<<endl<<endl;
cout<<"#include <iostream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"struct arc"<<endl;
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
cout<<"cout<<endl<<"<<'"'<<"Arcele grafului sunt: "<<'"'<<";"<<endl;
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
     cout<<" Numarul de arce este: m="; cin>>m;
     if (m<0||m>(n*(n-1)))
        cout<<"Numarul de arce trebuie sa fie cel mult egal cu "<<(n*(n-1))<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1)));

    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            a[i][j]=0;
    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>v[i].x;
            if (v[i].x<=0 || v[i].x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (v[i].x<=0 || v[i].x>n);
        do{
            cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>v[i].y;
            if ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y);

         a[v[i].x][v[i].y]++;
        while (a[v[i].x][v[i].y]>1)
        {
            if (a[v[i].x][v[i].y]>1)
                {cout<<"Acest arc a fost introdus anterior. Introdu din nou extremitatile arcului."<<endl; a[v[i].x][v[i].y]--;}
            do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>v[i].x;
            if (v[i].x<=0 || v[i].x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (v[i].x<=0 || v[i].x>n);
            do{
                cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>v[i].y;
                if ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y);
            a[v[i].x][v[i].y]++;  cout<<endl;
        }
        cout<<endl;
    }

    cout<<" Se va afisa:"<<endl; vectorarce (v,n,m);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu32();
}
else
    if (k==2)
        meniu32();
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

    cout<<"     Matricea de adiacenta a unui graf orientat G=(X,U), |X|=n, |U|=m, este o matrice A cu n linii si n coloane (nr. de varfuri), ale carei elemente sunt definite astfel:"<<endl;
    cout<<"                   _                                                                                     "<<endl;
    cout<<"                  |  1, daca [i,j] este arc din multimea U, i!=j <=> exista arc intre varfurile i si j (sunt adiacente)"<<endl;
    cout<<"         a(i,j)= -|                                                                                      "<<endl;
    cout<<"                  |_ 0, in caz contrar                                                                   "<<endl<<endl<<endl;

    cout<<" Exemplu:"<<endl;
    cout<<"     Pentru graful G=(X,U), X={1,2,3,4,5}, U={(1,2),(1,4),(1,5),(3,4),(3,2)}, matricea de adiacenta va fi:"<<endl<<endl;
    cout<<"                 0 1 0 1 1"<<endl;
    cout<<"                 0 0 0 0 0"<<endl;
    cout<<"                 0 1 0 1 0"<<endl;
    cout<<"                 0 0 0 0 0"<<endl;
    cout<<"                 0 0 0 0 0"<<endl<<endl<<endl;

    cout<<"     Caracteristicile matricei de adiacenta a unui graf sunt:"<<endl;
    cout<<"         - este patratica (are n linii si n coloane)"<<endl;
    cout<<"         - este binara (elementele sunt binare, adica pot fi doar 0 sau 1)"<<endl;
    cout<<"         - pe diagonala principala are doar valori egale cu 0 (daca graful nu contine bucle)"<<endl<<endl;
    cout<<"     Obs: matricea de adiacenta pentru un graf orientat nu este neaparat simetrica (doar in cazuri particulare)"<<endl<<endl<<endl<<endl<<endl;


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
    unsigned ok=0;
  if (verifpat (n, m) == 1)
    if (verifelembinare (a, n, m) == 1)
        if (verifsimdp (a, n, m) == 1)
            {if (verifdiagprinc (a, n, m) == 1)
                {
                    cout << "Matricea poate fi matrice de adiacenta pentru un graf neorientat";
                    ok = 1;
                }}
         else
            {cout<<"Matricea poate fi matrice de adiacenta pentru un graf orientat"; ok=1;}
  if (ok == 0)
        cout << "Matricea nu poate fi matrice de adiacenta pentru un graf neorientat/orientat";
}
void meniu332()
{
    system("color 09");
   system("cls");
    unsigned n, m, i, j, k, a[10][10], c;
    cout<<"Program pentru verificarea unei matrice daca poate fi matrice de adiacenta pentru un graf orientat/neorientat"<<endl<<endl<<endl;

cout<<"#include <iostream>"<<endl;
cout<<"#include <fstream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"ifstream f ("<<'"'<<"Graf.in"<<'"'<<");"<<endl;
cout<<"void citiremat (unsigned a[10][10], unsigned n, unsigned m)"<<endl;
cout<<"{"<<endl;
cout<<"  unsigned i, j;"<<endl;
cout<<"  for (i = 0; i < n; i++)"<<endl;
cout<<"    for (j = 0; j < m; j++)"<<endl;
cout<<"      f >> a[i][j];"<<endl;
cout<<"}"<<endl<<endl;

cout<<"unsigned verifpat (unsigned n, unsigned m)"<<endl;
cout<<"{"<<endl;
cout<<"  if (n == m)"<<endl;
cout<<"    return 1;"<<endl;
cout<<"  return 0;"<<endl;
cout<<"}"<<endl<<endl;

cout<<"unsigned verifdiagprinc (unsigned a[10][10], unsigned n, unsigned m)"<<endl;
cout<<"{"<<endl;
cout<<"  unsigned ok = 1, i;"<<endl;
 cout<<" for (i = 0; i < n - 1; i++)"<<endl;
 cout<<"   if (a[i][i] != a[i+1][i+1])"<<endl;
 cout<<"       ok = 0;"<<endl;
 cout<<" return ok;"<<endl;
cout<<"}"<<endl<<endl;

cout<<"unsigned verifelembinare (unsigned a[10][10], unsigned n, unsigned m)"<<endl;
cout<<"{"<<endl;
cout<<"  unsigned ok = 1, i, j;"<<endl;
cout<<"  for (i = 0; i < n; i++)"<<endl;
cout<<"    for (j = 0; j < m; j++)"<<endl;
cout<<"      if (a[i][j]<0 || a[i][j]>1)"<<endl;
cout<<"	        ok = 0;"<<endl;
cout<<"  return ok;"<<endl;
cout<<"}"<<endl<<endl;

cout<<"unsigned verifsimdp (unsigned a[10][10], unsigned n, unsigned m)"<<endl;
cout<<"{"<<endl;
cout<<"  unsigned ok = 1, i, j;"<<endl;
cout<<"  for (i = 0; i < n; i++)"<<endl;
 cout<<"   for (j = 0; j < m; j++)"<<endl;
 cout<<"     if (a[i][j] != a[j][i])"<<endl;
cout<<"	    ok = 0;"<<endl;
 cout<<" return ok;"<<endl;
cout<<"}"<<endl<<endl;

cout<<"int main ()"<<endl;
cout<<"{"<<endl;
 cout<<" unsigned n, m, a[10][10], ok=0, i, j;"<<endl;
 cout<<" f >> n >> m;"<<endl;
 cout<<" citiremat (a, n, m);"<<endl;
 cout<<" if (verifpat (n, m) == 1)"<<endl;
 cout<<"   if (verifelembinare (a, n, m) == 1)"<<endl;
  cout<<"      if (verifsimdp (a, n, m) == 1)"<<endl;
  cout<<"          {if (verifdiagprinc (a, n, m) == 1)"<<endl;
  cout<<"              {"<<endl;
  cout<<"                  cout<<"<<'"'<<"Matricea poate fi matrice de adiacenta pentru un graf neorientat"<<'"'<<";"<<endl;
  cout<<"                  ok = 1;"<<endl;
  cout<<"              }}"<<endl;
  cout<<"       else"<<endl;
  cout<<"          {cout<<"<<'"'<<"Matricea poate fi matricre de adiacenta pentru un graf orientat"<<'"'<<"; ok=1;}"<<endl;
  cout<<"if (ok == 0)"<<endl;
  cout<<"      cout<<"<<'"'<<"Matricea nu poate fi matrice de adiacenta pentru un graf neorientat/orientat"<<'"'<<";"<<endl;
  cout<<"  return 0;"<<endl;
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

void meniu34()
{
    system("color 09");
   system("cls");
    int i;
    cout<<"                                                                 MATRICEA DE INCIDENTA"<<endl<<endl<<endl<<endl<<endl;

    cout<<"                                                                 3.4.1. Caracteistici + definitie"<<endl<<endl;
    cout<<"                                                                 3.4.2. Aplicatie construire"<<endl<<endl;
    cout<<"                                                                 3.4.3. Revenire"<<endl<<endl<<endl<<endl<<endl;
     do
    {
     cout<<"Introdu optiunea dorita (ex. pt 3.4.1), introdu 341):"; cin>>i;
    }
    while (i<341 || i>343);

    if (i==341) meniu341();
    if (i==342) meniu342();
    if (i==343) meniu3();
}
void meniu341()
{
    system("color 09");
   system("cls");
   int i;

    cout<<"                                                     MATRICEA DE INCIDENTA - CARACTERISTICI + DEFINITIE"<<endl<<endl<<endl<<endl;

    cout<<"     Matricea de incidenta sau matricea varfuri-arce este o matrice notata cu B care va avea numarul de linii egal cu numarul de varfuri si numarul de coloane egal cu numarul de arce."<<endl;
    cout<<" Elementele acesteia se definesc astfel:"<<endl;
    cout<<"                  _"<<endl;
    cout<<"                 |   1 daca varful i este incident exterior cu arcul j (i - extremitate initiala)"<<endl;
    cout<<"                 |"<<endl;
    cout<<"        b(i,j)= -|  -1 daca varful i este incident interior cu arcul j (i - etremitate finala)"<<endl;
    cout<<"                 |"<<endl;
    cout<<"                 |_ 0 daca varful nu este incident cu arcul j"<<endl<<endl<<endl;

    cout<<"Observatii:"<<endl;
    cout<<" - pe fiecare coloana a matricei B va exista doar o perche de valori nenule (o valoare 1 si o valoare -1)"<<endl;
    cout<<" - pe linia i, numarul de valori 1 reprezinta gradul exterior al varfului i"<<endl;
    cout<<" - pe linia i, numarul de valori -1 reprezinta gradul interior al varfului i"<<endl<<endl<<endl;

    cout<<"Exemplu, pentru graful G=(X,U), X={1,2,3,4}, U={(1,2), (2,3), (3,2), (1,4), (4,3)}, matricea de incidenta va fi:"<<endl<<endl;

    cout<<"             1   0   0   1   0"<<endl;
    cout<<"             -1  1   -1  0   0"<<endl;
    cout<<"             0   -1  1   0   -1"<<endl;
    cout<<"             0   0   0   -1  1"<<endl<<endl<<endl<<endl;

        do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu34();
}

void matrice_incidenta (int b[11][11], arc v[11], unsigned n, unsigned m)
{
    unsigned i,j;
    for (i=1; i<=n; i++)
        for (j=1; j<=m; j++)
            if (i==v[j].x)
                b[i][j]=1;
             else
                if (i==v[j].y)
                    b[i][j]=-1;
                 else
                    b[i][j]=0;
}
void afisare_mi (int b[11][11], unsigned n, unsigned m)
{
    unsigned i, j;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=m; j++)
            cout<<b[i][j]<<' ';
        cout<<endl;
    }
}

void meniu342()
{
   system("color 09");
   system("cls");

   cout<<" Program pentru construirea matricei de incidenta a unui graf orientat:"<<endl<<endl;
   cout<<"  #include <iostream>"<<endl;
   cout<<" using namespace std;"<<endl;
    cout<<" struct arc {unsigned x,y;} v[11];"<<endl;
    cout<<" int b[11][11]; unsigned n, m;"<<endl;
    cout<<"void matrice_incidenta (int b[11][11], unsigned n, unsigned m)"<<endl;
    cout<<"     {"<<endl;
    cout<<"         unsigned i,j;"<<endl;
    cout<<"         for (i=1; i<=n; i++)"<<endl;
    cout<<"             for (j=1; j<=m; j++)"<<endl;
    cout<<"                 if (i==v[j].x)"<<endl;
     cout<<"                    b[i][j]=1;"<<endl;
     cout<<"                 else"<<endl;
     cout<<"                    if (i==v[j].y)"<<endl;
     cout<<"                        b[i][j]=-1;"<<endl;
     cout<<"                      else"<<endl;
     cout<<"                        b[i][j]=0;"<<endl;
    cout<<"     }"<<endl;
    cout<<"void afisare (int b[11][11], unsigned n, unsigned m)"<<endl;
    cout<<"     {"<<endl;
    cout<<"         unsigned i, j;"<<endl;
    cout<<"         for (i=1; i<=n; i++)"<<endl;
    cout<<"             {"<<endl;
     cout<<"                for (j=1; j<=m; j++)"<<endl;
     cout<<"                    cout<<b[i][j]<<"<<'"'<<" "<<'"'<<";"<<endl;
     cout<<"                cout<<endl;"<<endl;
    cout<<"             }"<<endl;
    cout<<"     }"<<endl;
    cout<<"int main()"<<endl;
    cout<<"{"<<endl;
    cout<<"     unsigned i;"<<endl;
    cout<<"     cin>>n>>m;"<<endl;
    cout<<"     for (i=1; i<=m; i++)"<<endl;
    cout<<"         cin>>v[i].x>>v[i].y;"<<endl;
    cout<<"     matrice_incidenta (b,n,m); afisare (b,n,m);"<<endl;
    cout<<"     return 0;"<<endl;
    cout<<"}"<<endl<<endl<<endl<<endl;
int b[11][11]; unsigned c, i, j, k, n, m, a[11][11]; arc v[11];
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
     cout<<" Numarul de arce este: m="; cin>>m;
     if (m<0||m>(n*(n-1)))
        cout<<"Numarul de arce trebuie sa fie cel mult egal cu "<<(n*(n-1))<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1)));

    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            a[i][j]=0;
    for (i=1; i<=n; i++)
        for (j=1; j<=m; j++)
            b[i][j]=0;
    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>v[i].x;
            if (v[i].x<=0 || v[i].x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (v[i].x<=0 || v[i].x>n);
        do{
            cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>v[i].y;
            if ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y);

         a[v[i].x][v[i].y]++;
        while (a[v[i].x][v[i].y]>1)
        {
            if (a[v[i].x][v[i].y]>1)
                {cout<<"Acest arc a fost introdus anterior. Introdu din nou extremitatile arcului."<<endl; a[v[i].x][v[i].y]--;}
            do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>v[i].x;
            if (v[i].x<=0 || v[i].x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (v[i].x<=0 || v[i].x>n);
            do{
                cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>v[i].y;
                if ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((v[i].y<=0 || v[i].y>n) || v[i].x==v[i].y);
            a[v[i].x][v[i].y]++;  cout<<endl;
        }
        cout<<endl;
    }

    cout<<" Se va afisa:"<<endl; matrice_incidenta (b,v,n,m); afisare_mi (b,n,m);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu34();
}
else
    if (k==2)
        meniu34();
}

void meniu35()
{
system("color 09");
   system("cls");
    int i;
    cout<<"                                                                 MATRICEA DRUMURILOR"<<endl<<endl<<endl<<endl<<endl;

    cout<<"                                                                 3.5.1. Caracteistici + definitie"<<endl<<endl;
    cout<<"                                                                 3.5.2. Aplicatie - Algoritmul Roy-Warshall"<<endl<<endl;
    cout<<"                                                                 3.5.3. Revenire"<<endl<<endl<<endl<<endl<<endl;
     do
    {
     cout<<"Introdu optiunea dorita (ex. pt 3.5.1), introdu 351):"; cin>>i;
    }
    while (i<351 || i>353);

    if (i==351) meniu351();
    if (i==352) meniu352();
    if (i==353) meniu3();
}

void meniu351()
{
   system("color 09");
   system("cls");
   int i;
   cout<<"                                                   MATRICEA DRUMURILOR - CARACTERISTICI + DEFINITIE"<<endl<<endl<<endl<<endl;

   cout<<" Matricea de drumurilor  (D) a grafului este o matrice cu n linii si n coloane si elemente 0 sau 1, astfel:"<<endl<<endl;
   cout<<"            _"<<endl;
   cout<<"           |  1,  daca exista drum de la i la j"<<endl;
   cout<<"  d(i,j)= -|"<<endl;
   cout<<"           |_ 0,  in caz contrar"<<endl<<endl<<endl;

   cout<<" Observatie: matricea drumurilor pentru un graf orientat tare conex va contine doar valori egale cu 1."<<endl<<endl<<endl<<endl;

    do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu35();
}

void roy_warshall (unsigned a[11][11], unsigned n)
{
    unsigned i, j, k;
    for (k=1; k<=n; k++)
        for (i=1; i<=n; i++)
            for (j=1; j<=n; j++)
                if ((a[i][j]==0) && (i!=k) && (j!=k))
                    a[i][j]=a[i][k]*a[k][j];
}
void afisare_md (unsigned a[11][11], unsigned n)
{
    unsigned i, j;
    for (i=1; i<=n; i++)
        {
            for (j=1; j<=n; j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
}

void meniu352()
{
   system("color 09");
   system("cls");

   cout<<" Program pentru construirea matricei drumurilor pentru un graf orientat:"<<endl<<endl;
   cout<<"#include <iostream>"<<endl;
   cout<<" using namespace std;"<<endl;
   cout<<" unsigned n, a[11][11], m, x, y;"<<endl;
   cout<<" void citire (unsigned a[11][11], unsigned &n, unsigned &m)"<<endl;
   cout<<"      {"<<endl;
   cout<<"          unsigned i;"<<endl;
   cout<<"          cin>>n>>m;"<<endl;
   cout<<"          for (i=1; i<=m; i++)"<<endl;
   cout<<"              {cin>>x>>y; a[x][y]++;}"<<endl;
   cout<<"      }"<<endl;
   cout<<" void roy_warshall (unsigned a[11][11])"<<endl;
    cout<<"     {"<<endl;
    cout<<"         unsigned i, j, k;"<<endl;
    cout<<"         for (k=1; k<=n; k++)"<<endl;
    cout<<"             for (i=1; i<=n; i++)"<<endl;
    cout<<"                 for (j=1; j<=n; j++)"<<endl;
    cout<<"                     if ((a[i][j]==0) && (i!=k) && (j!=k))"<<endl;
    cout<<"                          a[i][j]=a[i][k]*a[k][j];"<<endl;
    cout<<"     }"<<endl;
    cout<<"void afisare (unsigned a[11][11])"<<endl;
    cout<<"     {"<<endl;
    cout<<"         unsigned i, j;"<<endl;
    cout<<"         for (i=1; i<=n; i++)"<<endl;
    cout<<"             {"<<endl;
    cout<<"                 for (j=1; j<=n; j++)"<<endl;
    cout<<"                     cout<<a[i][j]<<"<<'"'<<" "<<'"'<<";"<<endl;
    cout<<"                 cout<<endl;"<<endl;
    cout<<"             }"<<endl;
    cout<<"     }"<<endl;
    cout<<"int main()"<<endl;
    cout<<"{"<<endl;
    cout<<"     citire(a,n,m); roy_warshall(a); afisare(a);"<<endl;
    cout<<"     return 0;"<<endl;
    cout<<"}"<<endl<<endl<<endl<<endl;

    unsigned c, i, j, k, n, m, a[11][11], x, y;
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
     cout<<" Numarul de arce este: m="; cin>>m;
     if (m<0||m>(n*(n-1)))
        cout<<"Numarul de arce trebuie sa fie cel mult egal cu "<<(n*(n-1))<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1)));

    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            a[i][j]=0;
    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);

         a[x][y]++;
        while (a[x][y]>1)
        {
            if (a[x][y]>1)
                {cout<<"Acest arc a fost introdus anterior. Introdu din nou extremitatile arcului."<<endl; a[x][y]--;}
            do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++;  cout<<endl;
        }
        cout<<endl;
    }

    cout<<" Se va afisa:"<<endl; roy_warshall(a,n); afisare_md (a,n);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu35();
}
else
    if (k==2)
        meniu35();
}

void meniu36()
{
system("color 09");
   system("cls");
    int i;
    cout<<"                                                                 MATRICEA DE ADIACENTA"<<endl<<endl<<endl<<endl<<endl;

    cout<<"                                                                 3.6.1. Caracteistici + definitie"<<endl<<endl;
    cout<<"                                                                 3.6.2. Aplicatie"<<endl<<endl;
    cout<<"                                                                 3.6.3. Revenire"<<endl<<endl<<endl<<endl<<endl;
     do
    {
     cout<<"Introdu optiunea dorita (ex. pt 3.6.1), introdu 361):"; cin>>i;
    }
    while (i<361 || i>363);

    if (i==361) meniu361();
    if (i==362) meniu362();
    if (i==363) meniu3();
}

void meniu361()
{
   system("color 09");
   system("cls");
   int i;

   cout<<"                                                  DEFINITIE + CARACTERISTICI - MULTIMEA SUCCESORILOR/PREDECESORILOR"<<endl<<endl<<endl<<endl;

   cout<<" Multimea succesorilor (notata cu litera greceasca gama+) este multimea formata din extremitatile finale ale arcelor de forma (x,y), definita astfel:"<<endl<<endl;

   cout<<"      gama+(x)={y|(x,y) apartine U}, G=(X,U) graf orientat"<<endl<<endl<<endl;

   cout<<" Multimea predecesorilor (notata cu litera greceasca gama-) este multimea formata din extremitatile initiale ale arcelor de forma (y,x), definita astfel:"<<endl<<endl;

   cout<<"      gama-(x)={y|(y,x) apartine U}, G=(X,U) graf orientat"<<endl<<endl<<endl;

   cout<<"Exemplu:"<<endl<<endl;

   cout<<"Fie G=(X,U), X={1,2,3,4} U={(1,2),(2,3),(3,4),(4,1),(2,4)}."<<endl<<endl;

   cout<<" gama+(1)={2}            gama-(1)={4}"<<endl;
   cout<<" gama+(2)={3,4}          gama-(2)={1}"<<endl;
   cout<<" gama+(3)={4}            gama-(3)={2}"<<endl;
   cout<<" gama+(4)={1}            gama-(4)={2,3}"<<endl<<endl<<endl<<endl;

    do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu36();
}

void gama_plus (unsigned a[11][11], unsigned n, unsigned x)
{
    unsigned j;
    cout<<"{" ;
    for (j=1; j<=n; j++)
        if (a[x][j]==1) cout<<j<<",";
    cout<<"}";
}

void gama_minus (unsigned a[11][11], unsigned n, unsigned x)
{
    unsigned i;
    cout<<"{";
    for (i=1; i<=n; i++)
        if (a[i][x]==1) cout<<i<<",";
    cout<<"}";
}

void mult_succ_pred (unsigned a[11][11], unsigned n)
{
    unsigned i;
    for (i=1; i<=n; i++)
    {
        cout<<"gama+("<<i<<")="; gama_plus(a,n,i); cout<<endl;
        cout<<"gama-("<<i<<")="; gama_minus(a,n,i); cout<<endl<<endl;
    }
}

void meniu362()
{
system("color 09");
   system("cls");
    cout<<"Program pentru afisarea multimii succesorilor/predecesorilor pentru un graf orientat"<<endl<<endl;

    cout<<"#include <iostream>"<<endl;
    cout<<"using namespace std;"<<endl;
    cout<<"unsigned n, a[11][11];"<<endl;
    cout<<"void gama_plus (unsigned x)"<<endl;
    cout<<"   {"<<endl;
    cout<<"     unsigned j;"<<endl;
    cout<<"     cout<<"<<'"'<<"{"<<'"'<<";"<<endl;
    cout<<"     for (j=1; j<=n; j++)"<<endl;
    cout<<"         if (a[x][j]==1) cout<<j<<"<<'"'<<","<<'"'<<";"<<endl;
    cout<<"     cout<<"<<'"'<<"}"<<'"'<<";    "<<endl;
    cout<<"   }"<<endl;
    cout<<"void gama_minus (unsigned x)"<<endl;
    cout<<"   {"<<endl;
    cout<<"     unsigned i;"<<endl;
    cout<<"     cout<<"<<'"'<<"{"<<'"'<<";"<<endl;
    cout<<"     for (i=1; i<=n; i++)"<<endl;
    cout<<"         if (a[i][x]==1) cout<<i<<"<<'"'<<","<<'"'<<";"<<endl;
    cout<<"     cout<<"<<'"'<<"}"<<'"'<<";    "<<endl;
    cout<<"   }"<<endl;
    cout<<"int main()"<<endl;
    cout<<"    {unsigned m, x, y, i, j;"<<endl;
    cout<<"    cin>>n>>m; "<<endl;
    cout<<"    for (i=1; i<=m; i++)"<<endl;
    cout<<"        {cin>>x>>y; a[x][y]++;}"<<endl;
    cout<<"    for (i=1; i<=n; i++)"<<endl;
    cout<<"         {"<<endl;
    cout<<"             cout<<"<<'"'<<"gama+("<<'"'<<"<<i<<"<<'"'<<")="<<'"'<<"; gama_plus(i); cout<<endl;"<<endl;
    cout<<"             cout<<"<<'"'<<"gama-("<<'"'<<"<<i<<"<<'"'<<")="<<'"'<<"; gama_minus(i); cout<<endl<<endl;"<<endl;
    cout<<"         }"<<endl;
    cout<<"    return 0;"<<endl;
    cout<<"    }"<<endl<<endl<<endl<<endl;

    unsigned c, i, j, k, n, m, a[11][11], x, y;
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
     cout<<" Numarul de arce este: m="; cin>>m;
     if (m<0||m>(n*(n-1)))
        cout<<"Numarul de arce trebuie sa fie cel mult egal cu "<<(n*(n-1))<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1)));

    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            a[i][j]=0;
    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);

         a[x][y]++;
        while (a[x][y]>1)
        {
            if (a[x][y]>1)
                {cout<<"Acest arc a fost introdus anterior. Introdu din nou extremitatile arcului."<<endl; a[x][y]--;}
            do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++;  cout<<endl;
        }
        cout<<endl;
    }

    cout<<" Se va afisa:"<<endl; mult_succ_pred(a,n);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu36();
}
else
    if (k==2)
        meniu36();

}

void meniu37()
{
system("color 09");
   system("cls");
    int i;
    cout<<"                                                                         MULTIMEA ARCELOR"<<endl<<endl<<endl<<endl<<endl;

    cout<<"                                                                 3.7.1. Caracteistici + definitie"<<endl<<endl;
    cout<<"                                                                 3.7.2. Aplicatie"<<endl<<endl;
    cout<<"                                                                 3.7.3. Revenire"<<endl<<endl<<endl<<endl<<endl;
     do
    {
     cout<<"Introdu optiunea dorita (ex. pt 3.7.1), introdu 371):"; cin>>i;
    }
    while (i<371 || i>373);

    if (i==371) meniu371();
    if (i==372) meniu372();
    if (i==373) meniu3();
}

void meniu371()
{
    system("color 09");
   system("cls");
   int i;

   cout<<"                                                  DEFINITIE + CARACTERISTICI - MULTIMEA ARCELOR"<<endl<<endl<<endl<<endl;

   cout<<"      Multimea arcelor unui graf orientat (notata cu litera greceasca omega) este de doua tipuri (omega+(x) si omega-(x)) care se definesc astfel:"<<endl<<endl;

   cout<<" Fie graful G=(X,U) si doua varfuri oarecare x si y:"<<endl;
   cout<<"        - omega+(x)={(x,y)|(x,y) apartine U} // multimea tuturor arcelor care il au pe x ca extremitate initiala si apartin multimii arcelor grafului"<<endl;
   cout<<"        - omega-(x)={(y,x)|(y,x) apartine U} // multimea tuturor arcelor care il au pe x ca extremitate finala si apartin multimii arcelor grafului"<<endl<<endl<<endl;

   cout<<" Exemplu:"<<endl<<endl;

   cout<<"Fie G=(X,U), X={1,2,3,4} U={(1,2),(2,3),(3,4),(4,1),(2,4)}."<<endl<<endl;

   cout<<" omega+(1)={(1,2)}            omega-(1)={(4,1)}"<<endl;
   cout<<" omega+(2)={(2,3),(2,4)}      omega-(2)={(1,2)}"<<endl;
   cout<<" omega+(3)={(3,4)}            omega-(3)={(2,3)}"<<endl;
   cout<<" omega+(4)={(4,1)}            omega-(4)={(2,4),(3,4)}"<<endl<<endl<<endl<<endl;


    do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu37();
}

void mult_arce (unsigned a[11][11], unsigned n)
{
    unsigned i, j;
    for (i=1; i<=n; i++)
        {cout<<"omega+("<<i<<"): {";
        for (j=1; j<=n; j++)
            if (a[i][j]==1)
                cout<<"("<<i<<","<<j<<"),";
        cout<<"}"<<endl;
        }
    cout<<endl;
    for (i=1; i<=n; i++)
        {cout<<"omega-("<<i<<"): {";
        for (j=1; j<=n; j++)
            if (a[j][i]==1)
                cout<<"("<<j<<","<<i<<"),";
        cout<<"}"<<endl;
        }
}

void meniu372()
{
    system("color 09");
   system("cls");

   cout<<" Program pentru afisarea multimii arcelor de forma (x,y)/(y,x) pentru un graf orientat"<<endl<<endl;

   cout<<" #include <iostream>"<<endl;
   cout<<"  using namespace std;"<<endl;
   cout<<"  int main()"<<endl;
   cout<<"   {"<<endl;
   cout<<"      unsigned n, m, x, y, i, j, a[11][11];"<<endl;
   cout<<"      cin>>n>>m;"<<endl;
   cout<<"      for (i=1; i<=n; i++)"<<endl;
   cout<<"          for (j=1; j<=n; j++)"<<endl;
   cout<<"              {"<<endl;
   cout<<"                  a[i][j]=0;"<<endl;
   cout<<"              }"<<endl;
   cout<<"      for (i=1; i<=m; i++)"<<endl;
   cout<<"          {cin>>x>>y; a[x][y]++;}"<<endl;
   cout<<"      for (i=1; i<=n; i++)"<<endl;
   cout<<"           {cout<<"<<'"'<<"omega+("<<'"'<<"<<i<<"<<'"'<<"): {"<<'"'<<";"<<endl;
   cout<<"            for (j=1; j<=n; j++)"<<endl;
   cout<<"                 if (a[i][j]==1)"<<endl;
   cout<<"                      cout<<"<<'"'<<"("<<'"'<<"<<i<<"<<'"'<<","<<'"'<<"<<j<<"<<'"'<<"),"<<'"'<<";"<<endl;
   cout<<"            cout<<"<<'"'<<"}"<<'"'<<"<<endl;  "<<endl;
   cout<<"           }"<<endl;
   cout<<"      cout<<endl;"<<endl;
   cout<<"      for (i=1; i<=n; i++)"<<endl;
   cout<<"           {cout<<"<<'"'<<"omega-("<<'"'<<"<<i<<"<<'"'<<"): {"<<'"'<<";"<<endl;
   cout<<"            for (j=1; j<=n; j++)"<<endl;
   cout<<"            if (a[j][i]==1)"<<endl;
   cout<<"               cout<<"<<'"'<<"("<<'"'<<"<<j<<"<<'"'<<","<<'"'<<"<<i<<"<<'"'<<"),"<<'"'<<";"<<endl;
   cout<<"            cout<<"<<'"'<<"}"<<'"'<<"<<endl;  "<<endl;
   cout<<"           }"<<endl;
   cout<<"      return 0;"<<endl;
   cout<<"  } "<<endl<<endl<<endl<<endl;

    unsigned c, i, j, k, n, m, a[11][11], x, y;
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
     cout<<" Numarul de arce este: m="; cin>>m;
     if (m<0||m>(n*(n-1)))
        cout<<"Numarul de arce trebuie sa fie cel mult egal cu "<<(n*(n-1))<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1)));

    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            a[i][j]=0;
    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);

         a[x][y]++;
        while (a[x][y]>1)
        {
            if (a[x][y]>1)
                {cout<<"Acest arc a fost introdus anterior. Introdu din nou extremitatile arcului."<<endl; a[x][y]--;}
            do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++;  cout<<endl;
        }
        cout<<endl;
    }

    cout<<" Se va afisa:"<<endl; mult_arce(a,n);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>c;
    }
   while (c!=2);
   if (c==2) meniu37();
}
else
    if (k==2)
        meniu37();
}

void meniu4()
{system("color 06");
   system("cls");
   int i;

cout<<"                                                                                 CONEXITATE"<<endl<<endl<<endl<<endl<<endl;

cout<<"                                                                             4.1. Definitie graf conex"<<endl<<endl;
cout<<"                                                                             4.2. Defintie componenta conexa"<<endl<<endl;
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


void meniu41()
{
    system("color 0E");
   system("cls"); int i;
   cout<<"                                                                          DEFINTIE GRAF CONEX"<<endl<<endl<<endl<<endl<<endl;

   cout<<"Fie G = (X, U) un graf orientat. Graful este conex daca oricare ar fi doua varfuri ale sale, exista un lant care le are ca extremitati."<<endl<<endl<<endl<<endl;

   do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu4();
}

 void meniu42()
 {
     system("color 0E");
   system("cls"); int i;
cout<<"                                                                         DEFINITIE COMPONENTA CONEXA"<<endl<<endl<<endl<<endl<<endl;

cout<<"	   Se numeste componenta conexa a grafului G=(X, U), un subgraf G1=(Y, U1) a lui G, conex, cu proprietatea ca nu exista nici un lant care sa"<<endl;
cout<<" lege un nod din Y cu un nod din X-Y (pentru orice nod, nu exista un lant intre acel nod si nodurile care fac parte din subgraf)."<<endl<<endl<<endl<<endl;

   do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu4();

 }


void meniu5()
{system("color 07");
   system("cls");
   int i;
cout<<"                                                                                 TARE CONEXITATE"<<endl<<endl<<endl<<endl<<endl;

cout<<"                                                                             5.1. Definitii (graf tare conex, componenta tare conexa)"<<endl<<endl;
cout<<"                                                                             5.2. Verificare graf tare conex"<<endl<<endl;
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


void meniu51()
{
   system("color 07");
   system("cls");
   int i;
   cout<<"                                                                     DEFINITII GRAF TARE CONEX. COMPONENTA TARE CONEXA"<<endl<<endl<<endl<<endl<<endl;

   cout<<"  GRAF TARE CONEX"<<endl;
   cout<<"      Fie G = (X, U) un graf orientat. Graful se numeste tare conex daca pentru oricare doua noduri x si y  exista un drum de la x la y precum si"<<endl;
   cout<<" un drum de la y la x."<<endl;


   cout<<"  COMPONENTE TARE CONEXE"<<endl;
   cout<<"      Se numeste componenta tare conexa un subgraf tare conex si maximal in raport cu aceasta calitate. ( daca am mai adauga un nod, n-ar mai fi"<<endl;
   cout<<" tare conex)"<<endl<<endl;

   cout<<"Exemplu:"<<endl;
   cout<<" G=(X,U), X={1,2,3,4,5,6,7,8}, U={(1,2), (1,3), (3,1), (3,4), (4,1), (4,2), (2,5), (5,7), (7,8), (8,6), (6,5)}"<<endl;
   cout<<"Graful nu este tare conex. El contine trei componente tare conexe:"<<endl;
   cout<<"1 3 4"<<endl;
   cout<<"2"<<endl;
   cout<<"5 6 7 8"<<endl<<endl;
   cout<<" Obs: Un nod al grafului face parte dintr-o singura componenta tare conexa. Daca ar face parte din doua compoennte tare conexe, ele s-ar "<<'"'<<"reuni"<<'"'<<" prin"<<endl;
   cout<<" intermediul acelui nod."<<endl<<endl<<endl<<endl<<endl;

   do
    {
     cout<<"Introdu 2 pentru a reveni la meniul anterior."; cin>>i;
    }
    while (i!=2);

    if (i==2) meniu5();
}

void roy_warshall_tc (unsigned a[11][11], unsigned n)
{
    unsigned i, j, k;
    for (k=1; k<=n; k++)
        for (i=1; i<=n; i++)
            for (j=1; j<=n; j++)
                if ((a[i][j]==0) && (i!=k) && (j!=k))
                    a[i][j]=a[i][k]*a[k][j];
}
void verificare_tare_conex (unsigned a[11][11], unsigned n)
{
    unsigned i, j, ok=1;
    for (i=1; i<=n && ok==1; i++)
        for (j=1; j<=n && ok==1; j++)
            if (a[i][j]==0)
                ok=0;
    if (ok==1)
        cout<<"Graful este tare conex";
     else
        cout<<"Graful nu este tare conex";
}

void meniu52()
{
    system("color 07");
   system("cls");
   cout<<"Program pentru verificarea unui graf orientat tare conex:"<<endl;
 cout<<"   #include <iostream>"<<endl;
 cout<<"   using namespace std;"<<endl;
 cout<<"   unsigned n, a[11][11], m, x, y;"<<endl;
 cout<<"   void citire (unsigned a[11][11], unsigned &n, unsigned &m)"<<endl;
 cout<<"        {"<<endl;
 cout<<"            unsigned i;"<<endl;
 cout<<"            cin>>n>>m;"<<endl;
 cout<<"            for (i=1; i<=m; i++)"<<endl;
 cout<<"                {cin>>x>>y; a[x][y]++;}"<<endl;
 cout<<"        }"<<endl;
 cout<<"    void roy_warshall (unsigned a[11][11])"<<endl;
 cout<<"        {"<<endl;
 cout<<"            unsigned i, j, k;"<<endl;
 cout<<"            for (k=1; k<=n; k++)"<<endl;
 cout<<"                for (i=1; i<=n; i++)"<<endl;
 cout<<"                     for (j=1; j<=n; j++)"<<endl;
 cout<<"                        if ((a[i][j]==0) && (i!=k) && (j!=k))"<<endl;
 cout<<"                            a[i][j]=a[i][k]*a[k][j];"<<endl;
 cout<<"        }"<<endl;
 cout<<" void verificare (unsigned a[11][11])"<<endl;
 cout<<"        {"<<endl;
 cout<<"            unsigned i, j, ok=1;"<<endl;
 cout<<"            for (i=1; i<=n && ok==1; i++)"<<endl;
 cout<<"                for (j=1; j<=n && ok==1; j++)"<<endl;
 cout<<"                     if (a[i][j]==0)"<<endl;
 cout<<"                        ok=0;"<<endl;
 cout<<"            if (ok==1)"<<endl;
 cout<<"                cout<<"<<'"'<<"Graful este tare conex"<<'"'<<";"<<endl;
 cout<<"             else"<<endl;
 cout<<"                cout<<"<<'"'<<"Graful nu este tare conex"<<'"'<<";"<<endl;
 cout<<"        }"<<endl;
 cout<<" int main()"<<endl;
 cout<<"    {"<<endl;
 cout<<"        citire(a,n,m); roy_warshall(a); verificare(a);"<<endl;
 cout<<"        return 0;"<<endl;
 cout<<"    }"<<endl<<endl<<endl<<endl;

 unsigned n, i, j, c, k, a[11][11], m, x, y;

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
     cout<<" Numarul de arce este: m="; cin>>m;
     if (m<0||m>(n*(n-1)))
        cout<<"Numarul de arce trebuie sa fie cel mult egal cu "<<(n*(n-1))<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1)));

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
         a[x][y]++;
        while (a[x][y]>1 && a[y][x]>1)
        {
            if (a[x][y]>1 && a[y][x]>1)
                {cout<<"Acest arc a fost introdus anterior. Introdu din nou extremitatile arcului."<<endl; a[x][y]--;}
            do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; cout<<endl;
        }
    }

    cout<<"Se va afisa:"<<endl; roy_warshall_tc (a,n); verificare_tare_conex(a,n);

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

cout<<"                                                                                     APLICATII"<<endl<<endl<<endl<<endl<<endl;

cout<<"                                                                              6.1. Aplicatie 1"<<endl<<endl;
cout<<"                                                                              6.2. Aplicatie 2"<<endl<<endl;
cout<<"                                                                              6.3. Aplicatie 3"<<endl<<endl;
cout<<"                                                                              6.4. Revenire"<<endl<<endl<<endl<<endl<<endl;


    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 6.1, introdu 61):"; cin>>i;
    }
    while (i<61 || i>64);

    if (i==61) meniu61();
    if (i==62) meniu62();
    if (i==63) meniu63();
    if (i==64) meniu_principal();
}

void aplicatie1 (unsigned n, unsigned a[11][11], unsigned drum[46], unsigned nr)
{
    unsigned  i, j, k, ok=1;
    for (k=1; k<=n; k++)
        for (i=1; i<=n; i++)
            for (j=1; j<=n; j++)
                if (a[i][j] == 0 && i!=k && j!=k)
                    a[i][j]= a[i][k]*a[k][j];

    for (i=1; i<nr && ok==1; i++)
        for (j=i+1; j<=nr && ok==1; j++)
            if (drum[i]==drum[j])
                ok=0;
    if (a[drum[1]][drum[nr]]==1)
        if (ok==1)
            cout<<"Secventa din fisier reprezinta un drum elementar";
         else
            cout<<"Secventa din fisier reprezinta un drum ne-elementar";
     else
        cout<<"Secventa din fisier nu reprezinta un drum";
}
void meniu61()
{
    system("color 0A");
   system("cls");

   cout<<" Aplicatie 1:"<<endl<<endl;

   cout<<"      Fie un graf orientat G=(X,U) si un vector cu elemente din multimea X a grafului. Se citesc de la tastatura numarul de varfuri, de arce si extremitatile"<<endl;
   cout<<"  acestora, iar din fisierul "<<'"'<<"drum.txt"<<'"'<<" elementele vectorului ce reprezinta o secventa de varfuri din graf. Sa se verifice daca secventa"<<endl;
   cout<<" din fisier reprezinta un drum elementar, ne-elementar, sau daca nu reprezinta un drum, afisandu-se un mesaj corespunzator"<<endl<<endl<<endl;

   cout<<" Exemplu:"<<endl<<endl;
   cout<<" Pentru graful G=(X,U), X={1,2,3,4} (adica n=4), U={(1,2),(2,3),(3,4),(4,1),(4,2)} (adica m=5 si extremitatile anterioare), iar in fisierul"<<endl;
   cout<<" drum.txt: drum=(2,3,4,1), se va afisa:"<<endl;
   cout<<"                               Secventa din fisier reprezinta un drum elementar"<<endl<<endl<<endl;

   cout<<"Rezolvare:"<<endl<<endl;

  cout<<" #include <iostream>"<<endl;
  cout<<" #include <fstream>"<<endl;
  cout<<" using namespace std;"<<endl;
  cout<<" struct arc"<<endl;
  cout<<"      {unsigned x, y;};"<<endl;
  cout<<"  int main()"<<endl;
  cout<<"  {unsigned n, m, i, j, k, ok=1; "<<endl;
  cout<<"  cin>>n>>m; arc v[n+1]; unsigned a[n+1][n+1], drum[m+1];"<<endl;
  cout<<"  for (i=1; i<=n; i++)"<<endl;
  cout<<"     for (j=1; j<=n; j++)"<<endl;
  cout<<"          a[i][j]=0;"<<endl;
  cout<<"  for (i=1; i<=m; i++)"<<endl;
  cout<<"     {cin>>v[i].x>>v[i].y; a[v[i].x][v[i].y]=1;}"<<endl;
  cout<<"  for (k=1; k<=n; k++)"<<endl;
  cout<<"    for (i=1; i<=n; i++)"<<endl;
  cout<<"       for (j=1; j<=n; j++)"<<endl;
  cout<<"            if (a[i][j] == 0 && i!=k && j!=k)"<<endl;
  cout<<"              a[i][j]= a[i][k]*a[k][j];"<<endl;
  cout<<" ifstream f("<<'"'<<"drum.txt"<<'"'<<");"<<endl;
  cout<<" i=1;"<<endl;
  cout<<" while (f>>drum[i])"<<endl;
  cout<<"    i++;"<<endl;
  cout<<"  k=i-1;"<<endl;
  cout<<"  for (i=1; i<k && ok==1; i++)"<<endl;
  cout<<"    for (j=i+1; j<=k && ok==1; j++)"<<endl;
  cout<<"        if (drum[i]==drum[j])"<<endl;
  cout<<"            ok=0;"<<endl;
  cout<<"  if (a[drum[1]][drum[k]]==1)"<<endl;
  cout<<"    if (ok==1)"<<endl;
  cout<<"        cout<<"<<'"'<<"Secventa din fisier reprezinta un drum elementar"<<'"'<<";"<<endl;
  cout<<"      else"<<endl;
  cout<<"        cout<<"<<'"'<<"Secventa din fisier reprezinta un drum ne-elementar"<<'"'<<";"<<endl;
  cout<<"   else"<<endl;
  cout<<"    cout<<"<<'"'<<"Secventa din fisier nu reprezinta un drum"<<'"'<<";"<<endl;
  cout<<"    return 0;"<<endl;
  cout<<"}"<<endl<<endl<<endl<<endl;

   unsigned n, m, nr, i, j, c, k, x, y;

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
    unsigned a[11][11];

    for (i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            a[i][j]=0;
    do
    {
     cout<<" Numarul de arce este: m="; cin>>m;
     if (m<0||m>(n*(n-1)))
        cout<<"Numarul de arce trebuie sa fie cel mult egal cu "<<n*(n-1)<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1)));
    unsigned drum[46];

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
         a[x][y]++;
        while (a[x][y]>1)
        {
            if (a[x][y]>1)
                {cout<<"Acest arc a fost introdus anterior. Introdu din nou extremitatile arcului."<<endl; a[x][y]--;}
            do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; cout<<endl;
        }
    }


    cout<<"Numarul de varfuri ale drumului este: "; cin>>nr;

    for(i=1; i<=nr; i++)
    {
        do{
            cout<<"drum["<<i<<"]="; cin>>drum[i];
            if (drum[i]>n)
                cout<<"Varful trebuie sa fie mai mic decat "<<n<<". Introdu din nou varful.";
        }
        while (drum[i]>n);
    }

    cout<<"Se va afisa:"<<endl; aplicatie1(n,a,drum,nr);

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

unsigned grad_ext_cel (unsigned x, unsigned n, unsigned a[11][11])
{
    unsigned gr=0, j;
    for (j=1; j<=n; j++)
        if (a[x][j]==1) gr++;
    return gr;
}
unsigned grad_int_cel (unsigned x, unsigned n, unsigned a[11][11])
{
    unsigned gr=0, i;
    for (i=1; i<=n; i++)
        if (a[i][x]==1) gr++;
    return gr;
}

void celebritate(unsigned a[11][11], unsigned n, unsigned m)
{unsigned i, ok=0;

for (i=1; i<=n; i++)
    if (grad_int_cel(i,n,a)==n-1 && grad_ext_cel(i,n,a)==0)
        ok=1;
if (ok==1)
    cout<<"Exista in grup o celebritate";
 else
    cout<<"Nu exista in grup o celebritate";
}


void meniu62()
{
    system("color 0A");
   system("cls");

   cout<<" Aplicatie 2:"<<endl<<endl;

   cout<<"      Se da un grup format din n persoane, care se cunosc sau nu intre ele. De la tastatura se introduc m perechi de numere intregi (x,y) cu semnificatia:"<<endl;
   cout<<" persoana x o cunoaste pe persoana y. Relatia de cunostinta nu este neaparat reciproca. Numim celebritate, o persoana care este cunoscuta de catre toate"<<endl;
   cout<<" celelalte persoane din grup, dar ea nu cunoaste pe nici un alt membru al grupului. Sa se determine daca in grup exista sau nu o astfel de celebritate."<<endl<<endl<<endl;

   cout<<"Rezolvare: (se va folosi principiul grafului orientat)"<<endl<<endl;

    cout<<"#include <iostream>"<<endl;
    cout<<"using namespace std;"<<endl;
    cout<<"unsigned n, m, x, y, a[11][11];"<<endl;
    cout<<"unsigned grad_ext (unsigned x)"<<endl;
    cout<<"{"<<endl;
    cout<<"   unsigned gr=0, j;"<<endl;
    cout<<"   for (j=1; j<=n; j++)"<<endl;
    cout<<"        if (a[x][j]==1) gr++;"<<endl;
    cout<<"    return gr;"<<endl;
    cout<<"}"<<endl;
    cout<<"unsigned grad_int (unsigned x)"<<endl;
    cout<<"{   "<<endl;
    cout<<"    unsigned gr=0, i;"<<endl;
    cout<<"    for (i=1; i<=n; i++)"<<endl;
    cout<<"       if (a[i][x]==1) gr++;"<<endl;
    cout<<"    return gr;"<<endl;
    cout<<"}"<<endl;
    cout<<"int main()"<<endl;
    cout<<"{unsigned i, ok=0;"<<endl;
    cout<<"cin>>n>>m; "<<endl;
     cout<<"for (i=1; i<=m; i++)"<<endl;
    cout<<"    {"<<endl;
    cout<<"        cin>>x>>y; a[x][y]=1;"<<endl;
    cout<<"    }"<<endl;
    cout<<"for (i=1; i<=n; i++)"<<endl;
    cout<<"    if (grad_int(i)==n-1 && grad_ext(i)==0)  // celebritate = cunoscut de toti dar nu cunoaste pe nimeni"<<endl;
    cout<<"        ok=1;"<<endl;
    cout<<"if (ok==1)"<<endl;
    cout<<"    cout<<"<<'"'<<"Exista in grup o celebritate"<<'"'<<";"<<endl;
    cout<<" else"<<endl;
    cout<<"    cout<<"<<'"'<<"Nu exista in grup o celebritate"<<'"'<<";"<<endl;
    cout<<"return 0;"<<endl;
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
     cout<<" Numarul de arce este: m="; cin>>m;
     if (m<0||m>(n*(n-1)))
        cout<<"Numarul de arce trebuie sa fie cel mult egal cu "<<n*(n-1)<<'!'<<endl;
    }
    while (m<0||m>(n*(n-1)));

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (x<=0 || x>n);
        do{
            cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
            if ((y<=0 || y>n) || x==y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((y<=0 || y>n) || x==y);
        cout<<endl;
         a[x][y]++;
        while (a[x][y]>1)
        {
            if (a[x][y]>1)
                {cout<<"Acest arc a fost introdus anterior. Introdu din nou extremitatile arcului."<<endl; a[x][y]--;}
            do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>x;
            if (x<=0 || x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (x<=0 || x>n);
            do{
                cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>y;
                if ((y<=0 || y>n) || x==y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((y<=0 || y>n) || x==y);
            a[x][y]++; cout<<endl;
        }
    }
   cout<<endl<<endl<<"Se va afisa:"<<endl; celebritate(a,n,m);
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

struct arc_cost
{
    unsigned x, y; int cost;
}w[46];

void cost_mediu(unsigned a[11][11], unsigned n, unsigned m, int s)
{
    unsigned i,j;
    for (i=1; i<=n; i++)
        {  for (j=1; j<=n; j++)
               cout<<a[i][j]<<' ';
        cout<<endl;
        }
    cout<<(float) s/m;
}

void meniu63()
{
    system("color 0A");
   system("cls");

   cout<<"      Se defineste un arc al unui graf orientat ca o inregistrare cu trei campuri: varful din care iese arcul, varful in care intra arcul si un cost"<<endl;
   cout<<" asociat arcului (un numar intreg). Definim un graf orientat ca un vector de arce. Fiind dat vectorul de arce al unui graf orientat G=(X,U) cu"<<endl;
   cout<<" m arce si n varfuri, sa se construiasca si sa se afiseze matricea de adiacenta, apoi sa se determine costul mediu al grafului (media aritmetica"<<endl;
   cout<<" a costurilor arcelor)."<<endl<<endl<<endl;

   cout<<" Rezolvare:"<<endl<<endl;

    cout<<"#include <iostream>"<<endl;
    cout<<"using namespace std;"<<endl;
    cout<<"struct arc"<<endl;
    cout<<"{"<<endl;
    cout<<"  unsigned x, y; int cost;"<<endl;
    cout<<"};"<<endl;
    cout<<"int main()"<<endl;
    cout<<"{ "<<endl;
    cout<<"  unsigned n, m, i, j; int s=0;"<<endl;
    cout<<"  cin>>n>>m; arc v[m+1]; unsigned a[n+1][n+1];"<<endl;
    cout<<"  for (i=1; i<=n; i++)"<<endl;
    cout<<"      for (j=1; j<=n; j++)"<<endl;
    cout<<"          a[i][j]=0;"<<endl;
    cout<<"  for (i=1; i<=m; i++)"<<endl;
    cout<<"    {   cin>>v[i].x>>v[i].y>>v[i].cost;"<<endl;
    cout<<"        a[v[i].x][v[i].y]=1;"<<endl;
    cout<<"        s+=v[i].cost;"<<endl;
    cout<<"    }"<<endl;
    cout<<"  for (i=1; i<=n; i++)"<<endl;
    cout<<"    {  for (j=1; j<=n; j++)"<<endl;
    cout<<"           cout<<a[i][j]<<' ';"<<endl;
    cout<<"    cout<<endl;"<<endl;
    cout<<"    }"<<endl;
    cout<<"  cout<<(float) s/m;"<<endl;
    cout<<"  return 0;"<<endl;
    cout<<"}"<<endl<<endl<<endl<<endl;

unsigned n, m, i, j, x, y, a[11][11], k, c; int s=0;

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
     cout<<" Numarul de arce este: m="; cin>>m;
     if (m<0||m>(n*(n-1)))
        cout<<"Numarul de arce trebuie sa fie cel mult egal cu "<<n*(n-1)<<'!'<<endl;
    }
    while (m<0||m>n*(n-1));

    for (i=1; i<=m; i++)
    {
        do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>w[i].x;
            if (w[i].x<=0 || w[i].x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
          }
        while (w[i].x<=0 ||w[i].x>n);
        do{
            cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>w[i].y;
            if ((w[i].y<=0 || w[i].y>n) || w[i].x==w[i].y)
                cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
          }
        while ((w[i].y<=0 || w[i].y>n) || w[i].x==w[i].y);
        cout<<endl;
         a[w[i].x][w[i].y]++;
        while (a[w[i].x][w[i].y]>1)
        {
            if (a[w[i].x][w[i].y]>1)
                {cout<<"Acest arc a fost introdus anterior. Introdu din nou extremitatile arcului."<<endl; a[w[i].x][w[i].y]--;}
            do{
            cout<<"Prima extremitate a arcului "<<i<<" este: "; cin>>w[i].x;
            if (w[i].x<=0 || w[i].x>n)
                cout<<"Extremitatea trebuie sa se afle printre varfuri!"<<endl;
            }
            while (w[i].x<=0 || w[i].x>n);
            do{
                cout<<"A doua extremitate a arcului "<<i<<" este: "; cin>>w[i].y;
                if ((w[i].y<=0 || w[i].y>n) || w[i].x==w[i].y)
                    cout<<"Extremitatea trebuie sa se afle printre varfuri si sa fie diferita de prima extremitate!"<<endl;
            }
            while ((w[i].x<=0 || w[i].y>n) || w[i].x==w[i].y);
            a[w[i].x][w[i].y]++; cout<<endl;
        }
        cout<<"Costul asociat arcului "<<i<<" este: "; cin>>w[i].cost; s+=w[i].cost;
        cout<<endl;
    }
   cout<<endl<<endl<<"Se va afisa:"<<endl; cost_mediu(a,n,m,s);
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
{system("color 08");
   system("cls");
   char i; unsigned total=0;

cout<<"                                                                            TEST"<<endl;
cout<<"                                                                      GRAFURI ORIENTATE"<<endl<<endl<<endl<<endl<<endl;

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

   cout<<"(5p) 1. Se da un graf orientat cu 5 noduri reprezentat prin matricea de adiacenta de mai jos. Numarul de arce din graf este ... "<<endl;
   cout<<"           0 0 1 0 0"<<endl;
   cout<<"           1 0 1 1 0"<<endl;
   cout<<"           0 0 0 0 0"<<endl;
   cout<<"           0 0 1 0 1"<<endl;
   cout<<"           0 1 1 0 0"<<endl<<endl;
   cout<<"          a) 8"<<endl;
   cout<<"          b) 16"<<endl;
   cout<<"          c) 4"<<endl;
   cout<<"          d) 6"<<endl<<endl<<endl;

   do
    {
        cout<<"Introdu una din literele a, b, c, d. Varianta corecta este: "; cin>>raspuns;
    }
   while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='a' || raspuns=='A')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;


   cout<<"(5p) 2. Se considera un graf orientat cu 6 noduri, numerotate de la 1 la 6, si cu urmatoarea multime de arce:"<<endl;
   cout<<"          - de la nodul numerotat cu 1 la cel numerotat cu 6;"<<endl;
   cout<<"          - de la fiecare nod numerotat cu un numar prim i (1<=i<=7) la nodul numerotat cu i-1;"<<endl;
   cout<<"          - de la fiecare nod numerotat cu un numar care nu este prim i (i>1) la toate nodurile numerotate cu numere ce apartin multimii"<<endl;
   cout<<"      divizorilor proprii ai lui i (diferiti de 1 si i)."<<endl;
   cout<<"      Drumul elementar cu lumgimea cea mai mare este:"<<endl;
   cout<<"          a) (3,6,2,1)"<<endl;
   cout<<"          b) (5,4,2,1,6,3)"<<endl;
   cout<<"          c) (5,4,2,1,6,2,1)"<<endl;
   cout<<"          d) (5,4,2,1,6,3,2)"<<endl<<endl<<endl;

   do
    {
        cout<<"Introdu una din literele a, b, c, d. Varianta corecta este: "; cin>>raspuns;
    }
   while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='b' || raspuns=='B')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;


   cout<<"(5p) 3. Consideram graful orientat in care avem 4 noduri care au gradul interior egal cu 1. Daca suma gradelor exterioare este egala cu 4,"<<endl;
   cout<<" care este valoarea maxima pe care o poate avea gradul exterior al unui nod din graful dat?"<<endl;
   cout<<"          a) 2"<<endl;
   cout<<"          b) 3"<<endl;
   cout<<"          c) 4"<<endl;
   cout<<"          d) 5"<<endl<<endl<<endl;

   do
    {
        cout<<"Introdu una din literele a, b, c, d. Varianta corecta este: "; cin>>raspuns;
    }
   while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='c' || raspuns=='C')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;


   cout<<"(5p) 4. Numarul grafurilor orientate complete cu 4 noduri este:"<<endl;
   cout<<"          a) 81"<<endl;
   cout<<"          b) 64"<<endl;
   cout<<"          c) 512"<<endl;
   cout<<"          d) 729"<<endl<<endl<<endl;

   do
    {
        cout<<"Introdu una din literele a, b, c, d. Varianta corecta este: "; cin>>raspuns;
    }
   while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='d' || raspuns=='D')
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

   cout<<"(5p) 5. Fie graful orientat G=(X,U), X={1,2,3,4}. Numarul de grafuri turneu care se pot obtine este: 64."<<endl<<endl;

   do
    {
        cout<<"Introdu A daca propozitia este adevarata sau F daca este falsa:"; cin>>raspuns;
    }
   while (strchr("AaFf",raspuns)==0);

if (raspuns=='a' || raspuns=='A')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;

    cout<<" (5p) 6. Intr-un oras sunt 5 parcuri, notate cu A, B, C, D si E, care sunt conectate prin piste pentru biciclete, pe care se circula intr-un singur sens,"<<endl;
    cout<<" astfel: o pista de la parcul A catre parcul B, o pista de la parcul B catre parcul E, o pista de la parcul C catre parcul D, o pista de la parcul D catre"<<endl;
    cout<<" parcul C, o pista de la parcul E catre parcul A, o pista de la parcul E catre parcul C si o pista de la parcul E catre parcul D. Numarul minim de piste"<<endl;
    cout<<" pentru care trebuie schimbat sensul de circulatie, astfel incat graful orientat obtinut, in care parcurile reprezinta varfurile, iar pistele reprezinta"<<endl;
    cout<<" arcele, sa fie tare conex, este 2."<<endl;
    cout<<"                                                                                                                     (Simulare BAC Informatica 2024)"<<endl;

   do
    {
        cout<<"Introdu A daca propozitia este adevarata sau F daca este falsa:"; cin>>raspuns;
    }
   while (strchr("AaFf",raspuns)==0);

if (raspuns=='f' || raspuns=='F')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;

   cout<<"(5p) 7. O companie de colectare a fructelor are 6 depozite, numerotate de la 1 la 6: depozitele 1, 3 si 5 contin mere, depozitele 2 si 4 contin pere,"<<endl;
   cout<<" iar depozitul 6 contine piersici. Compania a construit 4 benzi de transport unidirectional: de la depozitul 1 la depozitul 5, de la depozitul 5 la "<<endl;
   cout<<" depozitul 2, de la depozitul 5 la depozitul 4 si de la depozitul 6 la depozitul 1. Daca depozitele reprezinta varfurile unui graf orientat, iar benzile"<<endl;
   cout<<" de transport reprezinta arcele acestuia, numarul minim de benzi de transport care pot fi adaugate, astfel incat graful obtinut sa aiba trei componente"<<endl;
   cout<<" tare conexe, fiecare dintre acestea avand varfuri care corespund depozitelor cu acelasi tip de fructe este 3."<<endl;
   cout<<"                                                                                                                      (BAC Informatica iun-iul 2023)"<<endl<<endl;

   do
    {
        cout<<"Introdu A daca propozitia este adevarata sau F daca este falsa:"; cin>>raspuns;
    }
   while (strchr("AaFf",raspuns)==0);

if (raspuns=='f' || raspuns=='F')
    {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;

   cout<<"(5p) 8. Intr-o zona sunt 23 de obiective turistice, numerotate de la 1 la 23; zona este reprezentata ca un graf orientat in care varfurile corespund "<<endl;
   cout<<" acestor obiective, iar arcele sunt stabilite in functie de modalitatea de deplasare intre doua obiective, astfel: de la fiecare obiectiv numerotat"<<endl;
   cout<<" cu i (1<=i<=23) se poate merge direct doar la obiectivul numerotat cu 2*i, daca acesta exista, sau doar la obiectivul numerotat cu i-1, in caz contrar."<<endl;
   cout<<" Numarul maxim de varfuri ale unui drum elementar in acest graf, cu extremitatea initiala 1, este 16. "<<endl;
   cout<<"                                                                                                                (BAC Informatica Ses. Speciala 2023)"<<endl<<endl;


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

   cout<<"Pentru intrebarea 9, introdu un scurt raspuns."<<endl;
   cout<<"Pentru intrebare 10, tasteaza literele corespunzatoare raspunsurilor corecte."<<endl<<endl;

   cout<<"(30p) 9. Intr-un magazin sunt 8 raioane, distribuite in trei zone importante, in fiecare zona fiind un numar par, nenul, de raioane. In scopul fluidificarii"<<endl;
   cout<<" deplasarii clientilor se marcheaza unele culoare, astfel incat fiecare culoar sa conecteze doua raioane, iar deplasarea pe el sa se faca intr-un singur sens."<<endl;
   cout<<" Se realizeaza o harta, sub forma unui graf orientat, in care varfurile reprezinta raioanele din magazin, iar arcele reprezinta culoarele marcate. Indicati"<<endl;
   cout<<" numarul maxim de culoare care se pot marca, astfel incat graful sa aiba trei componente tare conexe, fiecare componenta fiind reprezentarea pe harta a"<<endl;
   cout<<" cate uneia dintre cele trei zone importante din magazin."<<endl;
   cout<<"                                                                                                              (Simulare BAC Informatica 2023)"<<endl<<endl;

   cout<<" Raspunsul corect este:"; cin.get (s, 11); cin.get();

    if (strcmp(s, "36")==0)
        {total+=30; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
     else
        cout<<endl<<"Raspuns gresit!"<<endl<<endl<<endl<<endl;

   cout<<"(20p) 10. Fie un graf orientat cu 7 noduri, numerotate de la 1 la 7 si arcele [1,2], [1,3], [2,3], [3,4], [4,5], [5,6], [6,7], [7,1], [7,4]. Pentru ca"<<endl;
   cout<<" fiecare varf sa aiba atat gradul interior cat si cel exterior un numar impar, trebuie eliminate arcele:"<<endl<<endl;

   cout<<"      a) [1,2]"<<endl;
   cout<<"      b) [1,3["<<endl;
   cout<<"      c) [5,6]"<<endl;
   cout<<"      d) [7,4]"<<endl;

   cout<<" Raspunsul este:";  cin.get (s, 11); cin.get();

   cout<<" Variantele corecte sunt:"; cin.get (s, 11); cin.get();
    for (i=0; i<strlen(s); i++)
        if (strchr(" ,.;/:*[]{}()", s[i])!=NULL)
            {strcpy (s+i, s+i+1); i--;}
    for (i=0; i<strlen(s)-1; i++)
        if (s[i]>s[i+1])
            {aux=s[i]; s[i]=s[i+1]; s[i+1]=aux;}
    strlwr(s);

    if (strcmp(s, "bd")==0)
        {total+=20; cout<<endl<<"Raspuns corect!"<<endl<<endl<<endl<<endl;}
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
    meniu7();
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
cout<<"1.	s"<<endl;
cout<<"2.	b"<<endl;
cout<<"3.	c"<<endl;
cout<<"4.	d"<<endl<<endl;

cout<<"PARTEA A II-A"<<endl<<endl;
cout<<"5.	A (adevarat)"<<endl;
cout<<"6.	F (fals)"<<endl;
cout<<"7.	F (fals)"<<endl;
cout<<"8.	A (adevarat)"<<endl<<endl;

cout<<"PARTEA A III-A"<<endl<<endl;
cout<<"9.	36"<<endl;
cout<<"10.	b, d"<<endl<<endl<<endl;

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
