#include <bits/stdc++.h>
using namespace std;
int main() {
      string n;
      cin >> n;
      for(int i=0;n[i]!='\0';i++){
          if(n[i]>='5'&&n[i]<='9'){
   // Special case: If the digit is the first digit and is '9', skip inversion.
              if(i==0&&n[i]=='9') continue;
            int digit = n[i]-'0'; // Convert the character digit to an integer
              digit = 9-digit; // Invert the digit by subtracting it from 9.
              n[i] = '0'+digit; // Convert the inverted integer back to a character and update the array.
          }
      }
      cout<<n<<endl;
	    return 0;
}
