#include <iostream>
#include <string.h>
using namespace std;

int main () {
    cout << " Hello user. Could you provide me your personal information? " << endl; 
    int age = 0;
    string name, ability, gender = " ";
    cout << " How old are you? ";
    cin >> age;
    cout << endl; 
    cout << " What is your ability? ";
    cin >> ability;
    cout << endl; 
    cout << " What is your gender? ";
    cin >> gender;
    cout << endl; 
    cout << " Personal Info: " << endl << " Age: " << age << " years. ";
    cout << endl << " Ability: " << ability << ". " << endl; 
    cout << " Gender: " << gender << ". " << endl; 
    return 0;
}