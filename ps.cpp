#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

class Passport {
protected:
    string name;
    int old;
    int seria;
    int number;
public:
    Passport(string n, int o, int s, int num) :name{ n }, old{ o }, seria{ s }, number{ num } {}
    void Print() {
        cout << "Name: " << name << endl;
        cout << "Old: " << old << endl;
        cout << "seria: " << seria << endl;
        cout << "Number: " << number << endl;
    }
};
class ZagranPassport:public Passport {
    string country;
    int znumber;
public:
    ZagranPassport(string n, int o, int s, int num, string c, int z) : Passport(n, o, s, num), country{ c }, znumber{ z }{}
    void Print() {
        Passport::Print();
        cout << "Country: " << country << endl;
        cout << "ZNumber: " << znumber << endl;
    }
};

int main()
{
    setlocale(0, "");


}
