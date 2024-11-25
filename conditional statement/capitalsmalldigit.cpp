//Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
//Note:
//Digits in ASCII '0' = 48,'1' = 49 ....etc
//Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
//Small letters in ASCII 'a' = 97,'b' = 98 ....etc
#include<iostream>
using namespace std;
int main(){
    char x;
    cin >> x;
    if(x>='0' && x<='9')
        cout << "IS DIGIT" << endl;
    else
    {
        cout << "ALPHA" << endl;
        if(x>='a' && x<='z')
            cout << "IS SMALL" << endl;
        else
            cout << "IS CAPITAL" << endl;
    }

}



