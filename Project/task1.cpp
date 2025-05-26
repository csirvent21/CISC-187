
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    const int basketballCount = 5;
    const int footballCount = 5;
    string basketballFirstNames[basketballCount] = {"Jill","Janko","Wanda","Jill","Luuk"};
    string basketballLastNames[basketballCount] = {"Huang","Barton","Vakulskas","Moloney","Watkins"};
    string footballFirstNames[footballCount] = {"Hanzla","Tina","Alex","Jill","Wanda"};
    string footballLastNames[footballCount] = {"Radosti","Watkins","Patel","Huang","Vakulskas"};

  // Loop through basketball players and store their full names in a set
    unordered_set<string> basketballFullNames;
    for (int i = 0; i < basketballCount; i++) {
        basketballFullNames.insert(
            basketballFirstNames[i] + " " + basketballLastNames[i]
        );
    }

  // Loop through football players and check if their full name is in the set
    string commonPlayers[basketballCount];
    int commonPlayerCount = 0;
    for (int j = 0; j < footballCount; j++) {
        string fullName = footballFirstNames[j] + " " + footballLastNames[j];
        if (basketballFullNames.count(fullName)) {
            commonPlayers[commonPlayerCount++] = fullName;
        }
    }
    for (int i = 0; i < commonPlayerCount; i++) {
        cout << commonPlayers[i] << "\n";
    }
    return 0;
}
