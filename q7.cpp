#include<iostream>
using namespace std;
int main() {
    int score1, score2, score3;
    cout << " enter the score of player 1:";
    cin >> score1;
    cout << " enter the score of player 2:";
    cin >> score2;
    cout << " enter the score of player 3:";
    cin >> score3;
    if(score1 >= score2 && score1 >= score3) {
        cout << "player 1 has the highest score: " << score1;
    } else if(score2 >= score1 && score2 >= score3) {
        cout << "player 2 has the highest score: " << score2;
    } else {
        cout << "player 3 has the highest score: " << score3;
    }
    return 0;


}
