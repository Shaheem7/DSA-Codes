#include<iostream>
using namespace std;

class Hero{

    public:
    char name[100];
    int level;
    int health;
};



int main(){

    // Declare a hero object
    Hero h1; 
    
    cout << "Enter the name of the hero: ";
    // cin.getline(h1.name, 100);
    cin >> h1.name;

    cout << "\nEnter the level of the hero: ";
    cin >> h1.level;

    cout << "Enter the health of the hero: ";
    cin >> h1.health;

    // Displaying the details of the hero
    cout << endl << "Name : "<< h1.name <<endl;
    cout << "Level : "<< h1.level <<endl;
    cout << "Health : "<< h1.health <<endl;

    return 0;
}