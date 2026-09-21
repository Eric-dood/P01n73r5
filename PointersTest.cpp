//COMSC-210 | Lab 11 | Eric-Giulio Hedes
/*NOTE: The real-life situation I'm gonna use here is about flowers and gardening; while it may
be quite simpler than expected, it'll still be asking the user for what flowers they would like
to pick for their small garden. Have fun!*/
#include <iostream>
using namespace std;

//Declare the constant integer named MAX_VAL; will be useful for limits
const int MAX_VAL = 3;

//Define the Flower struct
struct Flower
{
    string name, color;
    int petals;
};

//Function prototypes
void setUpFlowers(Flower *ptr, int num);
void printFlowers(Flower *ptr, int num);

//Start of main()
int main()
{
    //Declare the garden struct
    Flower *garden = new Flower[MAX_VAL];

    //Use a string for the 'flower' word; will be plural if the MAX_VAL equals to one.
    string fl_string;
    if (MAX_VAL == 1) fl_string = "flower";
    else fl_string = "flowers";

    //Print a welcoming message
    cout << "Welcome to the flower algorithm! Please define the " << MAX_VAL << " " << fl_string << " to set up your garden." << endl << endl;
    for (int i = 0; i < MAX_VAL; i++) setUpFlowers(&garden[i], i);
    cout << "Well done setting up your garden! Your list is as follows:" << endl << endl;
    for (int i = 0; i < MAX_VAL; i++) printFlowers(&garden[i], i);
}
//End of main()

//Define setUpFlowers(); will be used for initializing flower structs
void setUpFlowers(Flower *ptr, int num)
{
    //Print out the flower number
    cout << "Flower #" << num + 1 << ":" << endl << "------------------------" << endl;
    //Enter the flower's name
    cout << "Name: ";
    getline(cin, ptr->name);
    //Enter the color of the flower
    cout << "Color: ";
    getline(cin, ptr->color);
    //Enter how many petals the flower has
    cout << "Number of petals: ";
    cin >> ptr->petals;
    //Use cin.ignore to clear unwanted outputs
    cin.ignore(1000, 10);
    //Leave extra space for the next entry
    cout << endl;
}

//Define printFlowers(); will be used for printing all flowers' elements.
void printFlowers(Flower *ptr, int num)
{
    //Print out the flower number
    cout << "Flower #" << num << " summary:" << endl << "-----------------------" << endl;
    //Print out the flower name
    cout << "Name: " << ptr->name << endl;
    //Print out the flower color
    cout << "Color: " << ptr->color << endl;
    //Print out the number of petals
    cout << "Number of petals: " << ptr->petals << endl;
    //Leave extra space for the next entry
    cout << endl;
}