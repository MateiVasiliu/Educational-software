#include<iostream>
#include<stdlib.h>
using namespace std;

void start();
void meniu_principal();
void meniu1();
void meniu21();
void meniu221();
void meniu222();
void meniu22();
void meniu231();
void meniu232();
void meniu23();
void meniu24();
void meniu25();
unsigned putere(unsigned n);
void meniu261();
float medie(unsigned n, int v[100]);
void meniu262();
void inserare(unsigned n, unsigned v[101]);
void meniu263();
void perfect(unsigned a, unsigned b, unsigned &k);
void meniu264();
void meniu26();
void meniu2();
void iesire();

int main(int argc, char *argv[])
{int i=1;
   if (argc > 1)
      i = atoi(argv[1]);
   else
      start();
   do
   {
     if(i==9) meniu_principal();
     cout<<"   Introdu numarul capitolului ales fara caracterul punct (ex: pt. 1.=> 1). Optiunea ta este:  ";cin>>i;
     if(i==1) meniu1();
     if(i==2) meniu2();
   }
   while (i!=3);
   if(i==3) iesire();

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
   cout<<"                                             *                               SUBPROGRAME                              *"<<endl;
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
   system("cls");
   cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
   cout<<"                                                                  1. Functii predefinite"<<endl<<endl;
   cout<<"                                                                  2. Functii definite de utilizator"<<endl<<endl;
   cout<<"                                                                  3. Iesire"<<endl<<endl<<endl;
   cout<<"                                                              "<<endl<<endl<<endl<<endl<<endl<<endl;


}
void meniu1()
{system("color 07");
   system("cls");
   int k;
    cout<<endl<<endl<<endl<<endl;
    cout<<"                                                                 1. Functii predefinite                             "<<endl<<endl<<endl;
    cout<<"                                                                                                         "<<endl;
    cout<<"     O functie este un ansamblu de instructiuni care prelucreaza un set de date de intrare, numite parametri sau argumente si    "<<endl;
    cout<<"obtine un rezultat, ce poate fi folosit intr o operatie de decizie sau scriere. Cand folosim functiile in operatii de deicizie, "<<endl;
    cout<<"acestea pot aparea in expresii ca operand, valoarea operandului fiind de fapt rezultatul functiei, obtinut in urma prelucrarii"<<endl;
    cout<<"valorilor curente ale parametrilor."<<endl;
    cout<<"     Cateva exemple pot fi remarcate in cazul problemelor de matematica sau siruri de caractere."<<endl<<endl;
    cout<<"     De exemplu, in C++ nu exista nicio operatie prin care sa calculam radacina patrata a unui numar real.              "<<endl;
    cout<<"Acest lucru poate fi realizat folosind functia sqrt, prin apelul: sqrt(7);"<<endl;
    cout<<"Acest apel poate fi realizat intr-o expresie:"<<endl<<endl;
    cout<<"      1. Operatie de scriere: cout<<sqrt(7);"<<endl<<endl;
    cout<<"      2. Operatie de decizie: if (sqrt(7)>3)"<<endl;
    cout<<"                                cout<<"<<'"'<<"da"<<'"'<<';'<<endl;
    cout<<"                              else"<<endl;
    cout<<"                                cout<<"<<'"'<<"nu"<<'"'<<';'<<endl<<endl;;
    cout<<"Despre orice functie, trebuie cunoscute niste informatii specifice, pentru a sti cum si cand o putem folosi:"<<endl;
    cout<<"    - numele functiei (identificatorul asociat acesteia)"<<endl;
    cout<<"    - numarul parametrilor (identificatorul asociat acestora)"<<endl;
    cout<<"    - tipul parametrilor (int, float, double, char)"<<endl;
    cout<<"    - tipul rezultatului (int, float, double, char)"<<endl<<endl<<endl;
    cout<<"Functii cu caracter matematic"<<endl<<endl;

    cout<<"  Denumirea functiei     Header/Biblioteca            Exemplu de apel                             Rezultatul returnat"<<endl<<endl;
    cout<<"          abs                                 int abs(int x)                    Valoarea absoluta a argumentului, |x|, numar intreg"<<endl;
    cout<<"       abs, fabs                              double fabs(double x)             Valoarea absoluta a argumentului, |x|, numar real"<<endl;
    cout<<"          sqrt                                double sqrt(double x)             Radacina patrata a argumentului"<<endl;
    cout<<"          pow                                 double pow(double x, double y)    Ridicarea la putere (x la pueterea y)"<<endl;
    cout<<"         floor                  cmath         double floor(double x)            Cel mai mare intreg mai mic sau egal cu x    "<<endl;
    cout<<"         ceil                                 double ceil(double x)             Cel mai mic intreg mai mare sau egal cu x   "<<endl;
    cout<<"         log10                                double log10(double x)            Logaritm in baza 10 din x"<<endl;
    cout<<"     sin, cos, tan                            double sin(double x),             Functiile trigonometrice sinus, cosinus, tangenta de x**"<<endl;
    cout<<"    asin, acos, atan                          double asin(double x, double y)   Functiile trigonometrice inverse de x si y***"<<endl<<endl<<endl;
    cout<<"* - double = tip de data ce cuprinde toate tipurile de date numerice cu dimensiune mai mica (unsigned, int, float)"<<endl;
    cout<<"** - functiile trigonometrice lucreaza cu valorile unghiurilor in radiani"<<endl;
    cout<<"*** - functiile trigonometrice inverse returneaza  masura unghiului format de segmentul determinat de origine si punctul (x,y) cu axa OX"<<endl<<endl<<endl;

    cout<<"Exemple de functii pentru prelucrarea sirurilor de caractere"<<endl<<endl;

    cout<<"   Denumirea functiei     Header/Biblioteca           Exemplu de apel                              Rezultatul returnat"<<endl<<endl;
    cout<<"         strlen                               strlen(char s[100])               Lungimea sirului de caractere citit in s      "<<endl;
    cout<<"         strcmp               cstring         strcmp(char s[100], char t[100])  Compara elementele celor doua siruri pana gaseste"<<endl;
    cout<<"                                                                                elemente diferite sau caracterul NULL        "<<endl;

    do
    {
            cout<<"   Tastati 9 pentru a reveni la meniu principal!"<<endl;
            cin>>k;
            if (k==9) meniu_principal();
    }
    while (k!=9);

}
void meniu21()
{system("color 07");
   system("cls");
   int k;
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                                  2.1. CLASIFICARE                           "<<endl<<endl<<endl;
   cout<<"      Orice problema poate fi impartita in subprobleme, astfel fiecare dintre acestea va avea instructiuni diferite ce vor produce"<<endl;
   cout<<" diferite efecte asupra datelor de intare. In programare, acestea poarta numele se subprograme, iar in limbajul C++ se numesc functii"<<endl;
   cout<<" (definite de utilizator) si sunt de doua tipuri:"<<endl<<endl;
   cout<<"       1. Functii de tip operand (functii cu tip) care returneaza un rezultat prin numele lor;"<<endl<<endl;
   cout<<"       2. Functii de tip procedural (unctii fara tip) care returneaza zero sau mai multe rezultate prin numele lor."<<endl<<endl<<endl;
   cout<<"      Aceste subprograme sunt diferite de functia principala si obligatorie main, iar ele contin tipuri de date, variabile si instructiuni"<<endl;
   cout<<" ce au ca scop anumite prelucrari (calcule, citiri, afisari) si, foarte important, nu pot fi executate decat daca sunt apelate."<<endl<<endl<<endl<<endl<<endl;

   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu2();
    }
   while (k!=2);

   }
void meniu221()
{system("color 07");
   system("cls");
   int k;
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                              2.2.1. Functii de tip operand                           "<<endl<<endl<<endl;
    cout<<"     O functie de tip operand se defineste cu ajutorul urmatoarei sintaxe:"<<endl<<endl;
    cout<<"                <tip_rezultat> <identificator/nume_functie>([lista_parametrilor_formali>)     // antetul functiei"<<endl;
    cout<<"                        {"<<endl;
    cout<<"                          set de instructiuni;                   // corpul functiei"<<endl;
    cout<<"                        }      "<<endl<<endl;
    cout<<"     unde:"<<endl;
    cout<<"     - tip_rezultat reprezinta tipul rezultatului calculat si returnat de functie si poate fi: unsigned, int, char, float, long etc.;"<<endl;
    cout<<"     - identificator/nume_functie  reprezinta identificatorul ascoiat functiei, ce este utilizat la apelul acesteia;"<<endl;
    cout<<"     - lista_parametrilor_formali  cuprinde declaratia parametrilor formali, separati prin virgula, pentru fiecare parametru "<<endl;
    cout<<"       precizandu-se tipul si numele. Aceasta poate lipsi pentru fuinctiile fara parametru."<<endl;
    cout<<"     - set_de_instructiuni cuprinde partea declarativa si instructiunile propriu-zise."<<endl<<endl;
    cout<<"         Corpul functiei trebuie sa contina cel putin o instructiune  return, aceasta fiind caracteristica functiilor de tip operand."<<endl;
    cout<<" Instructiunea  return  va specifica valoarea calculata si returnata de functie care trebuie sa fie de acelasi tip cu tipul functiei."<<endl<<endl<<endl<<endl;

    cout<<"    Exemplu de definitie a unei functii de tip operand:"<<endl<<endl;
    cout<<"          unsigned nrcifre(unsigned n)"<<endl;
    cout<<"            {"<<endl;
    cout<<"               unsigned k=0;"<<endl;
    cout<<"               while (n>0)"<<endl;
    cout<<"                 {"<<endl;
    cout<<"                    k++; n/=10;"<<endl;
    cout<<"                 }"<<endl;
    cout<<"               return k;"<<endl;
    cout<<"             }"<<endl<<endl<<endl<<endl<<endl;

    do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu22();
    }
   while (k!=2);

}
void meniu222()
{system("color 07");
   system("cls");
   int k;
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                              2.2.2. Functii de tip procedural                          "<<endl<<endl<<endl;
   cout<<"    O functie de tip procedural se defineste cu ajutorul urmatoarei sintaxe:"<<endl<<endl;
   cout<<"               <tip_rezultat> <identificator/nume_functie>([lista_parametrilor_formali])   //antetul functiei"<<endl;
   cout<<"                    {"<<endl;
   cout<<"                      set_de_instructiuni;                    // corpul functiei"<<endl;
   cout<<"                    }"<<endl<<endl;
   cout<<"     unde:"<<endl;
    cout<<"     - tip_rezultat este un cuvant cheie, mereu void, caracteristic functiilor de tip procedural;"<<endl;
    cout<<"     - identificator/nume_functie reprezinta identificatorul asociat functiei, ce este utilizat la apelul acesteia;"<<endl;
    cout<<"     - lista_parametrilor_formali cuprinde declaratia parametrilor formali, separati prin virgula, pentru fiecare parametru "<<endl;
    cout<<"       se precizandu-se tipul si numele. Aceasta poate lipsi pentru functiile fara parametru."<<endl;
    cout<<"     - set_de_instructiuni cuprinde partea declarativa si instructiunile propriu-zise,ce se vor executa la apelul functiei."<<endl<<endl;
    cout<<"     Functiile de tip procedural nu contin in corpul lor instructiunea return, elementul caracteristic fiind cuvantul-cheie void din antet"<<endl;
    cout<<" reprezentand tipul functiei. Daca acest cuvant lipseste, functia va fi implicit considerata de tip int, adica operand."<<endl;

    cout<<"   Exemplu de definitie de functie de tip procedural:"<<endl<<endl;
    cout<<"           void nrcifre(unsigned n)"<<endl;
    cout<<"              {"<<endl;
    cout<<"                 unsigned k=0;"<<endl;
    cout<<"                 while (n>0)"<<endl;
    cout<<"                     {"<<endl;
    cout<<"                     k++; n/=10;"<<endl;
    cout<<"                     }"<<endl;
    cout<<"                 cout<<k;"<<endl;
    cout<<"              }"<<endl<<endl<<endl<<endl<<endl;
    do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu22();
    }
   while (k!=2);

}
void meniu22()
{int i;
    system("color 0C");
   system("cls");
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                                      2.2. DEFINIRE                                  "<<endl<<endl<<endl;
cout<<"                                                                           "<<endl<<endl<<endl;
cout<<"                                                         2.2.1.Functii de tip operand                                   "<<endl<<endl<<endl;
cout<<"                                                         2.2.2.Functii de tip procedural                                "<<endl<<endl<<endl;
cout<<"                                                         2.2.3.Revenire la meniul anterior                               "<<endl<<endl<<endl;
do
    {cout<<"  Introdu numarul capitolului ales fara caracterul punct (ex: pt. 2.2.1.=>221). Optiunea ta este: ";
    cin>>i;
    if(i==223) meniu2();
     if(i==221) meniu221();
     if(i==222) meniu222();
    }
    while (i<221 || i>223);

}
void meniu231()
{system("color 07");
   system("cls");
   int k;
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                               2.3.1. Functii de tip operand                           "<<endl<<endl<<endl;
   cout<<"      Apelul unei functii reprezinta modul prin care functia este pusa in executie."<<endl;
   cout<<"      Apelul functiilor de tip operand se poate realiza ca operand intr-o expresie, ca un rezultat care poate fi folosit in diverse calcule."<<endl<<endl;
   cout<<"      Functiile de tip operand se regasesc in operatii de decizie sau de scriere, apelul de mai jos fiind obligatoriu sa apara in cadrul uneia dintre"<<endl;
   cout<<"  operatiile anterioare."<<endl;
   cout<<"      Instructiunea de apel a unei functii are urmatoarea sintaxa:"<<endl<<endl;
   cout<<"              <identificator/nume_functie>([lista_parametrilor_actuali]);"<<endl;
   cout<<"      unde:"<<endl;
   cout<<"     - identificator/nume functie reprezinta identificatorul asociat functiei, cel de la declararea functiei;"<<endl;
   cout<<"     - lista_parametrilor_actuali este formata dintr-o succesiune de parametri, separati prin virgula, ce se pot nota identic cu cei formali"<<endl<<endl;
   cout<<"  sau nu, si pot fi chiar constante, fara a fi introduse intr-o variabila;"<<endl;

   cout<<"       Parametri actuali utilizati la apelul functiilor trebuie sa respecte regulile:"<<endl;
   cout<<"             1. numarul parametrilor actuali trebuie sa fie egal cu cel al parametrilor formali ce au fost declarati la definitia functiei;"<<endl;
   cout<<"             2. se scriu dupa numele functiei, separati prin virgula si fara a li se mai preciza tipul;"<<endl;
   cout<<"             3. valorile parametrilor actuali se atribuie parametrilor formali exact in ordinea precizata la definirea functiei, iar fiecarui"<<endl;
   cout<<"       parametru formal ii corespunde un singur parametru actual de acelasi tip cu el."<<endl;
   cout<<"      La apelul unei functii, valorile parametrilor efectivi/actuali se atribuie parametrilor formali corespunzatori."<<endl;
   cout<<"      In cazul in care unul din tipul unui parametru actual este diferit de tipul parametrului formal corespunzator din antetul functiei,"<<endl;
   cout<<"  parametrul actual va fi convertit spre parametrul formal (daca este posibil, altfel compilatorul genereaza eroare)."<<endl<<endl<<endl;

   cout<<"    Exemplu:"<<endl<<endl<<endl;
   cout<<"        int nr_prime(unsigned a, unsigned b)"<<endl;
   cout<<"        {"<<endl;
   cout<<"            unsigned i, k=0;"<<endl;
   cout<<"            for (i=0; i<b; i++)"<<endl;
   cout<<"               {k=2;"<<endl;
   cout<<"                for (d=2; d<=i/2; d++)"<<endl;
   cout<<"                     if (i%d==0)"<<endl;
   cout<<"                          k++"<<endl;
   cout<<"                 if (k==2)"<<endl;
   cout<<"                    nr++;"<<endl;
   cout<<"               }"<<endl;
   cout<<"            return nr;"<<endl;
   cout<<"         }"<<endl<<endl<<endl;

   cout<<"   Exemple de apeluri corecte"<<endl<<endl;
   cout<<"   .............."<<endl;
   cout<<"    unsigned a,b;"<<endl;
   cout<<"   .............."<<endl;
   cout<<"    s=nr_prime(a,b);"<<endl;
   cout<<"    s=nr_prime(2, 28)"<<endl<<endl;
   cout<<"    ............."<<endl;
   cout<<"     unsigned c,d;"<<endl;
   cout<<"    ............."<<endl;
   cout<<"    cout<<nr_prime(c,d)+10;"<<endl<<endl;
   cout<<"    if(nr_prime(c,d)>0)"<<endl;
   cout<<"        cout<<"<<'"'<<"exista numere prime in intervalul citit"<<'"'<<endl;
   cout<<"      else"<<endl;
   cout<<"        cout<<"<<'"'<<"nu exista numere prime in intervalul citit"<<'"'<<endl<<endl<<endl;
   cout<<"    Observatii:"<<endl<<endl;
   cout<<"       1. In momentul in care se intalneste un apel de functie, controlul executiei programului este transferat primei instructiuni din functie,"<<endl;
   cout<<"    urmand a se efectua secvential instructiunile functiei."<<endl;
   cout<<"       Revenirea dintr-o functie se face in unul dintre urmatoarele cazuri:"<<endl;
   cout<<"           - dupa executia ultimei instructiuni din corpul functiei;"<<endl;
   cout<<"           - atunci cand, in functia apelata, se intalneste instructiunea return."<<endl;
   cout<<"       2. Pentru a apela o functie, aceasta trebuie mai intai definita. Astfel apelul unei functii trebuie precedat de definitia functiei"<<endl;
   cout<<"    respective. Ea poate fi apelata inainte de definire doar daca ii este precizat prototipul (antet + ;)"<<endl<<endl<<endl<<endl;
    do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu23();
    }
   while (k!=2);

}

void meniu232()
{system("color 07");
   system("cls");
   int k;
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                               2.3.2. Functii de tip procedural                          "<<endl<<endl<<endl;
   cout<<"       Apelul unei functii reprezinta modul prin care functia este pusa in executie."<<endl;
   cout<<"       Apelul functiilor de tip procedural se poate realiza printr-o instructiune de apel."<<endl;
   cout<<"       Instructiunea de apel a unei functii are urmatoarea sintaxa:"<<endl<<endl;
   cout<<"            <identificator/nume_functie>([lista_parametrilor_actuali]);"<<endl;
   cout<<"  unde:"<<endl;
   cout<<"     - identificator/nume functie reprezinta identificatorul asociat functiei, cel de la declararea functiei;"<<endl;
   cout<<"     - lista parametrilor actuali este formata dintr-o succesiune de parametri, separati prin virgula, ce se pot nota identic cu cei formali"<<endl<<endl;
   cout<<"  sau nu, si pot fi chiar constante, fara a fi introduse intr-o variabila;"<<endl<<endl;

   cout<<"       Parametri actuali utilizati la apelul functiilor trebuie sa respecte regulile:"<<endl;
   cout<<"             1. numarul parametrilor actuali trebuie sa fie egal cu cel al parametrilor formali ce au fost declarati la definitia functiei;"<<endl;
   cout<<"             2. se scriu dupa numele functiei, separati prin virgula si fara a li se mai preciza tipul;"<<endl;
   cout<<"             3. valorile parametrilor actuali se atribuie parametrilor formali exact in ordinea precizata la definirea functiei, iar fiecarui"<<endl;
   cout<<"          parametru formal ii corespunde un singur parametru actual de acelasi tip cu el."<<endl;
   cout<<"      La apelul unei functii, valorile parametrilor efectivi/actuali se atribuie parametrilor formali corespunzatori."<<endl;
   cout<<"      In cazul in care unul din tipul unui parametru actual difera de tipul parametrului formal corespunzator, parametrul actual va fi convertit"<<endl;
   cout<<"   spre parametrul formal (daca este posibil, altfel compilatorul genereaza eroare)."<<endl<<endl<<endl;

   cout<<"  Exemplu:"<<endl<<endl<<endl;
   cout<<"     void nr_cifre (unsigned n)"<<endl;
   cout<<"     {"<<endl;
   cout<<"        unsigned k=0;"<<endl;
   cout<<"        while (n>0)"<<endl;
   cout<<"          {"<<endl;
   cout<<"              k++; n/=10;"<<endl;
   cout<<"          }"<<endl;
   cout<<"        cout<<k;"<<endl;
   cout<<"     }"<<endl<<endl;
   cout<<"  Exemple de apeluri corecte"<<endl<<endl;
   cout<<"     nr_cifre(n);"<<endl;
   cout<<"     nr_cifre(x);"<<endl;
   cout<<"     nr_cifre(582496);"<<endl<<endl<<endl<<endl;
    do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu23();
    }
   while (k!=2);

}
void meniu23()
{int i;
    system("color 0C");
   system("cls");
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                                     2.3.  APELARE                                                "<<endl<<endl<<endl;
   cout<<"                                                                                       "<<endl<<endl<<endl;
cout<<"                                                               2.3.1.Functii de tip operand                                    "<<endl<<endl<<endl;
cout<<"                                                               2.3.2.Functii de tip procedural                                 "<<endl<<endl<<endl;
cout<<"                                                               2.3.3.Revenire la meniul anterior                               "<<endl<<endl<<endl;

do
    {cout<<"  Introdu numarul capitolului ales fara caracterul punct (ex: pt. 2.3.1.=>231). Optiunea ta este: ";
    cin>>i;
    if(i==233) meniu2();
    if(i==231) meniu231();
    if(i==232) meniu232();
    }
    while (i<231 || i>233);


}

void meniu24()
{system("color 07");
   system("cls");
   int k;
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                                      2.4. DECLARARE                                    "<<endl<<endl<<endl;
   cout<<"      Orice subprogram poate fi declarat prin doua metode:"<<endl;
   cout<<"1. DEFINITIE - scrierea subprogramului dupa structura generala <antet + corp functie>;"<<endl;
   cout<<"             - aceasta metoda obliga scrierea definitiei inainte de functia din care subprogramul este apelat."<<endl<<endl;
   cout<<"            <tip_rezultat><identificator_functie>([lista_parametrilor_formali])     // antet"<<endl;
   cout<<"                      {"<<endl;
   cout<<"                          <set_de_instructiuni>                                     //corp"<<endl;
   cout<<"                      }"<<endl<<endl;
   cout<<"2. PROTOTIP - antetul subprogramului + caracterul "<<';'<<endl;
   cout<<"            - aceasta metoda obliga scrierea prototipului inainte de functia in care se apeleaza, iar mai apoi definita oriunde in"<<endl;
   cout<<"             subprogram"<<endl<<endl;
   cout<<"            <tip_rezultat><identificator_functie>([lista_parametrilor_formali]);     "<<endl<<endl;
   cout<<" Observatie: Nu exista declararea unui subprogram fara a se scrie definitia acestuia."<<endl<<endl;

   cout<<" Exemplu - definitie:"<<endl;
   cout<<"      #include <iostream>"<<endl;
   cout<<"      using namespace std;"<<endl;
   cout<<"      void nr_prime (unsigned n, unsigned v[100])                 //antet     --------"<<endl;
   cout<<"          {                                                                           |"<<endl;
   cout<<"              unsigned i, k, d;                                                       |"<<endl;
   cout<<"              for (i=0; i<n; i++)                                                     |"<<endl;
   cout<<"                  { k=2;                                                              |"<<endl;
   cout<<"                    for (d=2; d<=v[i]/2; d++)                     //corp              |   definitia subprogramului"<<endl;
   cout<<"                          if (v[i]%d==0)                                              |"<<endl;
   cout<<"                              k++;                                                    |"<<endl;
   cout<<"                    if (k==2)                                                         |"<<endl;
   cout<<"                      cout<<v[i]<<"<<'"'<<' '<<'"'<<';'<<"                                                |"<<endl;
   cout<<"                  }                                                                   |"<<endl;
   cout<<"          }                                                                   --------"<<endl;
   cout<<"      int main()"<<endl;
   cout<<"      {"<<endl;
   cout<<"          unsigned n, i, v[100]"<<endl;
   cout<<"          cin>>n;"<<endl;
   cout<<"          for (i=0; i<n; i++)"<<endl;
   cout<<"              cin>>v[i];"<<endl;
   cout<<"          nr_prime(n,v);"<<endl;
   cout<<"          return 0;"<<endl;
   cout<<"       }"<<endl<<endl<<endl;

   cout<<" Exemplu - prototip:"<<endl;
   cout<<"      #include <iostream>"<<endl;
   cout<<"      using namespace std;"<<endl;
   cout<<"      void nr_prime (unsigned n, unsigned v[100]); // prototipul subprogramului"<<endl;
   cout<<"      int main()"<<endl;
   cout<<"      {"<<endl;
   cout<<"          unsigned n, i, v[100]"<<endl;
   cout<<"          cin>>n;"<<endl;
   cout<<"          for (i=0; i<n; i++)"<<endl;
   cout<<"              cin>>v[i];"<<endl;
   cout<<"          nr_prime(n,v);"<<endl;
   cout<<"          return 0;"<<endl;
   cout<<"       }"<<endl;
   cout<<"      void nr_prime (unsigned n, unsigned v[100])                 //antet     --------"<<endl;
   cout<<"          {                                                                           |"<<endl;
   cout<<"              unsigned i, k, d;                                                       |"<<endl;
   cout<<"              for (i=0; i<n; i++)                                                     |"<<endl;
   cout<<"                  { k=2;                                                              |"<<endl;
   cout<<"                    for (d=2; d<=v[i]/2; d++)                     //corp              |   definitia subprogramului"<<endl;
   cout<<"                          if (v[i]%d==0)                                              |"<<endl;
   cout<<"                              k++;                                                    |"<<endl;
   cout<<"                    if (k==2)                                                         |"<<endl;
   cout<<"                      cout<<v[i]<<"<<'"'<<' '<<'"'<<';'<<"                                                |"<<endl;
   cout<<"                  }                                                                   |"<<endl;
   cout<<"          }                                                                   --------"<<endl<<endl<<endl;

   cout<<"                     Variabile globale si locale"<<endl<<endl<<endl;
   cout<<"    In cadrul oricarui subprogram se lucreaza cu date variabile sau constante. Pe langa parametrii subprogramului (actuali si formali)"<<endl;
   cout<<" exista si variabile declarate local in subprogram si ale caror valori si modificari aduse nu vor fi cunoscute in afara subprogramului."<<endl;
   cout<<"    Variabilele pot fi statice sau dinamice, globale sau locale si toate au un anumit tip (unsigned, int, float, char etc.)"<<endl<<endl;

   cout<<"  VARIABILE GLOBALE"<<endl<<endl;
   cout<<"      Se declara in afara oricarei functii si pot fi utilizate, din momentul declararii lor in tot programul (fie in functii definite"<<endl;
   cout<<"  de utilizator, fie in functia principala)."<<endl<<endl;

   cout<<"  VARIABILE LOCALE"<<endl<<endl;
   cout<<"      Se declara in corpul functiilor, fie principala, fie definite de urtilizator, valorile si modificarile aduse lor vor fi cunoscute"<<endl;
   cout<<"  doar in functia in care au fost declarate. Astfel, cu aceste variabile se poate lucra doar in functia respectiva."<<endl;
   cout<<"      Orice variabila declarata in functia principala main() este o variabila locala."<<endl;
   cout<<"      Daca o variabila apare in lista parametrilor formali ai unei functii, aceasta nu poate aparea si ca variabila declarata local in"<<endl;
   cout<<" functia respectiva."<<endl<<endl;

   cout<<" Exemplu:"<<endl;
   cout<<"      #include <iostream>"<<endl;
   cout<<"      using namespace std;"<<endl;
   cout<<"      unsigned n;                         // variabila globala"<<endl;
   cout<<"      float medie (unsigned v[100])"<<endl;
   cout<<"          {"<<endl;
   cout<<"              unsigned i, s=0, k=0;       // variabile locale in subprogramul medie"<<endl;
   cout<<"              for (i=0; i<n; i++)"<<endl;
   cout<<"                  if (v[i]>0)"<<endl;
   cout<<"                      {"<<endl;
   cout<<"                          s+=v[i]; k++;"<<endl;
   cout<<"                      }"<<endl;
   cout<<"              if (k>0)"<<endl;
   cout<<"                  return (float) s/k;"<<endl;
   cout<<"              return 0;"<<endl;
   cout<<"          }"<<endl;
   cout<<"      int main()"<<endl;
   cout<<"      {"<<endl;
   cout<<"          unsigned i, v[100];             // variabile locale in functia principala"<<endl;
   cout<<"          cin>>n;"<<endl;
   cout<<"          for (i=0; i<n; i++)"<<endl;
   cout<<"              cin>>v[i];"<<endl;
   cout<<"          cout<<medie(v);"<<endl;
   cout<<"          return 0;"<<endl<<endl<<endl;

   cout<<" Observatii:"<<endl;
   cout<<"  1. Variabila n, globala, nu a mai fost trecuta in lista parametrilor formali a subprogramului medie, astfel lipseste si din lista parametrilor"<<endl;
   cout<<"     actuali si nici nu a mai fost declarata in main()."<<endl;
   cout<<"  2. Variabila i este locala in int main si in subporogram, astfel ca aceeasi notatie poate fi folosita in ambele functii."<<endl<<endl<<endl;

   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu2();
    }
   while (k!=2);

   }
void meniu25()
{system("color 07");
   system("cls");
   int k;
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                              2.5. TRANSMITEREA PARAMETRILOR FORMALI                        "<<endl<<endl<<endl;
   cout<<"      Orice functie lucreaza cu doua tipuri de parametri: formali si actuali/efectivi. Cei formali sunt cei regasiti in lista"<<endl;
   cout<<" din antetul functiei, iar la apelul functiei se regasesc cei actuali sau efectivi."<<endl<<endl<<endl;

   cout<<"      Parametri formali"<<endl<<endl;
   cout<<"      Lista parametrilor formali poate fi:"<<endl;
   cout<<" - vida (atunci cand nu se face schimb de informatii cu restul programului)"<<endl;
   cout<<" - nevida (cand este formata din unul sau mai multi parametri, separati prin virgula, pentru fiecare parametru precizandu-se"<<endl;
   cout<<" tipul si numele/identificatorul asociat acestuia)."<<endl<<endl<<endl;
   cout<<"  Exemple:"<<endl<<endl;
   cout<<"    void citire()                           //functie fara parametri formali"<<endl<<endl;
   cout<<"    unsigned palindrom (unsigned a)         //functie cu un singur parametru formal"<<endl<<endl;
   cout<<"    void sortare(unsigned a, int v[50])     //functie cu mai multi parametri formali"<<endl<<endl<<endl<<endl;

   cout<<"      Parametri actuali"<<endl<<endl;
   cout<<"      Transmiterea datelor intre functia din care se apeleaza si functia apelata se poate face fie prin parametri, fie prin variabile locale sau"<<endl;
   cout<<"  globale. Atunci cand se utilizeaza variabile globale, nu se face un transfer propriu-zis, ci se folosesc in comun anumite zone de memorie."<<endl;
   cout<<"  Acestia se numesc parametri actuali si reprezinta valorile ce vor fi transmise, in ordinea in care sunt scrisi, parametrilor formali"<<endl;
   cout<<"  din antetul functiei apelate."<<endl<<endl<<endl;
   cout<<"  Exemple de utilizare a parametrilor actuali (efectivi):"<<endl<<endl;
   cout<<"       x=prim(30);             // parametru actual reprezentat de o valoare constanta"<<endl<<endl;
   cout<<"       perfect(a);             // parametru actual reprezentat de o variabila"<<endl<<endl;
   cout<<"       cout<<medie(56,78,18);  // parametri actuali reprezentati de valori constante"<<endl<<endl;
   cout<<"       citire(n,v);            // parametri actuali reprezentati de variabile"<<endl<<endl<<endl<<endl;

   cout<<"      Asocierea intre parametrii actuali si cei formali se realizeaza prin numar, ordine si tip, adica: "<<endl;
   cout<<" - daca functia are "<<'"'<<'x'<<'"'<<" parametri formali, la apelul ei trebuie utilizati "<<'"'<<'x'<<'"'<<" parametri actuali;"<<endl;
   cout<<" - daca functia are in ordine parametrii "<<'"'<<'a'<<'"'<<", "<<'"'<<'b'<<'"'<<", "<<'"'<<'c'<<'"'<<", parametrii actuali de la apel vor fi asociati in acceasi ordine;"<<endl<<endl;
   cout<<"      ex:         void afisare (int n, int v[10])     // afisare (6,x); sau afisare (c,v);"<<endl;
   cout<<"                  unde x si v sunt obligatoriu de tip tablou, iar c variabila simpla"<<endl<<endl;
   cout<<" - unei date de tip tablou (tip de data structurat) nu se poate asocia o variabila simpla si reciproc;"<<endl;
   cout<<" - unui parametru formal de tip unsigned nu se poate asocia un parametru actual de tip int/float/char etc. si reciproc."<<endl<<endl<<endl;

   cout<<"  Transmiterea parametrilor formali se poate face prin:"<<endl<<endl;
   cout<<"       - valoare"<<endl;
   cout<<"       - referinta/adresa"<<endl<<endl<<endl;

   cout<<"  1. Transmirea prin valoare"<<endl<<endl;
   cout<<"       - se transmite o copie a parametrului actual, modificarile asupra acesteia nefiind recunoscute in afara functiei in care"<<endl;
   cout<<"  au loc prelucrarile. La revenirea din functie, variabila nu retine valoarea modificata, ci valoarea de intrare."<<endl;
   cout<<"       - parametrii nu sunt precedati de semnul &;"<<endl<<endl<<endl;

   cout<<"  Exemplu:"<<endl<<endl;
   cout<<"  #include<iostream>"<<endl;
   cout<<"   using namespace std;"<<endl;
   cout<<"   void nrcifre(unsigned a)"<<endl;
   cout<<"   {"<<endl;
   cout<<"       int k=0;"<<endl;
   cout<<"       while (a>0)"<<endl;
   cout<<"             {"<<endl;
   cout<<"                  k++; a/=10;"<<endl;
   cout<<"             }"<<endl;
   cout<<"      cout<<k<<endl;"<<endl;
   cout<<"   }"<<endl;
   cout<<"  int main()"<<endl;
   cout<<"  {"<<endl;
   cout<<"        unsigned x;"<<endl;
   cout<<"        cin>>x;"<<endl;
   cout<<"        nrcifre(x);"<<endl;
   cout<<"        cout<<x;"<<endl;
   cout<<"        return 0;"<<endl;
   cout<<"   }"<<endl<<endl;

   cout<<"  Explicatii:"<<endl<<endl;
   cout<<"    Daca pentru x se citeste valoarea 34, programul va afisa :"<<endl<<endl;
   cout<<"    2     // se afiseaza numarul de cifre a lui x, iar acesta dupa executarea functiei devine 0"<<endl;
   cout<<"    34    // dupa apelul functiei, x revine la valoarea initiala (x=34) si astfel se afiseaza 34"<<endl;
   cout<<"  * - a este parametru formal, in antetul functiei; x este parametru actual; in rularea functiei, la orice intalnire a variabilei"<<endl;
   cout<<"  a, acesteia ii va fi atribuita valoarea lui x, asupra careia se vor realiza prelucrarile, insa x din functia principala va ramane"<<endl;
   cout<<"  nemodificata."<<endl<<endl;
   cout<<"      Transmiterea prin valoare se utilizeaza atunci cand subprogramul trebuie sa lucreze cu acea valoare, dar, in prelucrare, nu ne"<<endl;
   cout<<"  intereseaza sau nu vrem ca parametrul efectiv, cel din blocul apeant, sa retina valoarea modificata in subprogram, adica sa isi modifice."<<endl;
   cout<<"  valoarea initiala."<<endl<<endl<<endl;

   cout<<"  2. Transmiterea prin referinta/adresa"<<endl<<endl;
   cout<<"       - se transmite adresa parametrului actual, modificarile ce se efectueaza asupra valorii acestuia fiind recunoscute la orice"<<endl;
   cout<<"  instructiune ulterioara iesirii din functia in care s-a realizat modificarea. Practic,la revenirea din functie, variabila retine valoarea"<<endl;
   cout<<"  modificata, nu valoarea de intrare;"<<endl;
   cout<<"       - parametri sunt precedari de semnul &;"<<endl<<endl<<endl;

   cout<<"  Exemplu:"<<endl<<endl;
   cout<<"  #include<iostream>"<<endl;
   cout<<"   using namespace std;"<<endl;
   cout<<"   void nrcifre(unsigned &a)"<<endl;
   cout<<"   {"<<endl;
   cout<<"       int k=0;"<<endl;
   cout<<"       while (a>0)"<<endl;
   cout<<"             {"<<endl;
   cout<<"                  k++; a/=10;"<<endl;
   cout<<"             }"<<endl;
   cout<<"      cout<<k<<endl;"<<endl;
   cout<<"   }"<<endl;
   cout<<"  int main()"<<endl;
   cout<<"  {"<<endl;
   cout<<"        unsigned x;"<<endl;
   cout<<"        cin>>x;"<<endl;
   cout<<"        nrcifre(x);"<<endl;
   cout<<"        cout<<x;"<<endl;
   cout<<"        return 0;"<<endl;
   cout<<"   }"<<endl<<endl;

   cout<<"  Explicatii:"<<endl<<endl;
   cout<<"    Daca pentru x se citeste valoarea 34, programul va afisa :"<<endl<<endl;
   cout<<"    2   // se afiseaza numarul de cifre a lui x, iar acesta dupa executarea functiei devine 0"<<endl;
   cout<<"    0   /* dupa apelul functiei, x pastreaza valoarea in urma prelucrarilor din functie(x=0) si astfel se afiseaza 0, iar"<<endl;
   cout<<"          pentru orice instructiune ulterioara ce il contine pe x, daca nu se realizeaza alte prelucrari inainte, mereu lui"<<endl;
   cout<<"          x ii va ramane valoarea 0 */"<<endl<<endl;

   cout<<"      Tipurile de date structurate (tablourile uni/bidimensionale) sunt transmise implicit prin adresa/referinta. Astfel:"<<endl;
   cout<<"  1. atunci cand se scriu in lista parametrilor formali, nu trebuie sa fie precedati de caracterul &"<<endl;
   cout<<"  2. orice modificare ce se realizeaza asupra unuia sau mai multor elemente din tablou va fi recunoscuta in toate instructiunile"<<endl;
   cout<<"  din program, ulterioare apelului functiei in care s-a realizat prelucrarea. In acest caz, este recomandata crearea si folosirea"<<endl;
   cout<<"  unei copii a tabloului, asupra careia se vor realiza modificarile in functie."<<endl<<endl<<endl;
    do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu2();
    }
   while (k!=2);

}
unsigned putere (unsigned n)
{
    unsigned d=2, p, pmax=0;
    while (n>1)
        {
            p=0;
            while (n%d==0)
                {
                    n/=d; p++;
                }
            if (p>pmax)
                pmax=p;
            d++;
        }
    return pmax;
}

void meniu261()
{system("color 0B");
   system("cls");
   unsigned n; int k, i;
   cout<<"   2.6.1. Aplicatie_1                                               "<<endl<<endl<<endl;
   cout<<"   Se citeste un numar natural n (0<=n<=10^9). Subprogramul putere are un singur parametru n si"<<endl;
   cout<<"   returneaza cea mai mare putere la care se gaseste un divizor din descompunerea in factori primi"<<endl;
   cout<<"   a numarului n. Scrieti definitia completa a subprogramului si continutul functiei principale."<<endl<<endl;

   cout<<"   Rezolvare:"<<endl<<endl;
cout<<"     #include<iostream>"<<endl;
cout<<"     using namespace std;"<<endl;
cout<<"     unsigned putere (unsigned n)"<<endl;
cout<<"     {"<<endl;
cout<<"         unsigned d=2, p, pmax=0;"<<endl;
cout<<"         while (n>1)"<<endl;
cout<<"             {"<<endl;
cout<<"                 p=0;"<<endl;
cout<<"                 while (n%d==0)"<<endl;
cout<<"                     {"<<endl;
cout<<"                         n/=d; p++;"<<endl;
cout<<"                     }"<<endl;
cout<<"                 if (p>pmax)"<<endl;
cout<<"                     pmax=p;"<<endl;
cout<<"                 d++;"<<endl;
cout<<"             }"<<endl;
cout<<"         return pmax;"<<endl;
cout<<"     }"<<endl;
cout<<"     int main()"<<endl;
cout<<"     {"<<endl;
cout<<"         unsigned n;"<<endl;
cout<<"         do"<<endl;
cout<<"             {cout<<"<<'"'<<"n="<<'"'<<"; cin>>n;}"<<endl;
cout<<"         while (n>0);"<<endl;
cout<<"         cout<<putere(n);"<<endl;
cout<<"         return 0;"<<endl;
cout<<"     }"<<endl<<endl<<endl<<endl<<endl<<endl;

do
    {
cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>i;
}
while (i<1 || i>2);
if (i==1)
{
   cout<<"Introdu acum datele de intrare."<<endl<<endl;
   do
    {cout<<"n="; cin>>n;}
   while (n<0);
   cout<<putere(n);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu26();
    }
   while (k!=2);
}
else
    if (i==2)
        meniu26();

}
float medie (unsigned n, int v[100])
{
    unsigned i, s=0, k=0;
    for (i=0; i<n; i++)
        if (v[i]>0)
            {s+=v[i];k++;}
    return (float) s/k;
}

void meniu262()
{system("color 0B");
   system("cls");
   int k, p;
   unsigned n, i; int v[100];
   cout<<"    2.6.2. Aplicatie_2                                               "<<endl<<endl<<endl;
   cout<<"    Se citeste un numar natural n (0<=n<=1000) si apoi cele n elemente intregi ale tabloului."<<endl;
   cout<<"    unidimensional v. Subprogramul medie are doi parametri (n si v - cei anteriori) si returneaza"<<endl;
   cout<<"    media aritmetica a valorilor strict pozitive din tabloul citit. Scrieti definitia completa a suprogramului"<<endl;
   cout<<"    si continutul functiei principale."<<endl<<endl;

   cout<<"    Rezolvare:"<<endl<<endl;
cout<<"      #include<iostream>"<<endl;
cout<<"      using namespace std;"<<endl;
cout<<"      float medie (unsigned n, int v[100])"<<endl;
cout<<"      {"<<endl;
cout<<"       unsigned i, s=0, k=0;"<<endl;
cout<<"       for (i=0; i<n; i++)"<<endl;
cout<<"           if (v[i]>0)"<<endl;
cout<<"               {s+=v[i];k++;}"<<endl;
cout<<"       return (float) s/k;"<<endl;
cout<<"      }"<<endl<<endl<<endl;
cout<<"      int main()"<<endl;
cout<<"      {"<<endl;
cout<<"         unsigned n, i; int v[100];"<<endl;
cout<<"         do"<<endl;
cout<<"         {cout<<"<<'"'<<"n="<<'"'<<"; cin>>n;}"<<endl;
cout<<"         for (i=0; i<n; i++);"<<endl;
cout<<"              {cout<<"<<'"'<<"v[i]="<<'"'<<"; cin>>v[i];}"<<endl;
cout<<"         cout<<medie(n,v);"<<endl;
cout<<"         return 0;"<<endl;
cout<<"       }"<<endl<<endl<<endl<<endl<<endl<<endl;

   do
    {
cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);
   if (k==1)
   {

   cout<<"Introdu acum datele de intrare."<<endl<<endl;
   do
   {cout<<"n="; cin>>n;}
   while (n<0);
   for (i=0; i<n; i++)
      {cout<<"v["<<i<<"]="; cin>>v[i];}
   cout<<medie(n,v);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>p;
        if (p==2) meniu26();
    }
   while (p!=2);
   }
   else
         if (k==2)
            meniu26();

}
void inserare (unsigned n, unsigned v[101])
{
    unsigned i, j;
    for (i=1; i<=n; i++)
        if (v[i]%2==0)
            {
                for (j=n; j>=i; j--)
                    v[j+1]=v[j];
                v[i+1]=2023;
                n++; i++;
            }
    for (i=1; i<=n; i++)
        cout<<v[i]<<" ";
}

void meniu263()
{system("color 0B");
   system("cls");
   int k, p;
   unsigned n, i, v[101];
   cout<<"    2.6.3. Aplicatie_3                                                "<<endl<<endl<<endl;
   cout<<"    Se citeste un numar natural n (0<=n<=100) si apoi cele n elemente numere naturale ale tabloului"<<endl;
   cout<<"    unidimensional v. Subrprogramul inserare are doi parametri, (n si v - cei anteriori) si afiseaza"<<endl;
   cout<<"    tabloul unidimensional obtinut in urma inserarii numarului 2023 dupa fiecare numar par din tablou."<<endl;
   cout<<"    Scrieti definitia completa a suprogramului si continutul functiei principale."<<endl<<endl;

   cout<<"    Rezolvare:"<<endl<<endl;
cout<<"      #include<iostream>"<<endl;
cout<<"      using namespace std;"<<endl;
cout<<"      void inserare (unsigned n, unsigned v[101])"<<endl;
cout<<"      {"<<endl;
cout<<"         unsigned i, j;"<<endl;
cout<<"         for (i=1; i<=n; i++)"<<endl;
cout<<"             if (v[i]%2==0)"<<endl;
cout<<"                 {"<<endl;
cout<<"                     for (j=n; j>=i; j--)"<<endl;
cout<<"                          v[j+1]=v[j];"<<endl;
cout<<"                     v[i+1]=2023; "<<endl;
cout<<"                     n++; i++;"<<endl;
cout<<"                 }"<<endl;
cout<<"         for (i=1; i<=n; i++)"<<endl;
cout<<"             cout<<v[i]<<" ";"<<endl;
cout<<"      }"<<endl<<endl<<endl;
cout<<"     int main()"<<endl;
cout<<"      {"<<endl;
cout<<"         unsigned n, i, v[101];"<<endl;
cout<<"         do"<<endl;
cout<<"             {cout<<"<<'"'<<"n="<<'"'<<"; cin>>n;}"<<endl;
cout<<"         while (n<0);"<<endl;
cout<<"         for (i=1; i<=n; i++)"<<endl;
cout<<"             do"<<endl;
cout<<"                 {cout<<"<<'"'<<"v[i]="<<'"'<<"; cin>>v[i];}"<<endl;
cout<<"             while (v[i]<0);"<<endl;
cout<<"         inserare (n,v);"<<endl;
cout<<"         return 0;"<<endl;
cout<<"       }"<<endl<<endl<<endl<<endl<<endl<<endl;

   do
    {
cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>k;
}
while (k<1 || k>2);

   if (k==1)
   {

   cout<<"Introdu acum datele de intrare."<<endl<<endl;
   do
     {cout<<"n="; cin>>n;}
   while (n<0);
   for (i=1; i<=n; i++)
       do
          {cout<<"v["<<i<<"]="; cin>>v[i];}
       while (v[i]<0);
   inserare (n,v);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>p;
        if (p==2) meniu26();
    }
   while (p!=2);
   }
   else
        if (k==2)
            meniu26();
}
void perfect (unsigned a, unsigned b, unsigned &k)
{
    unsigned i, s, d; k=0;
    for (i=a; i<=b; i++)
        {
            s=0;
            for (d=1; d<=i/2; d++)
                if (i%d==0)
                    s+=d;
            if (s==i)
                k++;
        }
}

void meniu264()
{system("color 0B");
   system("cls");
   int i, p;
   cout<<"    2.6.4. Aplicatie_4                                                "<<endl<<endl<<endl;
   cout<<"    Se citesc doua numere naturale a si b (0<=a<=b<=10^9). Subprogramul perfect are trei parametri, a si b"<<endl;
   cout<<"    (cei anteriori) prin care primeste valorile citite si k prin care furnizeaza numarul de valori perfecte din"<<endl;
   cout<<"    intervalul [a,b]. Un numar perfect este cel care este egal cu suma divizorilor sai, mai putin el insusi (6=1+2+3"<<endl;
   cout<<"    sau 28=1+2+4+7+14 sunt exemple de numere perfecte). Scrieti definitia completa a suprogramului si continutul functiei principale."<<endl<<endl;

   cout<<"    Rezolvare:"<<endl<<endl;
cout<<"      #include<iostream>"<<endl;
cout<<"      using namespace std;"<<endl;
cout<<"      void perfect (unsigned a, unsigned b, unsigned &k)"<<endl;
cout<<"      {"<<endl;
cout<<"         unsigned i, s, d;"<<endl;
cout<<"         k=0;"<<endl;
cout<<"         for (i=a; i<=b; i++)"<<endl;
cout<<"            {"<<endl;
cout<<"              s=0;"<<endl;
cout<<"              for (d=1; d<=i/2; d++)"<<endl;
cout<<"                  if (i%d==0)"<<endl;
cout<<"                     s+=d;"<<endl;
cout<<"              if (s==i)"<<endl;
cout<<"                 k++;"<<endl;
cout<<"            }"<<endl;
cout<<"      }"<<endl<<endl<<endl;
cout<<"     int main()"<<endl;
cout<<"      {"<<endl;
cout<<"         unsigned a, b, aux, k;"<<endl;
cout<<"         do"<<endl;
cout<<"             {cout<<"<<'"'<<"a="<<'"'<<"; cin>>a;}"<<endl;
cout<<"         while (a<0);"<<endl;
cout<<"         do"<<endl;
cout<<"             {cout<<"<<'"'<<"b="<<'"'<<"; cin>>b;}"<<endl;
cout<<"         while (b<0);"<<endl;
cout<<"         if (a>b)"<<endl;
cout<<"             {aux=a; a=b; b=aux;}"<<endl;
cout<<"         perfect(a,b,k); cout<<k;"<<endl;
cout<<"         return 0;"<<endl;
cout<<"       }"<<endl<<endl<<endl<<endl<<endl<<endl;

   do
    {
cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>i;
}
while (i<1 || i>2);
if (i==1)
{

   cout<<"Introdu acum datele de intrare."<<endl<<endl;
   unsigned a, b, aux, k;
   do
     {cout<<"a="; cin>>a;}
   while (a<0);
   do
    {cout<<"b="; cin>>b;}
   while (b<0);
   if (a>b)
      {aux=a; a=b; b=aux;}
   perfect(a,b,k); cout<<k;
    cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>p;
        if (p==2) meniu26();
    }
   while (p!=2);
}
else
    if (i==2)
         meniu26();

}

void meniu26()
{int i;
  system("color 07");
   system("cls");
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                                 2.6.  APLICATII                                                "<<endl<<endl<<endl;
cout<<"   2.6.1. Aplicatie_1                                               "<<endl<<endl<<endl;
cout<<"   Se citeste un numar natural n (0<=n<=10^9). Subprogramul putere are un singur parametru n si"<<endl;
cout<<"   returneaza cea mai mare putere la care se gaseste un divizor din descompunerea in factori primi"<<endl;
cout<<"   a numarului n. Scrieti definitia completa a subprogramului si continutul functiei principale."<<endl<<endl;
cout<<"   Rezolvare:"<<endl<<endl;
cout<<"     #include<iostream>"<<endl;
cout<<"     using namespace std;"<<endl;
cout<<"     unsigned putere (unsigned n)"<<endl;
cout<<"     {"<<endl;
cout<<"         unsigned d=2, p, pmax=0;"<<endl;
cout<<"         while (n>1)"<<endl;
cout<<"             {"<<endl;
cout<<"                 p=0;"<<endl;
cout<<"                 while (n%d==0)"<<endl;
cout<<"                     {"<<endl;
cout<<"                         n/=d; p++;"<<endl;
cout<<"                     }"<<endl;
cout<<"                 if (p>pmax)"<<endl;
cout<<"                     pmax=p;"<<endl;
cout<<"                 d++;"<<endl;
cout<<"             }"<<endl;
cout<<"         return pmax;"<<endl;
cout<<"     }"<<endl;
cout<<"     int main()"<<endl;
cout<<"     {"<<endl;
cout<<"         unsigned n;"<<endl;
cout<<"         do"<<endl;
cout<<"             {cout<<"<<'"'<<"n="<<'"'<<"; cin>>n;}"<<endl;
cout<<"         while (n>0);"<<endl;
cout<<"         cout<<putere(n);"<<endl;
cout<<"         return 0;"<<endl;
cout<<"     }"<<endl<<endl<<endl<<endl<<endl<<endl;

cout<<"    2.6.2. Aplicatie_2                                               "<<endl<<endl<<endl;
cout<<"    Se citeste un numar natural n (0<=n<=1000) si apoi cele n elemente intregi ale tabloului."<<endl;
cout<<"    unidimensional v. Subprogramul medie are doi parametri (n si v - cei anteriori) si returneaza"<<endl;
cout<<"    media aritmetica a valorilor strict pozitive din tabloul citit. Scrieti definitia completa a suprogramului"<<endl;
cout<<"    si continutul functiei principale."<<endl<<endl;
cout<<"    Rezolvare:"<<endl<<endl;
cout<<"      #include<iostream>"<<endl;
cout<<"      using namespace std;"<<endl;
cout<<"      float medie (unsigned n, int v[100])"<<endl;
cout<<"      {"<<endl;
cout<<"       unsigned i, s=0, k=0;"<<endl;
cout<<"       for (i=0; i<n; i++)"<<endl;
cout<<"           if (v[i]>0)"<<endl;
cout<<"               {s+=v[i];k++;}"<<endl;
cout<<"       return (float) s/k;"<<endl;
cout<<"      }"<<endl<<endl<<endl;
cout<<"      int main()"<<endl;
cout<<"      {"<<endl;
cout<<"         unsigned n, i; int v[100];"<<endl;
cout<<"         do"<<endl;
cout<<"         {cout<<"<<'"'<<"n="<<'"'<<"; cin>>n;}"<<endl;
cout<<"         for (i=0; i<n; i++);"<<endl;
cout<<"              {cout<<"<<'"'<<"v[i]="<<'"'<<"; cin>>v[i];}"<<endl;
cout<<"         cout<<medie(n,v);"<<endl;
cout<<"         return 0;"<<endl;
cout<<"       }"<<endl<<endl<<endl<<endl<<endl<<endl;

cout<<"    2.6.3. Aplicatie_3                                                "<<endl<<endl<<endl;
cout<<"    Se citeste un numar natural n (0<=n<=100) si apoi cele n elemente numere naturale ale tabloului"<<endl;
cout<<"    unidimensional v. Subrprogramul inserare are doi parametri, (n si v - cei anteriori) si afiseaza"<<endl;
cout<<"    tabloul unidimensional obtinut in urma inserarii numarului 2023 dupa fiecare numar par din tablou."<<endl;
cout<<"    Scrieti definitia completa a suprogramului si continutul functiei principale."<<endl<<endl;
cout<<"    Rezolvare:"<<endl<<endl;
cout<<"      #include<iostream>"<<endl;
cout<<"      using namespace std;"<<endl;
cout<<"      void inserare (unsigned n, unsigned v[101])"<<endl;
cout<<"      {"<<endl;
cout<<"         unsigned i, j;"<<endl;
cout<<"         for (i=1; i<=n; i++)"<<endl;
cout<<"             if (v[i]%2==0)"<<endl;
cout<<"                 {"<<endl;
cout<<"                     for (j=n; j>=i; j--)"<<endl;
cout<<"                          v[j+1]=v[j];"<<endl;
cout<<"                     v[i+1]=2023; "<<endl;
cout<<"                     n++; i++;"<<endl;
cout<<"                 }"<<endl;
cout<<"         for (i=1; i<=n; i++)"<<endl;
cout<<"             cout<<v[i]<<" ";"<<endl;
cout<<"      }"<<endl<<endl<<endl;
cout<<"     int main()"<<endl;
cout<<"      {"<<endl;
cout<<"         unsigned n, i, v[101];"<<endl;
cout<<"         do"<<endl;
cout<<"             {cout<<"<<'"'<<"n="<<'"'<<"; cin>>n;}"<<endl;
cout<<"         while (n<0);"<<endl;
cout<<"         for (i=1; i<=n; i++)"<<endl;
cout<<"             do"<<endl;
cout<<"                 {cout<<"<<'"'<<"v[i]="<<'"'<<"; cin>>v[i];}"<<endl;
cout<<"             while (v[i]<0);"<<endl;
cout<<"         inserare (n,v);"<<endl;
cout<<"         return 0;"<<endl;
cout<<"       }"<<endl<<endl<<endl<<endl<<endl<<endl;

cout<<"    2.6.4. Aplicatie_4                                                "<<endl<<endl<<endl;
cout<<"    Se citesc doua numere naturale a si b (0<=a<=b<=10^9). Subprogramul perfect are trei parametri, a si b"<<endl;
cout<<"    (cei anteriori) prin care primeste valorile citite si k prin care furnizeaza numarul de valori perfecte din"<<endl;
cout<<"    intervalul [a,b]. Un numar perfect este cel care este egal cu suma divizorilor sai, mai putin el insusi (6=1+2+3"<<endl;
cout<<"    sau 28=1+2+4+7+14 sunt exemple de numere perfecte). Scrieti definitia completa a suprogramului si continutul functiei principale."<<endl<<endl;
cout<<"    Rezolvare:"<<endl<<endl;
cout<<"      #include<iostream>"<<endl;
cout<<"      using namespace std;"<<endl;
cout<<"      void perfect (unsigned a, unsigned b, unsigned &k)"<<endl;
cout<<"      {"<<endl;
cout<<"         unsigned i, s, d;"<<endl;
cout<<"         k=0;"<<endl;
cout<<"         for (i=a; i<=b; i++)"<<endl;
cout<<"            {"<<endl;
cout<<"              s=0;"<<endl;
cout<<"              for (d=1; d<=i/2; d++)"<<endl;
cout<<"                  if (i%d==0)"<<endl;
cout<<"                     s+=d;"<<endl;
cout<<"              if (s==i)"<<endl;
cout<<"                 k++;"<<endl;
cout<<"            }"<<endl;
cout<<"      }"<<endl<<endl<<endl;
cout<<"     int main()"<<endl;
cout<<"      {"<<endl;
cout<<"         unsigned a, b, aux, k;"<<endl;
cout<<"         do"<<endl;
cout<<"             {cout<<"<<'"'<<"a="<<'"'<<"; cin>>a;}"<<endl;
cout<<"         while (a<0);"<<endl;
cout<<"         do"<<endl;
cout<<"             {cout<<"<<'"'<<"b="<<'"'<<"; cin>>b;}"<<endl;
cout<<"         while (b<0);"<<endl;
cout<<"         if (a>b)"<<endl;
cout<<"             {aux=a; a=b; b=aux;}"<<endl;
cout<<"         perfect(a,b,k); cout<<k;"<<endl;
cout<<"         return 0;"<<endl;
cout<<"       }"<<endl<<endl<<endl<<endl<<endl<<endl;

cout<<"     2.6.5. Revenire la meniul anterior                                "<<endl<<endl<<endl;
do
{cout<<"  Introdu numarul din fata aplicatiei alese fara caracterul punct (ex: pt. 2.6.1=>261). Optiunea ta este: ";
cin>>i;
    if(i==265) meniu2();
     else
    {
        if(i==261) meniu261();
        if(i==262) meniu262();
        if(i==263) meniu263();
        if(i==264) meniu264();
        cout<<endl<<endl;
    }
}
while (i<261 || i>265);

}


void meniu2()
{int i;
system("color 0B");
   system("cls");

   cout<<endl;
   cout<<"                                                      2. Functii definite de utilizator                        "<<endl<<endl;
   cout<<"                                                                           "<<endl<<endl;
   cout<<"                                                               2.1. Clasificare                                         "<<endl<<endl;
   cout<<"                                                               2.2. Definire                                            "<<endl<<endl;
   cout<<"                                                               2.3. Apelare                                             "<<endl<<endl;
   cout<<"                                                               2.4. Declarare                                           "<<endl<<endl;
   cout<<"                                                               2.5. Transmiterea parametrilor formali                   "<<endl<<endl;
   cout<<"                                                               2.6. Aplicatii                                           "<<endl<<endl;
   cout<<"                                                               2.7. Revenire (la meniul principal)                       "<<endl<<endl;
   cout<<"                                                                           "<<endl<<endl;
   do
   {cout<<"Introdu numarul capitolului ales fara caracterul punct (ex: pt. 2.1.=>21). Optiunea ta este: ";
     cin>>i;
     if(i==21) meniu21();
     if(i==22) meniu22();
     if(i==23) meniu23();
     if(i==24) meniu24();
     if(i==25) meniu25();
     if(i==26) meniu26();
     if(i==27) meniu_principal();
   }
   while (i<21 || i>27);

}

void iesire()
{system("color E1");
   system("cls");
   cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
   cout<<"                                                            SFARSIT";
   cout<<endl<<endl<<endl<<endl<<endl<<endl;

}
