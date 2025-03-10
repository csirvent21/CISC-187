#include <iostream>
#include <unordered_map>
#include <string>
#include <functional>
using namespace std;


int main() {
  /*
  TASK 1
  */
  int array[] = {200, 400, 100, 50, 350};
  unordered_map<int, bool> hashTable;

  for (int i = 0; i < 5; i++){
    hashTable[array[i]] = true;
  }

  int target = 0;
  cout << "Enter a target value: ";
  cin >> target;

  // unordered_map.count() returns 0 if the key is not found
  if (hashTable.count(target) == 0){
    cout << "Target not found" << endl;
  }
  else{
    cout << "Target found" << endl;
  }


  /*
  TASK 2
  */
  string name = "";
  cout << "Enter name: ";
  cin >> name;

  std::hash<string> hashVal;
  cout << "Hash value of " << name << " is " << hashVal(name) << endl;
}