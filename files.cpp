#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  ofstream MyReadFile("code.js");
  string MyText;
  while(getline (MyFileRead, MyText)){
    cout << MyText;
  }
  MyReadFile.close();
}
