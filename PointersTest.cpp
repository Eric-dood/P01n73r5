//COMSC-210 | Lab 11 | Eric-Giulio Hedes
#include <iostream>
using namespace std;

const int MAX_VAL = 3;

struct Flower
{
    string name, color;
    int petals;
};

void setUpFlowers(Flower *ptr, int num);
void printFlowers(Flower *ptr, int num);

int main()
{
    Flower *garden = new Flower[MAX_VAL];

    string fl_string;
    if (MAX_VAL == 1) fl_string = "flower";
    else fl_string = "flowers";

    cout << "Welcome to the flower algorithm! Please define the " << MAX_VAL << " " << fl_string << " to set up your garden." << endl << endl;
    for (int i = 0; i < MAX_VAL; i++) setUpFlowers(&garden[i], i);
    cout << "Well done setting up your garden! Your list is as follows:" << endl << endl;
    for (int i = 0; i < MAX_VAL; i++) printFlowers(&garden[i], i);
}

void setUpFlowers(Flower *ptr, int num)
{
    cout << "Flower #" << num + 1 << ":" << endl << "------------------------" << endl;
    cout << "Name: ";
    getline(cin, ptr->name);
    cout << "Color: ";
    getline(cin, ptr->color);
    cout << "Number of petals: ";
    cin >> ptr->petals;
    cin.ignore(1000, 10);
    cout << endl;
}

void printFlowers(Flower *ptr, int num)
{
    cout << "Flower #" << num << " summary:" << endl << "-----------------------" << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Color: " << ptr->color << endl;
    cout << "Number of petals: " << ptr->petals << endl;
    cout << endl;
}