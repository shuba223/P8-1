#include <iostream>
#include <string>
using namespace std;

int countCharacter(string line);
int countVowel(string line);

int main() {
    string line = "";

    while (true) {
        cout << "Enter a line or Q to quit: ";
        getline(cin, line);
        if (line == "Q") break;
        cout << "Vowel count: " << countVowel(line) << endl;
    }
}
int countCharacter(string line) {
    return line.length();
}
