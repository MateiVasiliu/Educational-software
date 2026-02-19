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
void meniu23();
void meniu24();
void meniu3();
void meniu4();
void meniu41();
void meniu42();
void meniu43();
void meniu44();
void meniu45();
void aplicatie41(char s[201]);
void aplicatie42(char s[201]);
void aplicatie43(char s[201]);
void aplicatie44(char s[101]);
void aplicatie45(char s[251], char x[21]);
void meniu5();
void meniu_test1(unsigned &total);
void meniu_test2(unsigned &total);
void meniu_test3(unsigned &total);
void final_test(unsigned &total);
void barem_test();
void iesire();
unsigned total;

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
   cout<<"                                             *                           SIRURI DE CARACTERE                          *"<<endl;
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
   cout<<"                                                                  1. Notiuni introductive"<<endl<<endl;
   cout<<"                                                                  2. Prelucrari"<<endl<<endl;
   cout<<"                                                                  3. Functii predefinite"<<endl<<endl;
   cout<<"                                                                  4. Aplicatii"<<endl<<endl;
   cout<<"                                                                  5. Test sumativ"<<endl<<endl;
   cout<<"                                                                  6. Iesire"<<endl<<endl<<endl;
   cout<<"                                                              "<<endl<<endl<<endl<<endl<<endl<<endl;

   do
   {
       cout<<"Introdu acum optiunea aleasa (Ex. pt meniul 1., tastati 1)."<<endl; cin>>i;
   }
   while (i<1 || i>6);

   if (i==1) meniu1();
   if (i==2) meniu2();
   if (i==3) meniu3();
   if (i==4) meniu4();
   if (i==5) meniu5();
   if (i==6) iesire();


}
void meniu1()
{system("color 07");
   system("cls");
   int k;
    cout<<"                                                                 NOTIUNI INTRODUCTIVE"<<endl<<endl<<endl<<endl<<endl;

    cout<<"     Sirul de caractere este o structura de date formata dintr-o multime de caractere ordonate, fiecare caracter identificandu-se prin pozitia sa"<<endl;
    cout<<"in cadrul multimii. Acest sir de caractere poate fi reprezentat de un cuvant, o propozitie, o fraza, un paragraf etc."<<endl<<endl<<endl;
    cout<<"     Diferenta dintre un sir de caractere si un vector cu elemente de tip caracter este aceea ca ultimul caracter al unui sir este mereu NULL"<<endl;
    cout<<"iar spatiul alocat este lungimea-sirului+1 spre deosebire de vectorii cu elemente de tip caracter."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char tab[5]={"<<"'"<<"a"<<"'"<<", "<<"'"<<"b"<<"'"<<", "<<"'"<<"c"<<"'"<<", "<<"'"<<"d"<<"'"<<", "<<"'"<<"e"<<"'"<<"}        //vector cu elemente de tip caracter"<<endl;
    cout<<"     char sir5]={"<<"'"<<"a"<<"'"<<", "<<"'"<<"b"<<"'"<<", "<<"'"<<"c"<<"'"<<", "<<"'"<<"d"<<"'"<<", "<<"NULL}       //sir de caractere"<<endl;
    cout<<"     A doua declarare indica faptul ca un sir de caractere rezerva ultimul spatiu al tabloului pentru caracterul NULL, astfel numarul de elemente incarcate fiind "<<endl;
    cout<<"dimensiunea_initiala-1"<<endl;
    cout<<"     Ultima initializare se poate face si sub forma:"<<endl;
    cout<<"     char sir[5]="<<'"'<<"abcd"<<'"'<<" sau char sir[]="<<'"'<<"abcd"<<'"'<<" aici compilatorul rezervand exact spatiul necesar in memorie"<<endl;

    cout<<"     Alte exemple de declarari:"<<endl;
    cout<<"     char cuv[5]="<<'"'<<"info"<<'"'<<";                        // info"<<endl;
    cout<<"     char prop[20]="<<'"'<<"Afara este soare."<<'"'<<";        // Afara este soare."<<endl;
    cout<<"     char punctuatie[15]="<<'"'<<".,?!:;{}()[]"<<'"'<<";        // .,?!:;{}()[]"<<endl<<endl;

    cout<<"     Numarul maxim de caractere ce poate fi retinut intr-o constanta de tip sir de caractere este 255, astfel ea poate fi declarata astfel:  char sir[256];"<<endl;
    cout<<"     Caracterul NULL este obligatoriu."<<endl;
    cout<<"     Numerotarea pozitiilor intr-o varaibila de tip sir de caractere incepe obligatoriu de la 0."<<endl;

    cout<<" POINTERE"<<endl<<endl;
    cout<<"     Utile in cadrul prelucrarilor, variabilele de tip pointer catre un sir de caractere se declara astfel:"<<endl;
    cout<<"             char *nume_variabila;"<<endl;
    cout<<"     Pointerele permit manipularea unui sir de caractere de la un anumit caracter pana la final, adica de la un anumit octet al sau. Exemple:"<<endl;
    cout<<"         cout<<a;        // echivalent cu a+0, afiseaza soare"<<endl;
    cout<<"         cout<<a+1;      //  afiseaza oare"<<endl;
    cout<<"         cout<<a+2;      //  afiseaza are"<<endl;
    cout<<"         cout<<a+3;      //  afiseaza re"<<endl;
    cout<<"         cout<<a+4;      //  afiseaza e"<<endl<<endl<<endl;
    do
    {
            cout<<"   Tastati 9 pentru a reveni la meniu principal!"<<endl;
            cin>>k;
            if (k==9) meniu_principal();
    }
    while (k!=9);

}
void meniu2()
{system("color 07");
   system("cls");
   int i;

    cout<<"                                                                 PRELUCRARI"<<endl<<endl<<endl<<endl<<endl;

    cout<<"     Asupra sirurilor de caractere se pot aplica diverse prelucrari, fie prin operatii, fie prin functii predefinite. Majoritatea prelucrarilor se "<<endl;
    cout<<" realizeaza prin functii din biblioteca cstring/string.h ."<<endl<<endl;

    cout<<" CITIREA SIRURILOR DE CARACTERE"<<endl<<endl<<endl;
    cout<<"     Citirea sirurilor de caractere se poate realiza in mai multe moduri in functie de continutul sirului:"<<endl;
    cout<<" 1) Citirea "<<'"'<<"cin>>"<<'"'<<" :"<<endl<<endl;
    cout<<"     Pentru un cuvant/sir de caractere care nu contine caracterul spatiu"<<endl<<endl;
    cout<<"     cin>>s;     //daca se citeste "<<'"'<<"alfabet"<<'"'<< " se va retine in s tot sirul alfabet"<<endl;
    cout<<"     cin>>s;     //daca se citeste "<<'"'<<"alfabet si abecedar"<<'"'<<" se va retine doar sirul alfabet, restul sirului initial nefiind memorat"<<endl<<endl;

    cout<<" 2) Citirea "<<'"'<<"cin.get(sir, nr, [caract])"<<'"'<<" :"<<endl<<endl;
    cout<<"     Aceasta permite citirea oricarui caracter, inclusiv spatiu. Functia get(sir, nr, [caract]) se regaseste in biblioteca cstring si are trei parametri:"<<endl;
    cout<<"             1) sir - sirul de caractere in care se citeste (cu orice nume de variabila - ex: sir, s, a, cuv etc.)"<<endl;
    cout<<"             2) nr - numarul maxim de caractere ce se pot citi (inclusiv caracterul NULL)"<<endl;
    cout<<"             3) caract - un parametru optional ce permite citirea tuturor caracterelor pana la intalnirea caracterului caract, cu conditia ca acesta sa fie in primele"<<endl;
    cout<<"nr-1 caractere"<<endl;
    cout<<"     Orice citire cin>> se poate realiza cu ajutorul cin.get()."<<endl;
    cout<<"     Pentru golirea buffer-ului, se poate folosi citirea cin.get(); fara parametri, utila in cazul in care se citesc doua siruri de caractere diferite pe acelasi rand."<<endl<<endl;
    cout<<"     cin.get (s, 101);                        // daca se citeste "<<'"'<<"afara este soare"<<'"'<<", s va retine sirul afara este soare"<<endl;
    cout<<"     cin.get (s, 101, "<<"'"<<" "<<"'"<<");                  // daca se citeste "<<'"'<<"afara este soare"<<'"'<<", s va retine sirul afara"<<endl;
    cout<<"     cin.get (s, 10);                         // daca se citeste "<<'"'<<"afara este soare"<<'"'<<", s va retine sirul afara est"<<endl;
    cout<<"     cin.get (s, 10, "<<"'"<<"S"<<"'"<<");                   // daca se citeste "<<'"'<<"afara este Soare"<<'"'<<", s va retine sirul afara est, deoarece S nu este in primele 9 caractere"<<endl<<endl;

    cout<<" 3) Citirea "<<'"'<<"cin.getline(sir, nr, [caract])"<<'"'<<":"<<endl<<endl;
    cout<<"     Identica citirii cin.get (sir, nr, [caract]);, doar ca este utila in cazul citirii mai multor siruri de caractere pe linii diferite."<<endl;
    cout<<"     Orice citire cin>> sau cin.get(); se poate realiza cu ajutorul cin.getline()."<<endl<<endl;
    cout<<"     cin.getline(s, 151); cin.get(cuv, 21);"<<endl;
    cout<<"     //cu cele doua instructiuni, se pot citi sirurile: afara este soare"<<endl;
    cout<<"                                                        soare"<<endl<<endl<<endl;

    cout<<" AFISAREA SIRURILOR DE CARACTERE"<<endl<<endl<<endl;
    cout<<"     Datorita caracterului NULL, orice sir de caractere se poate afisa prin instructiunea "<<'"'<<"cout<<"<<'"'<<"."<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char s[]="<<'"'<<"abcdef"<<'"'<<";"<<endl;
    cout<<"     cout<<s;                    // se afiseaza abcdef"<<endl<<endl;

    cout<<" PRELUCRARI CU AJUTORUL CODULUI ASCII SI AL POINTERELOR"<<endl<<endl<<endl;
    cout<<"Exemple de prelucrari posibile:"<<endl;
    cout<<"                                     2.1) Afisarea caracterelor incepand de la cel de-al cincilea"<<endl;
    cout<<"                                     2.2) Afisarea celui de-al n-lea caracter (n<lungimea_sirului)"<<endl;
    cout<<"                                     2.3) Modificarea si afisarea celui de-al n-lea caracter din litera mica in litera mare (n<lungimea_sirului)"<<endl;
    cout<<"                                     2.4) Operatii cu codul ASCII - litera urmatoare/anterioara din alfabet"<<endl;
    cout<<"                                     2.5) Revenire la meniul anterior"<<endl<<endl<<endl;

    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 2.1), introdu 21):"; cin>>i;
    }
    while (i<21 || i>25);

    if (i==21) meniu21();
    if (i==22) meniu22();
    if (i==23) meniu23();
    if (i==24) meniu24();
    if (i==25) meniu_principal();
}


void meniu21()
{system("color 04");
   system("cls");
   int k, i; char s[21];
    cout<<"     Afisarea caracterelor incepand de la cel de-al cincilea"<<endl<<endl;
    cout<<"     Rezolvare:"<<endl;
    cout<<"     char s[21]="<<'"'<<"informatica11"<<'"'<<';'<<endl;
    cout<<"     cout<<s+4; // s+4 deoarece numerotarea pozitiilor incepe de la 0"<<endl<<endl;

    cout<<"Se va afisa: "<<'"'<<"rmatica11"<<'"'<<endl<<endl;;

    do
    {
        cout<<"Pentru a incerca problema, apasa tasta 1, iar pentru a reveni la meniul anterior apasa tasta 2."<<endl;
        cin>>i;
    }
    while (i<1 || i>2);
    if (i==1)
    {
      cout<<"Introdu acum datele de intrare"<<endl<<endl;
      cout<<"Cuvantul este: "; cin>>s;
      cout<<"Al cincilea caracter este: "<<s+4<<endl<<endl;

    do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu2();
    }
   while (k!=2);
    }
    else
        if (i==2) meniu2();
}

void meniu22()
{system("color 04");
   system("cls");
   int k, i, n; char s[16];
    cout<<"     Afisarea celui de-al n lea caracter (n<lungimea_sirului)"<<endl<<endl;
    cout<<"     Rezolvare:"<<endl;
    cout<<"     cin>>s>>n;"<<endl;
    cout<<"     // char s[16]="<<'"'<<"calculator"<<'"'<<"; int n=6;"<<endl;
    cout<<"     cout<<s[5];          // 5 pt ca numerotarea incepe de la 0"<<endl<<endl;

    cout<<" Se va afisa al 6-lea caracter, adica: l."<<endl<<endl;
     do
    {
        cout<<"Pentru a incerca problema, apasa tasta 1, iar pentru a reveni la meniul anterior apasa tasta 2."<<endl;
        cin>>i;
    }
    while (i<1 || i>2);
    if (i==1)
    {
      cout<<"Introdu acum datele de intrare"<<endl<<endl;
      cout<<"Cuvantul este: "; cin>>s;
      do
        {cout<<"n="; cin>>n;}
      while (n>=strlen(s));
      cout<<"Al "<<n<<"-lea caracter este: "<<s[n-1]<<endl<<endl;

    do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu2();
    }
   while (k!=2);
    }
    else
        if (i==2) meniu2();

}


void meniu23()
{system("color 04");
   system("cls");
   int k, i, n; char s[16];
    cout<<"     Modificarea si afisarea celui de-al n-lea caracter din litera mica in litera mare (n<lungimea_sirului)"<<endl<<endl;
    cout<<"     Rezolvare:"<<endl;
    cout<<"     cin>>s>>n;"<<endl;
    cout<<"     char s[16]="<<'"'<<"programare"<<'"'<<"; int n=7;"<<endl<<endl;
    cout<<"     cout<<s[n-1]-32;"<<endl<<endl;

    cout<<"     Se va afisa: M"<<endl<<endl;

       do
    {
        cout<<"Pentru a incerca problema, apasa tasta 1, iar pentru a reveni la meniul anterior apasa tasta 2."<<endl;
        cin>>i;
    }
    while (i<1 || i>2);
    if (i==1)
    {
      cout<<"Introdu acum datele de intrare"<<endl<<endl;
      cout<<"Cuvantul este: "; cin>>s;
      do
        {cout<<"n="; cin>>n;}
      while (n>=strlen(s));
      cout<<"Al "<<n<<"-lea caracter modificat este: "<<s[n-1]<<endl<<endl;

    do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu2();
    }
   while (k!=2);
    }
    else
        if (i==2) meniu2();

   }

void meniu24()
{system("color 04");
   system("cls");
   int k, i, n; char s[16];
    cout<<"     2.5) Operatii cu codul ASCII - litera urmatoare/anterioara din alfabet"<<endl<<endl;
    cout<<"     Rezolvare:"<<endl;
    cout<<"     cin>>s;"<<endl;
    cout<<"     char s[16]="<<'"'<<"stilou"<<'"'<<";"<<endl<<endl;
    cout<<"     cout<<s+4<<endl;"<<endl;
    cout<<"     s[0]=s[0]-1; s[1]=s[0]-3; s[2]=s[0]+1; s[3]=s[0]+3; s[4]=NULL;"<<endl;
    cout<<"     cout<<s;"<<endl<<endl;

    cout<<"     Se va afisa: ou"<<endl;
    cout<<"                  rosu"<<endl<<endl;

       do
    {
        cout<<"Pentru a incerca problema, apasa tasta 1, iar pentru a reveni la meniul anterior apasa tasta 2."<<endl;
        cin>>i;
    }
    while (i<1 || i>2);
    if (i==1)
    {
      cout<<"Introdu acum datele de intrare"<<endl<<endl;
      cout<<"Cuvantul este: "; cin>>s;
      cout<<"Pentru cuvantul "<<s<<" se afiseaza: "<<s+4<<endl; s[0]=s[0]-1; s[1]=s[0]-3; s[2]=s[0]+1; s[3]=s[0]+3; s[4]='\0';
      cout<<"                                    "<<s<<endl<<endl;

    do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu2();
    }
   while (k!=2);
    }
    else
        if (i==2) meniu2();

   }

void meniu3()
{system("color 07");
   system("cls");
   int k;
    cout<<"                                                                 FUNCTII PREDEFINITE"<<endl<<endl<<endl<<endl<<endl;

    cout<<"     Functiile predefinite sau functiile de sistem sunt diverse functii ce permit manipularea si prelucrarea sirurilor de caractere. Se gasesc in"<<endl;
    cout<<" bibliotecile cstring/string.h sau cstdlib sau ctype."<<endl<<endl<<endl;

    cout<<"FUNCTIILE DIN BIBLIOTECA CSTRING"<<endl<<endl<<endl;
    cout<<"1) strlen"<<endl<<endl;
    cout<<"     Apel:   strlen(sir);"<<endl;
    cout<<"     Functia returneaza lungimea efectiva a sirului de caractere (fara a numara si caracterul NULL (terminatorul de sir)."<<endl<<endl;
    cout<<"     Exemplu: char a[16]="<<'"'<<"apa este rece"<<'"'<<"; strlen(a) // va returna 13"<<endl<<endl;

    cout<<"2) strcmp"<<endl<<endl;
    cout<<"     Apel: strcmp(sir1, sir2);"<<endl;
    cout<<"     Functia compara doua siruri, returnand urmatoarele rezultate:"<<endl;
    cout<<"                 a) <0 daca sir1<sir2"<<endl;
    cout<<"                 b) ==0 daca sir1==sir2"<<endl;
    cout<<"                 c) >0 daca sir1>sir2"<<endl;
    cout<<"     *comparatia se realizeaza caracter cu caracter, iar diferenta se calculeaza intre literele corespunzatoare"<<endl;
    cout<<"     Functia face distincte intre literele mari si literele mici."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char sir1[21]="<<'"'<<"Apa"<<'"'<<", sir2[21]="<<'"'<<"APa"<<'"'<<';'<<endl;
    cout<<"     strcmp(sir1,sir2); // va returna >0, pentru ca in codul ASCII p>P"<<endl<<endl;

    cout<<"3) strncmp"<<endl<<endl;
    cout<<"     Apel: strncmp (sir1, sir2, nr);"<<endl;
    cout<<"     Are acelasi efect ca strcmp, doar ca va compara doar primele n caractere din sirul sir1 cu cele din sir2, facand distinctie intre literele"<<endl;
    cout<<" mari si mici."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char sir1[21]="<<'"'<<"Apa"<<'"'<<", sir2[21]="<<'"'<<"APa"<<'"'<<';'<<endl;
    cout<<"     strncmp(sir1,sir2, 1); // va returna ==0, pentru ca in codul ASCII A=A"<<endl<<endl;

    cout<<"4) stricmp"<<endl<<endl;
    cout<<"     Apel: stricmp(sir1, sir2);"<<endl;
    cout<<"     Are acelasi efect ca strcmp, doar ca nu va face distinctie intre literele mari si mici."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char sir1[21]="<<'"'<<"Apa"<<'"'<<", sir2[21]="<<'"'<<"APa"<<'"'<<';'<<endl;
    cout<<"     stricmp(sir1,sir2); // va returna ==0, deoarece ambele siruri contin aceleasi litere"<<endl<<endl;

    cout<<"5) strncmpi"<<endl<<endl;
    cout<<"     Apel: strncmpi(sir1, sir2);"<<endl;
    cout<<"     Are acelasi efect ca strcmp, doar ca va compara primele n caractere si nu va face distinctie intre literele mari si mici."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char sir1[21]="<<'"'<<"Apa"<<'"'<<", sir2[21]="<<'"'<<"aPa"<<'"'<<';'<<endl;
    cout<<"     strncmpi (sir1,sir2); // va returna ==0, deoarece nu se face distinctie intre A si a"<<endl<<endl;

    cout<<"6) strcpy"<<endl<<endl;
    cout<<"     Apel: strcpy (sir1, sir2);"<<endl;
    cout<<"     Functia va copia sirul sir2 (sir sursa) in sirul sir1 (sir destinatie). Se copiaza toate caracterele (inclusiv NULL) si rezultatul furnizat va fi"<<endl;
    cout<<" un pointer."<<endl;
    cout<<"     O alta utilizare poate fi pentru stergerea anumitor caractere."<<endl;
    cout<<"     Se simuleaza o atribuire intre variabile de tip numeric, nefiind permisa atribuire normala intre siruri de caractere."<<endl<<endl;
    cout<<"     Exemplu 1: COPIERE"<<endl;
    cout<<"     char s[10], cuv[10]="<<'"'<<"info23"<<'"'<<';'<<endl;
    cout<<"     strcpy(s, cuv);     // dupa apel, s va primi sirul"<<'"'<<"info23"<<'"'<<endl<<endl;
    cout<<"     Exemplu 2: STERGERE"<<endl;
    cout<<"     char s[10]="<<'"'<<"info23"<<'"'<<';'<<endl;
    cout<<"     strcpy (s+2, s+5); // dupa apel, s va deveni sirul in3"<<endl<<endl;

    cout<<"7) strncpy"<<endl<<endl;
    cout<<"     Apel: strncpy (sir1, sir2, nr);"<<endl;
    cout<<"     Functia are acelasi efect ca strcpy, insa va copia doar primele nr caractere."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char s1[10]="<<'"'<<"creion"<<'"'<<", s2[10]="<<'"'<<"pix"<<'"'<<';'<<endl;
    cout<<"     strncpy(s1, s2, 2); // dupa apel s1 va deveni "<<'"'<<"pieion"<<'"'<<endl<<endl;

    cout<<"8) strcat"<<endl<<endl;
    cout<<"     Apel: strcat (s1,s2);"<<endl;
    cout<<"     Functia lipeste la adresa sirului destinatie (s1) sirul sursa (s2), acesta din urma ramanand nemodificat. Concatenarea nu este comutativa."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char s1[10]="<<'"'<<"creion"<<'"'<<", s2[10]="<<'"'<<"pix"<<'"'<<';'<<endl;
    cout<<"     strcat(s1, s2); // dupa apel s1 va deveni "<<'"'<<"creionpix"<<'"'<<endl<<endl;

    cout<<"9) strncat"<<endl<<endl;
    cout<<"     Apel: strncat (sir1, sir2, nr);"<<endl;
    cout<<"     Functia are acelasi efect ca strcat, insa va lipi doar primele nr caractere din sirul s2."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char s1[10]="<<'"'<<"creion"<<'"'<<", s2[10]="<<'"'<<"pix"<<'"'<<';'<<endl;
    cout<<"     strncat(s1, s2, 2); // dupa apel s1 va deveni "<<'"'<<"creionpi"<<'"'<<endl<<endl;

    cout<<"10) strchr"<<endl<<endl;
    cout<<"     Apel: strchr (sir, caract);"<<endl;
    cout<<"     Functia are ca rezultat pointerul catre prima aparitie a caracterului caract in sirul sir, cautand de la stanga la dreapta. Daca caracterul nu este"<<endl;
    cout<<" gasit, se returneaza 0."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char s[10]="<<'"'<<"program"<<'"'<<';'<<endl;
    cout<<"     if (strchr("<<'"'<<"aeiou"<<'"'<<", s[2])!=0)"<<endl;
    cout<<"            cout<<"<<'"'<<"DA"<<'"'<<';'<<endl;
    cout<<"       else"<<endl;
    cout<<"            cout<<"<<'"'<<"NU"<<'"'<<';'<<"      // se va afisa DA pentru ca al treilea caracter al sirului (o) este vocala (adica este in sirul"<<'"'<<"aeiou"<<'"'<<')'<<endl<<endl;

    cout<<"11) strrchr"<<endl<<endl;
    cout<<"     Apel: strrchr(sir, caract);"<<endl;
    cout<<"     Functia are acelasi efect ca strchr, insa cauta de la dreapta la stanga"<<endl<<endl;
    cout<<"     char s[10]="<<'"'<<"program"<<'"'<<';'<<endl;
    cout<<"     if (strchr("<<'"'<<"aeiou"<<'"'<<", s[2])!=0)"<<endl;
    cout<<"            cout<<"<<'"'<<"DA"<<'"'<<';'<<endl;
    cout<<"       else"<<endl;
    cout<<"            cout<<"<<'"'<<"NU"<<'"'<<';'<<"      // se va afisa NU pentru ca al treilea caracter al sirului (de la dreapta la stanga) (r) nu este vocala (adica nu este in sirul"<<'"'<<"aeiou"<<'"'<<')'<<endl<<endl;

    cout<<"12) strstr"<<endl<<endl;
    cout<<"     Apel: strstr (sir1, sir2);"<<endl;
    cout<<"     Functia identifica daca sirul sir2 se gaseste in sirul sir1 (daca sir2 este subsir al lui sir1), returnand adresa de inceput a lui"<<endl;
    cout<<" sir2 in sir1. Daca sir2 nu se gaseste in sir1, se returneaza 0, iar daca apare"<<endl;
    cout<<" de mai multe ori, se returneaza adresa primei aparitii. Cautarea se face de la stang la dreapta."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"      if (strstr("<<'"'<<"apare"<<'"'<<","<<'"'<<"apa"<<'"'<<")!=0"<<endl;
    cout<<"            cout<<"<<'"'<<"DA"<<'"'<<';'<<endl;
    cout<<"       else"<<endl;
    cout<<"            cout<<"<<'"'<<"NU"<<'"'<<';'<<"  // se va afisa DA pentru ca subsirul apa exista in sirul apare"<<endl<<endl;

    cout<<"13) strtok"<<endl<<endl;
    cout<<"     Apel: strtok (sir1, sir2);"<<endl;
    cout<<"     Functia sparge sirul sir1 in mai multe entitati, acestea fiind separate prin separatori (de obicei formand sirul sir2). Astfel, se poate lucra pe"<<endl;
    cout<<" fiecare entitate in parte."<<endl;
    cout<<"     Primul apel este de forma strtok(sir1, sir2), urmatoarele fiind strtok(NULL, sir2). Se lucreaza pe prima entitate, separatorul fiind inlocuit de NULL,"<<endl;
    cout<<" apoi automat se cauta adresa uramtoarei entitati, si se inlocuieste separatorul cu NULL."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char s[10]="<<'"'<<"afara este soare"<<'"'<<", *p;"<<endl;
    cout<<"     p=strtok(s, "<<'"'<<" "<<'"'<<");"<<endl;
    cout<<"     while (p)"<<endl;
    cout<<"         {"<<endl;
    cout<<"             cout<<p<<<<endl; p=strtok (NULL,"<<'"'<<" "<<'"'<<");"<<endl;
    cout<<"         }"<<endl;
    cout<<" In urma executarii secventei se vor afisa afara"<<endl;
    cout<<"                                           este"<<endl;
    cout<<"                                           soare"<<endl<<endl;

    cout<<"14) strspn"<<endl<<endl;
    cout<<"     Apel: strspn(sir1, sir2);"<<endl;
    cout<<"     Functia numara si returneaza cate caractere consecutive, incepand mereu cu primul caracter, se gasesc in sirul sir2."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     cout<<strspn("<<'"'<<"acefghjkl"<<'"'<<","<<'"'<<"pace"<<'"'<<"); // returneaza valoarea 3 deoarece a, c si e se gasesc in sirul s2"<<endl<<endl;

    cout<<"15) strcspn"<<endl<<endl;
    cout<<"     Apel: strcspn(sir1, sir2);"<<endl;
    cout<<"     Functia are rezultat similar cu strspn, insa numara caracterele din sirul sir1 care nu se gasesc in sirul sir2."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     cout<<strspn("<<'"'<<"becuri"<<'"'<<","<<'"'<<"invatat"<<'"'<<"); // returneaza valoarea 5 deoarece b, e, c, u, si r nu se gasesc in sirul s2"<<endl<<endl;

    cout<<"16) strrev"<<endl<<endl;
    cout<<"     Apel: strrev(sir);"<<endl;
    cout<<"     Functia are ca rezultat sirul rasturnat (de la dreapta la stanga)"<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     cout<<strrev("<<'"'<<"copii"<<'"'<<"); // in urma apelului, se va afisa iipoc"<<endl<<endl;

    cout<<"17) strlwr"<<endl<<endl;
    cout<<"     Apel: strlwr (sir);"<<endl;
    cout<<"     Functia transforma literele mari in litere mici din sirul sir, celelalte caractere ramanand nemodificate."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char s[10]="<<'"'<<"afAra esTe sOare"<<'"'<<"; strlwr (s); // s va deveni dupa apel afara este soare"<<endl<<endl;

    cout<<"18) strupr"<<endl<<endl;
    cout<<"     Apel: strupr (sir);"<<endl;
    cout<<"     Functia transforma literele mari in litere mici din sirul sir, celelalte caractere ramanand nemodificate."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char s[10]="<<'"'<<"afAra esTe sOare"<<'"'<<"; strupr (s); // s va deveni dupa apel AFARA ESTE SOARE"<<endl<<endl;

    cout<<"19) strpbrk"<<endl<<endl;
    cout<<"     Apel: strpbrk(sir1, sir2);"<<endl;
    cout<<"     Functia furnizeaza un pointer catre primul caracter din sirul sir1 care se gaseste si in sirul sir2, iar daca nu gaseste furnizeaza adresa nula."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     cout<<strpbrk("<<'"'<<"afara este soare"<<'"'<<","<<'"'<<"frig"<<'"'<<");       // se afiseaza f"<<endl<<endl;

    cout<<"20) strset"<<endl<<endl;
    cout<<"     Apel: strset (sir, caract);"<<endl;
    cout<<"     Functia parcurge sirul de caractere incepand cu primul caracter, inlocuind fiecare caracter cu caracterul caract, mai putin NULL."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char s[6]="<<'"'<<"afara"<<'"'<<"; strset (s,"<<"'"<<"c"<<"'"<<"); cout<<s;  // se afiseaza ccccc"<<endl<<endl;

    cout<<"21) strnset"<<endl<<endl;
    cout<<"     Apel: strnset (sir, caract, nr);"<<endl;
    cout<<"     Functia are acelasi efect ca strset, insa inlocuieste doar primele nr caractere, iar pentru nr>=lungimea_sirului_sir, va proceda identic cu strset."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     char s[6]="<<'"'<<"afara"<<'"'<<"; strnset (s,"<<"'"<<"c"<<"'"<<", 3); cout<<s;  // se afiseaza cccra"<<endl<<endl<<endl;

    cout<<"FUNCTIILE DIN BIBLIOTECA CSTDLIB"<<endl<<endl<<endl;
    cout<<"Cunoscute sub numele de functii de conversie, ele transforma un sir de caractere intr-un numar si reciproc."<<endl<<endl;

    cout<<"Conversie din sir de caractere in numar:"<<endl<<endl;

    cout<<"1) atoi"<<endl<<endl;
    cout<<"     Apel: atoi(sir);"<<endl;
    cout<<"     Functia converteste sirul sir intr-o valoare numerica intreaga (tip int)."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     cout<<atoi("<<'"'<<"126"<<'"'<<");      // afiseaza 126, ca valoare numerica"<<endl<<endl;

    cout<<"2) atol"<<endl<<endl;
    cout<<"     Apel: atol(sir);"<<endl;
    cout<<"     Functia converteste sirul sir intr-o valoare numerica de tip long."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     cout<<atoi("<<'"'<<"12434648"<<'"'<<");      // afiseaza 12434648, ca valoare numerica"<<endl<<endl;

    cout<<"3) _atold"<<endl<<endl;
    cout<<"     Apel: _atold(sir);"<<endl;
    cout<<"     Functia converteste sirul sir intr-o valoare numerica reala, de tip long double."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     cout<<atoi("<<'"'<<"12.94616"<<'"'<<");      // afiseaza 12.94616, ca valoare numerica"<<endl<<endl;

    cout<<"4) atof"<<endl<<endl;
    cout<<"     Apel: atof(sir);"<<endl;
    cout<<"     Functia converteste sirul sir intr-o valoare numerica reala, de tip double."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     cout<<atoi("<<'"'<<"13.26"<<'"'<<");      // afiseaza 13.26, ca valoare numerica"<<endl<<endl;

    cout<<"5) strtol"<<endl<<endl;
    cout<<"     Apel: strtol(sir, &p, baza);"<<endl;
    cout<<"     Functia converteste sirul de caractere sir intr-o valoare de tip long, specificandu-se si baza de numeratie, functia returnand pozitia primului"<<endl;
    cout<<" caracter ce nu poate fi convertit."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     cout<<strtol("<<'"'<<"126.50"<<'"'<<", &p, 10);      // afiseaza 126, ca valoare numerica, partea fractionara nefiind convertibila"<<endl<<endl;

    cout<<"6) strtoul"<<endl<<endl;
    cout<<"     Apel: strtoul(sir, &p, baza); "<<endl;
    cout<<"     Functia are acelasi efect ca strtol, insa rezultatul este de tip unsigned long."<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     cout<<strtoul("<<'"'<<"1956.50"<<'"'<<", &p, 10);      // afiseaza 1956 ca valoare numerica, partea fractionara nefiind convertibila"<<endl<<endl;

    cout<<"7) strtod"<<endl<<endl;
    cout<<"     Apel: strtod (sir, &p);"<<endl;
    cout<<"     Functia converteste sirul de caractere sir intr-o valoare reala, furnizand pozitia primului caracter ce nu se poate converti."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     cout<<strtod("<<'"'<<"1278.50"<<'"'<<", &p);      // afiseaza 1278.5, ca valoare numerica, partea fractionara nefiind convertibila"<<endl<<endl;

    cout<<"Conversie din numar in sir de caractere:"<<endl;

    cout<<"1) itoa"<<endl<<endl;
    cout<<"     Apel: itoa(n, sir, baza);"<<endl;
    cout<<"     Converteste in sirul de caractere sir valoarea numerica intreaga memorata in n, in baza de numeratie baza."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     itoa (456, sir, 10); cout<<sir; // se va afisa sirul "<<'"'<<"456"<<'"'<<endl<<endl;

    cout<<"2) ltoa"<<endl<<endl;
    cout<<"     Apel: ltoa(n, sir, baza);"<<endl;
    cout<<"     Converteste in sirul de caractere sir valoarea numerica de tip long memorata in n, in baza de numeratie baza."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     ltoa (123456789, sir, 10); cout<<sir; // se va afisa sirul "<<'"'<<"123456789"<<'"'<<endl<<endl;

    cout<<"3) ultoa"<<endl<<endl;
    cout<<"     Apel: itoa(n, sir, baza);"<<endl;
    cout<<"     Converteste in sirul de caractere sir valoarea numerica de tip unsigned long memorata in n, in baza de numeratie baza."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     ultoa (789456123, sir, 10); cout<<sir; // se va afisa sirul "<<'"'<<"789456123"<<'"'<<endl<<endl<<endl;


    cout<<"FUNCTIILE DIN BIBLIOTECA CTYPE"<<endl<<endl<<endl;

    cout<<"1) isupper"<<endl<<endl;
    cout<<"     Apel: isupper (caract);"<<endl;
    cout<<"     Functia verifica daca caracterul caract este litera mare."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     isupper ("<<"'"<<"B"<<"'"<<") // va returna 1 (adevarat)"<<endl<<endl;

    cout<<"2) islower"<<endl<<endl;
    cout<<"     Apel: islower (caract);"<<endl;
    cout<<"     Functia verifica daca caracterul caract este litera mica."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     isupper ("<<"'"<<"h"<<"'"<<") // va returna 1 (adevarat)"<<endl<<endl;

    cout<<"3) isalpha"<<endl<<endl;
    cout<<"     Apel: isalpha (caract);"<<endl;
    cout<<"     Functia verifica daca caracterul caract este litera."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     isupper ("<<"'"<<"0"<<"'"<<") // va returna 0 (fals)"<<endl<<endl;

    cout<<"4) isdigit"<<endl<<endl;
    cout<<"     Apel: isdigit (caract);"<<endl;
    cout<<"     Functia verifica daca caracterul caract este cifra."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     isupper ("<<"'"<<"5"<<"'"<<") // va returna 1 (adevarat)"<<endl<<endl;

    cout<<"5) ispunct"<<endl<<endl;
    cout<<"     Apel: isupper (caract);"<<endl;
    cout<<"     Functia verifica daca caracterul caract este semn de punctuatie."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     isupper ("<<"'"<<"."<<"'"<<") // va returna 1 (adevarat)"<<endl<<endl;

    cout<<"6) isspace"<<endl<<endl;
    cout<<"     Apel: isspace (caract);"<<endl;
    cout<<"     Functia verifica daca caracterul caract este spatiu/caracter alb."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     isupper ("<<"'"<<"m"<<"'"<<") // va returna 0 (fals)"<<endl<<endl;

    cout<<"7) toupper"<<endl<<endl;
    cout<<"     Apel: toupper (caract);"<<endl;
    cout<<"     Functia transforma un caracter din litera mica in litera mare."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     toupper("<<"'"<<"t"<<"'"<<") // va transforma t in T"<<endl<<endl;

    cout<<"8) tolower"<<endl<<endl;
    cout<<"     Apel: tolower (caract);"<<endl;
    cout<<"     Functia transforma un caracter din litera mare in litera mica."<<endl<<endl;
    cout<<"     Exemplu:"<<endl;
    cout<<"     tolower("<<"'"<<"E"<<"'"<<") // va transforma E in e"<<endl<<endl<<endl<<endl<<endl;

    do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
        if (k==2) meniu_principal();
    }
   while (k!=2);

}
void meniu4()
{system("color 07");
   system("cls");
   int i;

cout<<"                                                                           APLICATII"<<endl<<endl<<endl<<endl<<endl;
cout<<" Iata cateva exemple de aplicatii pe care le poti incerca."<<endl<<endl;

cout<<" Aplicatie 4.1:"<<endl;
cout<<"     Un cuvant se numeste palindrom daca citit de la stanga sau de la dreapta, acesta este identic."<<endl;
cout<<"     Scrieti un program care citeste de la tastatura un text de maxim 200 de caractere, DOAR litere mici ale alfabetului englez si caracterul spatiu si care"<<endl;
cout<<" afiseaza, pe cate un rand, cuvintele de tip palindrom din textul citit."<<endl<<endl<<endl<<endl;

cout<<" Aplicatie 4.2:"<<endl;
cout<<"     Scrieti un program care citeste de la tastatura un text cu maxim 200 de caractere, DOAR litere mari ale alfabetului englez si caracterul spatiu si care"<<endl;
cout<<" afiseaza, pe cate un rand, literele care apar in text si numarul aparitiilor fiecarei litere, despartite printr-un spatiu."<<endl<<endl<<endl<<endl;

cout<<" Aplicatie 4.3:"<<endl;
cout<<"     Scrieti un program care citeste din fisierul date.in un text de maxim 200 de caractere, DOAR litere mari ale alfabetului englez si caracterul spatiu si care"<<endl;
cout<<" afiseaza, pe randuri diferite, lungimea celui mai mare cuvant din text si mai apoi fiecare cuvant ce are lungime maxima din text."<<endl<<endl<<endl<<endl;

cout<<" Aplicatie 4.4:"<<endl;
cout<<"     Un text are cel mult 100 de caractere si este format din cuvinte si numere, separate prin cate un spatiu. Cuvintele sunt formate numai din litere ale alfabetului englez"<<endl;
cout<<" Toate numerele sunt reale si sunt formate numai din parte intreaga sau din parte intreaga si parte fractionara, separate prin virgula (,), numerele negative fiind precedate"<<endl;
cout<<" de semnul minus (-)."<<endl;
cout<<"     Scrieti un program care citeste de la tastatura textul si il modifica, eliminand din componenta sa toate numerele negative, apoi afiseaza textul obtinut."<<endl<<endl<<endl<<endl;

cout<<" Aplicatie 4.5:"<<endl;
cout<<"     Subprogramul s1 are doi parametri (t1 si t2 - cuvinte cu cel mult 20 de caractere litere mici ale alfabetului englez), iar acesta verifica si returneaza o valoare"<<endl;
cout<<" corespunzatoare daca cuvantul memorat in variabila t1 este prefix pentru cuvantul memorat in variabila t2."<<endl;
cout<<"     Subprogramul s2 are un singur parametru t, prin care primeste un cuvant format din maxim 20 de caractere litere mici ale alfabetului englez si transforma prima si"<<endl;
cout<<" ultima litera a unui astfel cuvant in majuscula."<<endl;
cout<<"     Fisierul date.in contine pe prima linie un text format din cel mult 250 de caractere, format din cuvinte cu cel mult 20 de caractere, DOAR litere mici ale alfabetului"<<endl;
cout<<" englez si caracterul spatiu, iar pe a doua linie un cuvant de maxim 20 de caractere, litere mici ale alfabetului englez."<<endl;
cout<<"Scrieti un program care sa contina definitiile complete ale subprogramelor anterioare si, folosind apeluri utile ale acestora, se cere sa se afiseze in fisierul date.out"<<endl;
cout<<"sirul initial citit, modificat astfel incat fiecare cuvant al sirului ce are ca prefix cuvantul citit de pe a doua linie a fisierului sa inceapa si sa se termine cu majuscula."<<endl<<endl<<endl<<endl;

cout<<"4.6 Revino la meniul anterior"<<endl<<endl<<endl<<endl;

    do
    {
     cout<<"Introdu optiunea dorita (ex. pt 4.1, introdu 41):"; cin>>i;
    }
    while (i<41 || i>46);

    if (i==41) meniu41();
    if (i==42) meniu42();
    if (i==43) meniu43();
    if (i==44) meniu44();
    if (i==45) meniu45();
    if (i==46) meniu_principal();
}

void meniu41()
{
    system("color 0E");
   system("cls");
   int i, k; char s[201];
cout<<" Aplicatie 4.1:"<<endl;
cout<<"     Un cuvant se numeste palindrom daca citit de la stanga sau de la dreapta, acesta este identic."<<endl;
cout<<"     Scrieti un program care citeste de la tastatura un text de maxim 200 de caractere, DOAR litere mici ale alfabetului englez si caracterul spatiu si care"<<endl;
cout<<" afiseaza, pe cate un rand, cuvintele de tip palindrom din textul citit."<<endl<<endl<<endl<<endl;

cout<<" Rezolvare:"<<endl<<endl;
cout<<"#include <iostream>"<<endl;
cout<<"#include <fstream>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"int main()"<<endl;
cout<<"{"<<endl;
cout<<"    char s[201], *p, cp[21], aux; unsigned i, j;"<<endl;
cout<<"    cin.get(s, 101);"<<endl;
cout<<"    p=strtok(s,"<<'"'<<" "<<'"'<<"));"<<endl;
cout<<"    while (p)"<<endl;
cout<<"    {"<<endl;
cout<<"        i=0; j=strlen(p)-1; strcpy (cp,p);              ------"<<endl;
cout<<"        while (i<j)                                          |"<<endl;
cout<<"        {                                                    |      if strcmp (p, strrev(p)==0)"<<endl;
cout<<"            aux=cp[i]; cp[i]=cp[j]; cp[j]=aux; i++; j--;     |         cout<<p<<endl;"<<endl;
cout<<"        }                                                    | "<<endl;
cout<<"        if (strcmp(cp,p)==0)                                 |"<<endl;
cout<<"            cout<<p<<endl;                              ------"<<endl;
cout<<"        p=strtok (NULL,"<<'"'<<" "<<'"'<<");"<<endl;
cout<<"    }"<<endl;
cout<<"}"<<endl<<endl;

cout<<"Exemplu:"<<endl;
cout<<"Pentru sirul       asa merge un caiac pe apa     se va afisa: asa"<<endl;
cout<<"                                                              caiac"<<endl;
cout<<"                                                              apa"<<endl<<endl<<endl;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>i;
}
while (i<1 || i>2);
if (i==1)
{
   cout<<"Introdu acum datele de intrare."<<endl<<endl;
   cout<<" Textul este:"; cin.get(); cin.get(s, 251);
   cout<<" Se va scrie: "; aplicatie41(s);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
    }
   while (k!=2);
   if (k==2) meniu4();
}
else
    if (i==2)
        meniu4();

}

void aplicatie41(char s[201])
{
    char *p, cp[21], aux; unsigned i, j;
    p=strtok(s, " ");
    while (p)
    {
        i=0; j=strlen(p)-1; strcpy (cp,p);
        while (i<j)
        {
            aux=cp[i]; cp[i]=cp[j]; cp[j]=aux;  i++; j--;
        }
        if (strcmp(cp,p)==0)
            cout<<p<<endl;
            p=strtok(NULL," ");
    }
}
 void meniu42()
 {
     system("color 0E");
   system("cls");
   int k, i; char s[201];
cout<<" Aplicatie 4.2:"<<endl;
cout<<"     Scrieti un program care citeste de la tastatura un text cu maxim 200 de caractere, DOAR litere mari ale alfabetului englez si caracterul spatiu si care"<<endl;
cout<<" afiseaza, pe cate un rand, literele care apar in text si numarul aparitiilor fiecarei litere, despartite printr-un spatiu."<<endl<<endl<<endl<<endl;

cout<<"Rezolvare:"<<endl<<endl;
cout<<"#include <iostream>"<<endl;
cout<<"#include <cstring>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"int main()"<<endl;
cout<<"{"<<endl;
cout<<"    char s[201], j; unsigned fr[90]={0}, i;"<<endl;
cout<<"    cin.get(s, 201);"<<endl;
cout<<"    for (i=0; i<strlen(s); i++)"<<endl;
cout<<"        fr[s[i]]++;"<<endl;
cout<<"    for (j='A'; j<='Z'; j++)"<<endl;
cout<<"        if (fr[j]!=0)"<<endl;
cout<<"            cout<<j<<"<<'"'<<" "<<'"'<<"fr[j]<<endl;"<<endl;
cout<<"    return 0;"<<endl;
cout<<" }"<<endl<<endl;

cout<<"Exemplu:"<<endl;
cout<<"Pentru sirul     INFORMATICA ESTE INTERESANTA        se va afisa: A 4"<<endl;
cout<<"                                                                  C 1"<<endl;
cout<<"                                                                  E 4"<<endl;
cout<<"                                                                  F 1"<<endl;
cout<<"                                                                  I 3"<<endl;
cout<<"                                                                  M 1"<<endl;
cout<<"                                                                  N 3"<<endl;
cout<<"                                                                  O 1"<<endl;
cout<<"                                                                  R 2"<<endl;
cout<<"                                                                  S 2"<<endl;
cout<<"                                                                  T 4"<<endl<<endl<<endl;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>i;
}
while (i<1 || i>2);
if (i==1)
{
   cout<<"Introdu acum datele de intrare."<<endl<<endl;
   cout<<" Textul este:"; cin.get(); cin.get(s, 201);
   cout<<" Se va scrie: "<<endl; aplicatie42(s);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
    }
   while (k!=2);
   if (k==2) meniu4();
}
else
    if (i==2)
        meniu4();
 }

 void aplicatie42(char s[201])
 {
char  j; unsigned fr[91]={0}, i;
    for (i=0; i<strlen(s); i++)
        fr[s[i]]++;
    for (j='A'; j<='Z'; j++)
        if (fr[j]!=0)
    cout<<j<<" "<<fr[j]<<endl;
 }
 void meniu43()
 {
     system("color 0E");
   system("cls");
   int i, k; char s[201];
cout<<" Aplicatie 4.3:"<<endl;
cout<<"     Scrieti un program care citeste de la tastatura un text de maxim 200 de caractere, DOAR litere mari ale alfabetului englez si caracterul spatiu si care"<<endl;
cout<<" afiseaza, pe randuri diferite, lungimea celui mai mare cuvant din text si mai apoi fiecare cuvant ce are lungime maxima din text."<<endl<<endl<<endl<<endl;

cout<<"Rezolvare:"<<endl<<endl;
cout<<"#include <iostream>"<<endl;
cout<<"#include <cstring>"<<endl;
cout<<"using namespace std;"<<endl;
cout<<"int main()"<<endl;
cout<<"{"<<endl;
cout<<"char s[201], cs[201], *p; unsigned i, maxi=0;"<<endl;
cout<<"cin.get(s, 201); strcpy (cs,s);"<<endl;
cout<<"p=strtok(cs, "<<'"'<<" "<<'"'<<");"<<endl;
cout<<"while (p)"<<endl;
cout<<"{"<<endl;
cout<<"    if (strlen(p)>maxi)"<<endl;
cout<<"        maxi=strlen(p);"<<endl;
cout<<"    p=strtok(NULL," ");"<<endl;
cout<<"}"<<endl;
cout<<"cout<<maxi<<endl;"<<endl;
cout<<"p=strtok (s, "<<'"'<<" "<<'"'<<");"<<endl;
cout<<"while (p)"<<endl;
cout<<"{"<<endl;
cout<<"    if (strlen(p)==maxi)"<<endl;
cout<<"        cout<<p<<endl;"<<endl;
cout<<"    p=strtok(NULL, "<<'"'<<" "<<'"'<<");"<<endl;
cout<<"}"<<endl;
cout<<"    return 0;"<<endl;
cout<<"}"<<endl<<endl;

cout<<"Exemplu:"<<endl;
cout<<"Pentru sirul      ACUM BACALAUREAT LA INFORMATICA      se va afisa: 11"<<endl;
cout<<"                                                                    BACALAUREAT"<<endl;
cout<<"                                                                    INFORMATICA"<<endl<<endl<<endl;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>i;
}
while (i<1 || i>2);
if (i==1)
{
   cout<<"Introdu acum datele de intrare."<<endl<<endl;
   cout<<" Textul este:"; cin.get(); cin.get(s, 201);
   cout<<" Se va scrie: "; aplicatie43(s);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
    }
   while (k!=2);
   if (k==2) meniu4();
}
else
    if (i==2)
        meniu4();
 }

 void aplicatie43 (char s[201])
 {
 char cs[201], *p; unsigned i, maxi=0;
 strcpy (cs,s);
p=strtok(cs, " ");
while (p)
{
    if (strlen(p)>maxi)
        maxi=strlen(p);
    p=strtok(NULL," ");
}
cout<<maxi<<endl;
p=strtok (s, " ");
while (p)
{
    if (strlen(p)==maxi)
        cout<<p<<endl;
    p=strtok(NULL, " ");
}
 }

 void meniu44()
 {
     system("color 0E");
   system("cls");
   int i, k; char s[101];
cout<<" Aplicatie 4.4:"<<endl;
cout<<"     Un text are cel mult 100 de caractere si este format din cuvinte si numere, separate prin cate un spatiu. Cuvintele sunt formate numai din litere ale alfabetului englez"<<endl;
cout<<" Toate numerele sunt reale si sunt formate numai din parte intreaga sau din parte intreaga si parte fractionara, separate prin virgula (,), numerele negative fiind precedate"<<endl;
cout<<" de semnul minus (-)."<<endl;
cout<<"     Scrieti un program care citeste de la tastatura textul si il modifica, eliminand din componenta sa toate numerele negative, apoi afiseaza textul obtinut."<<endl<<endl<<endl<<endl;

cout<<"Rezolvare:"<<endl<<endl;
cout<<"#include <iostream>"<<endl;
cout<<"#include <cstring>"<<endl;
cout<<"using nmespace std;"<<endl;
cout<<"int main()"<<endl;
cout<<"{char s[101], *p, snou[101]={0};"<<endl;
cout<<"cin.get(s, 101);"<<endl;
cout<<"p=strtok(s, "<<'"'<<" "<<'"'<<");"<<endl;
cout<<"while (p)"<<endl;
cout<<"    {"<<endl;
cout<<"        if (p[0]!="<<"'"<<"-"<<"'"<<")"<<endl;
cout<<"            {"<<endl;
cout<<"                strcat (snou, p); strcat (snou, "<<'"'<<" "<<'"'<<");"<<endl;
cout<<"            }"<<endl;
cout<<"         else"<<endl;
cout<<"            strcat (snou, "<<'"'<<" "<<'"'<<");"<<endl;
cout<<"        p=strtok (NULL, "<<'"'<<" "<<'"'<<");  "<<endl;
cout<<"    }"<<endl;
cout<<"    strcpy (s, snou);"<<endl;
cout<<"    cout<<s;"<<endl;
cout<<"    return 0;"<<endl;
cout<<"}"<<endl<<endl;

cout<<"Exemplu:"<<endl;
cout<<"Pentru sirul      2,7 minus 3,5 minus 2 egal 2,7 plus -3,5 plus -2 egal -0,2 rezultat     se va afisa:  2,7 minus 3,5 minus 2 egal 2,7 plus  plus  egal  rezultat"<<endl<<endl<<endl;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>i;
}
while (i<1 || i>2);
if (i==1)
{
   cout<<"Introdu acum datele de intrare."<<endl<<endl;
   cout<<" Textul este:"; cin.get(); cin.get(s, 201);
   cout<<" Se va scrie: "; aplicatie44(s);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
    }
   while (k!=2);
   if (k==2) meniu4();
}
else
    if (i==2)
        meniu4();
 }

 void aplicatie44 (char s[101])
    {
        char *p, snou[101]={0};
        p=strtok(s, " ");
        while (p)
            {
                if (p[0]!='-')
                    {
                        strcat (snou, p); strcat (snou, " ");
                    }
                    else
                        strcat (snou, " ");
                p=strtok (NULL, " ");
            }
    strcpy (s, snou);
    cout<<s;
    }


 void meniu45()
 {
     system("color 0E");
   system("cls");
   int k, i; char s[251], x[21];
cout<<" Aplicatie 4.5:"<<endl;
cout<<"     Subprogramul s1 are doi parametri (t1 si t2 - cuvinte cu cel mult 20 de caractere litere mici ale alfabetului englez), iar acesta verifica si returneaza o valoare"<<endl;
cout<<" corespunzatoare daca cuvantul memorat in variabila t1 este prefix pentru cuvantul memorat in variabila t2."<<endl;
cout<<"     Subprogramul s2 are un singur parametru t, prin care primeste un cuvant format din maxim 20 de caractere litere mici ale alfabetului englez si transforma prima si"<<endl;
cout<<" ultima litera a unui astfel cuvant in majuscula."<<endl;
cout<<"     Fisierul date.in contine pe prima linie un text format din cel mult 250 de caractere, format din cuvinte cu cel mult 20 de caractere, DOAR litere mici ale alfabetului"<<endl;
cout<<" englez si caracterul spatiu, iar pe a doua linie un cuvant de maxim 20 de caractere, litere mici ale alfabetului englez."<<endl;
cout<<"Scrieti un program care sa contina definitiile complete ale subprogramelor anterioare si, folosind apeluri utile ale acestora, se cere sa se afiseze in fisierul date.out"<<endl;
cout<<"sirul initial citit, modificat astfel incat fiecare cuvant al sirului ce are ca prefix cuvantul citit de pe a doua linie a fisierului sa inceapa si sa se termine cu majuscula."<<endl<<endl<<endl<<endl;

cout<<" Rezolvare:"<<endl<<endl;
cout<<" #include <iostream>"<<endl;
cout<<" #include <fstream>"<<endl;
cout<<" #include <cstring>"<<endl;
cout<<" using namespace std;"<<endl;
cout<<" unsigned s1 (char t1[21], char t2[21])"<<endl;
cout<<"     {"<<endl;
cout<<"         if (strncmp (t1, t2, strlen(t1))==0)"<<endl;
cout<<"             return 1;"<<endl;
cout<<"         return 0;"<<endl;
cout<<"     }"<<endl;
cout<<" void s2 (char t[20])"<<endl;
cout<<"     {"<<endl;
cout<<"         t[0]=t[0]-32;"<<endl;
cout<<"         t[strlen(t)-1]=t[strlen(t)-1]-32;"<<endl;
cout<<"     }"<<endl;
cout<<" ifstream f("<<'"'<<"date.in"<<'"'<<"); ofstream g("<<'"'<<"date.out"<<'"'<<");"<<endl;
cout<<" int main()"<<endl;
cout<<" {"<<endl;
cout<<" char s[251], x[21], *p, snou[251]={0};"<<endl;
cout<<" f.getline (s, 251); f>>x;"<<endl;
cout<<" p=strtok(s, "<<'"'<<" "<<'"'<<");"<<endl;
cout<<" while (p)"<<endl;
cout<<"     {"<<endl;
cout<<"         if (s1(x,p)==1)"<<endl;
cout<<"            s2(p);"<<endl;
cout<<"         strcat(snou,p); strcat (snou, "<<'"'<<" "<<'"'<<");"<<endl;
cout<<"         p=strtok(NULL, " ");"<<endl;
cout<<"     }"<<endl;
cout<<" strcpy (s, snou); g<<s;"<<endl;
cout<<" f.close(); g.close();"<<endl;
cout<<" return 0;"<<endl;
cout<<" }"<<endl<<endl;

cout<<" Exemplu:"<<endl;
cout<<"     Daca fisierul contine textul: examenul la informatica necesita multa informatie"<<endl;
cout<<"                                   info"<<endl<<endl;
cout<<"     Atunci in fisierul date.out se va afisa: examenul la InformaticA necesita multa InformatiE"<<endl<<endl<<endl<<endl;

do
{
   cout<<"Pentru a incerca problema, tastati 1, iar pentru a reveni la meniul anterior tasta 2."<<endl; cin>>i;
}
while (i<1 || i>2);
if (i==1)
{
   cout<<"Introdu acum datele de intrare, ca in fisier."<<endl<<endl;
   cout<<" Textul este:"; cin.get(); cin.get(s, 251);
   cout<<" Cuvantul este:"; cin.get(); cin>>x;
   cout<<" In fisierul date.out se va scrie: "; aplicatie45(s, x);
   cout<<endl<<endl;
   do
    {
        cout<<"   Tastati 2 pentru a reveni la meniul anterior!"<<endl;
        cin>>k;
    }
   while (k!=2);
   if (k==2) meniu4();
}
else
    if (i==2)
        meniu4();
 }

unsigned s1 (char t1[21], char t2[21])
    {
        if (strncmp (t1, t2, strlen(t1))==0)
            return 1;
        return 0;
    }

void s2 (char t[20])
    {
        t[0]=t[0]-32;
        t[strlen(t)-1]=t[strlen(t)-1]-32;
    }

void aplicatie45( char s[251], char x[21])
{
    char *p, snou[251]={0};
p=strtok(s, " ");
while (p)
    {
        if (s1(x,p)==1)
            s2(p);
        strcat(snou,p); strcat (snou, " ");
        p=strtok(NULL, " ");
    }
strcpy (s, snou); cout<<s;
}

void meniu5()
{system("color 0B");
   system("cls");
   char optiune;
cout<<"                                                                         TEST SUMATIV"<<endl;
cout<<"                                                                      SIRURI DE CARACTERE"<<endl<<endl<<endl<<endl<<endl;

cout<<" INSTRUCTIUNI DE PARCURGERE A TESTULUI:"<<endl;
cout<<"1)	Testul contine 20 de intrebari, toate obligatorii"<<endl;
cout<<"2)	Fiecare parte are un punctaj diferit/intrebare, nu se acorda puncte din oficiu"<<endl;
cout<<"MULT SUCCES!"<<endl<<endl<<endl;
do
{

cout<<"	Apasa S pentru a incepe testul: "; cin>>optiune;
}
while (optiune!='s' && optiune!='S');

if (optiune=='s'|| optiune=='S')
    meniu_test1(total);


}

void meniu_test1(unsigned &total)
{
    system("color 0B");
   system("cls");
   char raspuns, c; total=0;
cout<<"                                                                         TEST SUMATIV - SIRURI DE CRACTERE"<<endl;
cout<<"                                                                                    CLASA A XI-A"<<endl<<endl<<endl<<endl;

cout<<"     PARTEA I"<<endl<<endl;
cout<<"Pentru aceasta parte, vei primi 4 puncte/intrebare. Doar O VARIANTA de raspuns este corecta."<<endl;
cout<<"Introdu, la fiecare intrebare, litera corespunzatoare raspunsului corect."<<endl<<endl<<endl;

cout<<"1.	Sirul de caractere este o structura de date care se diferentiaza de vectorii cu elemente de tip caracter prin:"<<endl;
cout<<"     a)	Caractere litere mari si mici ale alfabetului englez"<<endl;
cout<<"     b)	Terminatorul de sir NULL"<<endl;
cout<<"     c)	Nume"<<endl;
cout<<"     d)	Spatiul de memorie ocupat (octetii)"<<endl<<endl<<endl;
do
{
cout<<"Introdu una din literele a, b, c, d. Varianta corecta este :"; cin>>raspuns;
}
while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='b' || raspuns=='B')
    {total+=4; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"2.	Functia strcat:"<<endl;
cout<<"     a)	Lipeste un sir de caractere altui sir (concatenare)"<<endl;
cout<<"     b)	Sterge un sir de caractere"<<endl;
cout<<"     c)	Cauta un sir de caractere in al sir"<<endl;
cout<<"     d)	Stabileste lungimea unui sir de caractere"<<endl<<endl<<endl;

do
{
cout<<"Introdu una din literele a, b, c, d. Varianta corecta este :"; cin>>raspuns;
}
while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='a' || raspuns=='A')
    {total+=4; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"3.	Functia care compara primele n caractere din doua siruri de caractere este :"<<endl;
cout<<"     a)	strcmp"<<endl;
cout<<"     b)	stricmp"<<endl;
cout<<"     c)	strncmp"<<endl;
cout<<"     d)	strncmpi"<<endl<<endl<<endl;

do
{
cout<<"Introdu una din literele a, b, c, d. Varianta corecta este :"; cin>>raspuns;
}
while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='c' || raspuns=='C')
    {total+=4; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"4.	In urma executarii instructiunii "<<'"'<<"s[]="<<'"'<<"calculator"<<'"'<<"; s[5]+=1; s[6]-=32; cout<<s;"<<'"'<<" se va afisa:"<<endl;
cout<<"     a)	calcumAtor"<<endl;
cout<<"     b)	calcuAAtor"<<endl;
cout<<"     c)	calcuaator"<<endl;
cout<<"     d)	calculBTor"<<endl<<endl<<endl;

do
{
cout<<"Introdu una din literele a, b, c, d. Varianta corecta este :"; cin>>raspuns;
}
while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='a' || raspuns=='A')
    {total+=4; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"5.	In sirul de caractere "<<'"'<<"informatica"<<'"'<<", caracterul de pe pozitia a 7-a este :"<<endl;
cout<<"     a)	a"<<endl;
cout<<"     b)	i"<<endl;
cout<<"     c)	m"<<endl;
cout<<"     d)	t"<<endl<<endl<<endl;

do
{
cout<<"Introdu una din literele a, b, c, d. Varianta corecta este :"; cin>>raspuns;
}
while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='d' || raspuns=='D')
    {total+=4; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"6.	In urma executarii instructiunilor "<<'"'<<"a[]=test_sumativ; cout<<a+3;"<<'"'<<", se va afisa :"<<endl;
cout<<"     a)	_sumativ"<<endl;
cout<<"     b)	test_sumativ"<<endl;
cout<<"     c)	t_sumativ"<<endl;
cout<<"     d)	st_sumativ"<<endl<<endl<<endl;

do
{
cout<<"Introdu una din literele a, b, c, d. Varianta corecta este :"; cin>>raspuns;
}
while (strchr("ABCDabcd",raspuns)==0);

if (raspuns=='c' || raspuns=='C')
    {total+=4; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
  else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

do{
   cout<<"FELICITARI! Ai terminat prima parte a testului! Apasa tasta c pentru a continua. "; cin>>c;
}
while (c!='C' && c!='c');
    if (c=='c' || c=='C')
        meniu_test2(total);
}

void meniu_test2(unsigned &total)
{
    system("color 0B");
   system("cls");
   char s[11], aux, c; int i;
cout<<"PARTEA A II-A"<<endl<<endl;
cout<<"Pentru aceasta parte, vei primi 5 puncte/intrebare. Pentru intrebarile 7-12, una sau mai multe variante sunt corecte. Raspunsul final trebuie introdus astfel:"<<endl;
cout<<"    <varianta corecta 1> [<varianta corecta 2> <varianta corecta 3> <varianta corecta 4>]"<<endl;
cout<<"     []- daca exista mai multe variante"<<endl<<endl;

cout<<"7.	Care dintre urmatoarele functii se gasesc in biblioteca <cstring>?"<<endl;
cout<<"     a)	strlen"<<endl;
cout<<"     b)	atoi"<<endl;
cout<<"     c)	strcat"<<endl;
cout<<"     d)	isupper"<<endl<<endl;

cout<<" Variantele corecte sunt:"; cin.get(); cin.get (s, 11); cin.get();
    for (i=0; i<strlen(s); i++)
        if (strchr(" ,.;/:*", s[i])!=NULL)
            {strcpy (s+i, s+i+1); i--;}
    for (i=0; i<strlen(s)-1; i++)
        if (s[i]>s[i+1])
            {aux=s[i]; s[i]=s[i+1]; s[i+1]=aux;}
    strlwr(s);
    if (strcmp(s, "ac")==0)
        {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
     else
        cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"8.	Care dintre urmatoarele functii NU este o functie de conversie ?"<<endl;
cout<<"     a)	atoi"<<endl;
cout<<"     b)	ltoa"<<endl;
cout<<"     c)	strtol"<<endl;
cout<<"     d)	tolower"<<endl<<endl;

cout<<" Variantele corecte sunt:"; cin.get (s, 11); cin.get();
    for (i=0; i<strlen(s); i++)
        if (strchr(" ,.;/:*", s[i])!=NULL)
            {strcpy (s+i, s+i+1); i--;}
    for (i=0; i<strlen(s)-1; i++)
        if (s[i]>s[i+1])
            {aux=s[i]; s[i]=s[i+1]; s[i+1]=aux;}
    strlwr(s);
    if (strcmp(s, "d")==0)
        {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
     else
        cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"9.	In ce situatii poate fi folosita functia strcpy ?"<<endl;
cout<<"     a)	lipirea unui sir de caractere de alt sir"<<endl;
cout<<"     b)	copierea unui sir de caractere in alt sir"<<endl;
cout<<"     c)	compararea a doua siruri de caractere"<<endl;
cout<<"     d)	stergerea anumitor caractere dintr-un sir de caractere"<<endl<<endl;

cout<<" Variantele corecte sunt:"; cin.get (s, 11); cin.get();
    for (i=0; i<strlen(s); i++)
        if (strchr(" ,.;/:*", s[i])!=NULL)
           {strcpy (s+i, s+i+1); i--;}
    for (i=0; i<strlen(s)-1; i++)
        if (s[i]>s[i+1])
            {aux=s[i]; s[i]=s[i+1]; s[i+1]=aux;}
    strlwr(s);
    if (strcmp(s, "bd")==0)
        {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
     else
        cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"10.	Care dintre urmatoarele instructiuni pot face ca variabila c sa contina un caracter modificat din litera mica in litera mare ?"<<endl;
cout<<"     a)	c="<<"'"<<"a"<<"'"<<"-"<<"'"<<"A"<<"'"<<";"<<endl;
cout<<"     b)	tolower(c);"<<endl;
cout<<"     c)	c-=32;"<<endl;
cout<<"     d)	islower(c);"<<endl;

cout<<" Variantele corecte sunt:"; cin.get (s, 11); cin.get();
    for (i=0; i<strlen(s); i++)
        if (strchr(" ,.;/:*", s[i])!=NULL)
           {strcpy (s+i, s+i+1); i--;}
    for (i=0; i<strlen(s)-1; i++)
        if (s[i]>s[i+1])
            {aux=s[i]; s[i]=s[i+1]; s[i+1]=aux;}
    strlwr(s);
    if (strcmp(s, "abc")==0)
        {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
     else
        cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"11.	Ce biblioteci trebuie declarate obligatoriu pentru a se putea executa urmatoarele insructiuni ?"<<endl;
cout<<"     cin>>s; cout<<strlen(s)<<endl; cout<<s; "<<endl;
cout<<"     a)	cstring"<<endl;
cout<<"     b)	ctype"<<endl;
cout<<"     c)	iostream"<<endl;
cout<<"     d)	cstdlib"<<endl;

cout<<" Variantele corecte sunt:"; cin.get (s, 11); cin.get();
    for (i=0; i<strlen(s); i++)
        if (strchr(" ,.;/:*", s[i])!=NULL)
            {strcpy (s+i, s+i+1); i--;}
    for (i=0; i<strlen(s)-1; i++)
        if (s[i]>s[i+1])
            {aux=s[i]; s[i]=s[i+1]; s[i+1]=aux;}
    strlwr(s);
    if (strcmp(s, "ac")==0)
        {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
     else
        cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"12.	Ce se va afisa in urma executarii secventei de instructiuni urmatoare ?"<<endl;
cout<<"strcpy(s, "<<'"'<<"Informatica"<<'"'<<"); cout<<strlen(s)<<"<<"'"<<" "<<"'"<<"<<s;"<<endl;
cout<<"     a)	11"<<endl;
cout<<"     b)	InfOrmAtIcA"<<endl;
cout<<"     c)	Informatica"<<endl;
cout<<"     d)	10"<<endl;

cout<<" Variantele corecte sunt:"; cin.get (s, 11); cin.get();
    for (i=0; i<strlen(s); i++)
        if (strchr(" ,.;/:*", s[i])!=NULL)
            {strcpy (s+i, s+i+1); i--;}
    for (i=0; i<strlen(s)-1; i++)
        if (s[i]>s[i+1])
            {aux=s[i]; s[i]=s[i+1]; s[i+1]=aux;}
    strlwr(s);
    if (strcmp(s, "ac")==0)
        {total+=5; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
     else
        cout<<endl<<"Raspuns gresit!"<<endl<<endl;

    do{
   cout<<"FELICITARI! Ai terminat a doua parte a testului! Apasa tasta c pentru a continua. "; cin>>c;
}
while (c!='C' && c!='c');

    if (c=='c' || c=='C')
        meniu_test3(total);

}
void meniu_test3(unsigned &total)
{
   system("color 0B");
   system("cls");
   char raspuns[31], c;
cout<<"PARTEA A III-A"<<endl<<endl;
cout<<"Pentru urmatoarele intrebari, raspunsul trebuie introdus sub forma unui singur cuvant/numar. Pentru fiecare intrebare se acorda 6 puncte."<<endl<<endl<<endl;

cout<<"13. Functia care afiseaza rasturnatul unui sir de caractere este ......... ."<<endl;

cout<<"Raspuns:"; cin>>raspuns;
if (stricmp(raspuns, "strrev")==0)
    {total+=6; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
 else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"14. Functiile de verificare a tipului unui caracter sau care le pot transforma din litera mare in litera mica si reciproc se gasesc in biblioteca ....... ."<<endl;

cout<<"Raspuns:"; cin>>raspuns;
if (stricmp(raspuns, "ctype")==0)
    {total+=6; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
 else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"15. Ce se afiseaza in urma secventei urmatoare ?"<<endl<<endl;
cout<<"strcpy(s, "<<'"'<<"testsumativ"<<'"'<<"); "<<endl;
cout<<"for (i=0; i<strlen(s); i++)"<<endl;
cout<<"if (strchr("<<'"'<<"aeiou"<<'"'<<", s[i])!=0)"<<endl;
cout<<"s[i]-=32;"<<endl;
cout<<"cout<<s;"<<endl<<endl;

cout<<"Raspuns:"; cin>>raspuns;
if (stricmp(raspuns, "tEstsUmAtIv")==0)
    {total+=6; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
 else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"16. Cate atribuiri se realizeaza in urmatoarea secventa de instructiuni?"<<endl<<endl;
cout<<"char s[21]; int i=0; "<<endl;
cout<<"strcpy (s, "<<'"'<<"atribuiri"<<'"'<<");"<<endl;
cout<<"while (i<strlen(s))"<<endl;
cout<<"{if (s[i]=="<<"'"<<'i'<<"'"<<")"<<endl;
cout<<"	s[i]="<<"'"<<'*'<<"'"<<";"<<endl;
cout<<"i++;"<<endl;
cout<<"}"<<endl<<endl;

cout<<"Raspuns:"; cin>>raspuns;
if (stricmp(raspuns, "13")==0)
    {total+=6; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
 else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"17. Cu ce trebuie completata instructiunea de mai jos pentru ca variabila s sa retina sirul "<<'"'<<"AfArA"<<'"'<<" ?"<<endl<<endl;
cout<<"strcpy (s,"<<'"'<<"afara"<<'"'<<")"<<endl;
cout<<"for (i=0 ; i<strlen(s); i++)"<<endl;
cout<<"if (.............)"<<endl;
cout<<"     s[i]-=32 ;"<<endl<<endl;

cout<<"Raspuns:"; cin>>raspuns;
if (stricmp(raspuns, "s[i]=='a'")==0)
    {total+=6; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
 else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"18. Ce se va afisa in urma executarii secventei de instructiuni urmatoare ?"<<endl;
cout<<"strcpy(s, "<<'"'<<"stilou"<<'"'<<");"<<endl;
cout<<"s[0]=s[0]-1; s[1]=s[0]-3; s[2]=s[0]+1; s[3]=s[0]+3; s[4]=NULL;"<<endl;
cout<<"cout<<s;"<<endl;

cout<<"Raspuns:"; cin>>raspuns;
if (stricmp(raspuns, "rosu")==0)
    {total+=6; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
 else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"19. Functia care permite lucrul pe ......... diferite ale unui sir de caractere  este strtok."<<endl;

cout<<"Raspuns:"; cin>>raspuns;
if (stricmp(raspuns, "entitati")==0)
    {total+=6; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
 else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;

cout<<"20. Ce se va afisa in urma executarii secventei de instructiuni urmatoare ?"<<endl<<endl;
cout<<"strcpy(s, "<<'"'<<"bacalaureat2024"<<'"'<<");"<<endl;
cout<<"strcpy(s1, s+11); strcpy(s+3,s1);"<<endl<<endl;

cout<<"Raspuns:"; cin>>raspuns;
if (stricmp(raspuns, "bac2024")==0)
    {total+=6; cout<<endl<<"Raspuns corect!"<<endl<<endl;}
 else
    cout<<endl<<"Raspuns gresit!"<<endl<<endl;
do{
   cout<<"FELICITARI! Ai terminat ultima parte a testului! Apasa tasta c pentru a continua si a vedea rezultatul. "; cin>>c;
}
while (c!='C' && c!='c');
    if (c=='c' || c=='C')
        final_test(total);
}
void final_test(unsigned &total)
{
    system("color 0B");
   system("cls");
   int i;
   cout<<endl<<endl<<endl<<endl;
   cout<<"                                                                  FELICITARI! Ai finalizat testul cu succes!"<<endl<<endl;
   cout<<"                                                                          Punctajul tau este: "<<total<<endl<<endl;
   do
{

   cout<<"Daca doresti sa reiei testul, apasa 1, daca doresti sa revii la meniul principal apasa 2, iar daca doresti sa vezi baremul apasa 3"<<endl;
   cin>>i;
}
while (i<1 || i>3);
if (i==1)
    meniu5();
 else
    if (i==2)
        meniu_principal();
     else
        if (i==3)
            barem_test();
}

void barem_test()
{
    system("color 0B");
   system("cls");
   int i;
cout<<"                                                                          BAREMUL TESTULUI"<<endl<<endl<<endl<<endl<<endl;
cout<<"PARTEA I"<<endl<<endl;
cout<<"1.	b"<<endl;
cout<<"2.	a"<<endl;
cout<<"3.	c"<<endl;
cout<<"4.	a"<<endl;
cout<<"5.	d"<<endl;
cout<<"6.	c"<<endl<<endl;

cout<<"PARTEA A II-A"<<endl<<endl;
cout<<"7.	a c"<<endl;
cout<<"8.	d"<<endl;
cout<<"9.	b d"<<endl;
cout<<"10.	a b c"<<endl;
cout<<"11.	a c"<<endl;
cout<<"12.  a c"<<endl<<endl;

cout<<"PARTEA A III-A"<<endl<<endl;
cout<<"13.	strrev"<<endl;
cout<<"14.	ctype"<<endl;
cout<<"15.	tEstsUmAtIv"<<endl;
cout<<"16.	13"<<endl;
cout<<"17.	s[i]=="<<"'"<<'a'<<"'"<<endl;
cout<<"18.	rosu"<<endl;
cout<<"19.	entitati"<<endl;
cout<<"20.	bac2024"<<endl<<endl<<endl;

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
