Sereja and Dima play a game. The rules of the game are very simple. The players have n cards in a row. Each card contains a number, all numbers on the cards are distinct. The players take turns, Sereja moves first. 
During his turn a player can take one card: either the leftmost card in a row, or the rightmost one. The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.
Sereja and Dima are being greedy. Each of them chooses the card with the larger number during his move.
Inna is a friend of Sereja and Dima. She knows which strategy the guys are using, so she wants to determine the final score, given the initial state of the game. Help her.

Input
The first line contains integer n (1 ≤ n ≤ 1000) — the number of cards on the table. The second line contains space-separated numbers on the cards from left to right. The numbers on the cards are distinct integers from 1 to 1000.

Output
On a single line, print two integers. The first number is the number of Sereja's points at the end of the game, the second number is the number of Dima's points at the end of the game.

Examples
InputCopy
4
4 1 2 10
OutputCopy
12 5
InputCopy
7
1 2 3 4 5 6 7
OutputCopy
16 12



#include <bits/stdc++.h>
using namespace std;
int main() {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int first_element = 0;
        int last_element = n-1;
        int serejaScore = 0;
        int demaScore = 0;
        
        for(int turn=0; turn<n; turn++){
            if(turn%2==0){
                if(a[first_element]>a[last_element]) {
                    serejaScore+=a[first_element];
                    first_element++;
                }
                else{
                    serejaScore+=a[last_element];
                    last_element--;
                }
            }
            else {
                if(a[first_element]>a[last_element]) {
                    demaScore+=a[first_element];
                    first_element++;
                }
                else{
                    demaScore+=a[last_element];
                    last_element--;
                }
            }
        }
    cout<<serejaScore<<" "<<demaScore<<endl;
    
    
    
    return 0;
}
