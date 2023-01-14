#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;


int main(){
    int t;
    int testCase = 1;
    cin >> t;
    cin.ignore();
    string s;
    while(t--){
        getline(cin, s);
        int value = stoi(s, nullptr, 2);
        cout << "Test " << testCase++ << ": " << value << endl;
    }
    return 0;
}