#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

void printResult(string s){
    int idx = 1;
    while(s.length() > 0){
        double number = stod(s);
        cout << idx << ": " << fixed << setprecision(2) << number << endl;
        auto nextElement = s.find(',');
        if(nextElement != string::npos){
            s = s.substr(nextElement + 1);
        }
        else{
            break;
        }
    }
}

int main(){
    int t;
    int testNumber = 1;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        cout << "Test " << testNumber++ << ":\n";
        printResult(s);
    }
    
    return 0;
}