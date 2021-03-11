#include <iostream>
#include <string>
#include <vector>
#include<cstdio>

#define quote(x) #x
class one {};
int main(){
    one A;
    std::cout<<typeid(A).name()<<"\t"<< quote(A) <<"\n";
    return 0;
using namespace std;

class Time {
    public:
        Time(int h =  , int m = 0, int s = 0, const std::string &am_or_pm = "");
        void print_time24();
        void print_time12();
        void add_min();
    private:
        int hr;
        int min;
        int sec;
};

Time::Time(int h, int m, int s, const std::string &am_or_pm):
    hr(h), min(m), sec(s)
{
    if (am_or_pm == "AM" && hr == 12)
        hr = 0;
    if (am_or_pm == "PM" && hr != 12)
        hr += 12;
}

void Time::print_time24()
{
    std::cout << hr << ':' << min << ':' << sec;
}

void Time::print_time12()
{
    if (hr == 0 || hr == 12)
        std::cout << "12";
    else
        std::cout << hr % 12;
    std::cout << ':' << min << ':' << sec;

    if (hr / 12 == 0)
        std::cout << " AM";
    else
        std::cout << " PM";
}

void Time::add_min()
{
    if (min == 59)
        hr = (hr + 1) % 24;

    min = (min + 1) % 60;
}

// To test the class
int main()
{
    using namespace std;
    cout << "Choose option(1. 12 hr format 2. 24 hr format): ";
    int op;
    cin >> op;
    cout << "Enter the time: ";
    int hr, min, sec;
    cin >> hr >> min >> sec;
    string am_or_pm;
    if (op == 1)
        cin >> am_or_pm;
    Time t(hr, min, sec, am_or_pm);
    t.print_time12();
    cout << '\n';
    t.print_time24();
    cout << '\n';

    cout << "Adding a minute,\n";
    t.add_min();
    t.print_time12();
    cout << '\n';
    t.print_time24();
    cout << '\n';

    return 0;
}
string nomMeilleurJoueur1("Christoff");
string nomMeilleurJoueur2("Jason");
string nomMeilleurJoueur3("Sabrina");
string nomMeilleurJoueur4("Isaac");
string nomMeilleurJoueur5("Rachid");

int meilleurScore1(20);
int meilleurScore2(40);
int meilleurScore3(50;
int meilleurScore4(100);
int meilleurScore5(150);
int main()
{
   int meilleurScore[5];       //Déclare un tableau de 5 int 

   double anglesTriangle[3];   //Déclare un tableau de 3 double

   return 0;
}
int const tailleTableau(20);   //La taille du tableau
double anglesIcosagone[tailleTableau];

int const nombreMeilleursScores(5);           //La taille du tableau

int meilleursScores[nombreMeilleursScores];   //Déclaration du tableau

meilleursScores[0] = 118218;  //Remplissage de la première case
meilleursScores[1] = 100432;  //Remplissage de la deuxième case
meilleursScores[2] = 87347;   //Remplissage de la troisième case
meilleursScores[3] = 64523;   //Remplissage de la quatrième case
meilleursScores[4] = 31415;   //Remplissage de la cinquième case
for(int i(0); i<nombreMeilleursScores; ++i)
{ 
    cout << meilleursScores[i] << endl;
}
int main()
{
   vector<int> tableau(5);

   return 0;
}
vector<int> tableau(5, 3);  //Crée un tableau de 5 entiers valant tous 3
vector<string> listeNoms(12, "Sans nom");
//Crée un tableau de 12 strings valant toutes « Sans nom »
int const nombreMeilleursScores(5);  //La taille du tableau

vector<int> meilleursScores(nombreMeilleursScores);  //Déclaration du tableau

meilleursScores[0] = 118218;  //Remplissage de la première case
meilleursScores[1] = 100432;  //Remplissage de la deuxième case
meilleursScores[2] = 87347;   //Remplissage de la troisième case
meilleursScores[3] = 64523;   //Remplissage de la quatrième case
meilleursScores[4] = 31415;   //Remplissage de la cinquième case
}