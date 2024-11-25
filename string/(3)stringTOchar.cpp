//Without &: char c : S makes a copy of each character; changes to c do not affect the original string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S = "hello";

    for (char c : S) { // Iterate through each character in S
        cout << c << endl; // Print each character
    }

    return 0;
}

//With &: char& c : S provides a reference to each character, allowing modification of the original string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S = "hello";

    for (char &c : S) { // Reference to each character in S
        c = toupper(c); // Convert to uppercase
    }

    cout << S << endl; // Prints the modified string
    return 0;
}
