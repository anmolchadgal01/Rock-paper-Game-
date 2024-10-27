
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);
int main() {
    char player;
    char computer;
    player= getuserchoice();
    cout<< "Your Choice: ";
    showchoice(player);
    computer = getcomputerchoice();
    cout<< "Computer's Choice: ";
    showchoice(computer);
    choosewinner(player, computer);

    return 0;
}

char getuserchoice() {
    char player;
    cout<<"Rock-Paper-Scissors Game!\n";
    do {
        cout<<"Choose one\n";
        cout<<"************************\n";
        cout<<"'r' for rock\n";
        cout<<"'p' for paper\n";
        cout<<"'s' for scissors\n";
        cout<<"'x' for pencil\n";
        cin>>player;

    } while(player != 'r' && player != 'p' && player != 's' && player != 'x');
    return player;
}

char getcomputerchoice() {
    srand(time(0));
    int num = rand() % 4 + 1;

    switch (num) {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
        case 4: return 'x';
        default: return 'N';
    }
}
void showchoice(char choice) {
    switch (choice) {
        case 'r':
            cout<<"Rock\n";
            break;
        case 'p':
            cout<<"Paper\n";
            break;
        case 's':
            cout<<"Scissors\n";
            break;
        case 'x':
            cout<<"Pencil\n";
            break;
    }
}
void choosewinner(char player, char computer) {
    switch (player) {
        case 'r':
            if (computer == 'r') {
                cout<<"It's a tie!\n";
            } else if (computer == 'p'){
                cout<<"You lose!\n";
            } else if (computer == 's'){
                cout<<"You win!\n";
            } else {
                cout<<"You win!\n"; 
            }
            break;
        case 'p':
            if (computer == 'r') {
                cout<<"You win!\n";
            } else if (computer == 'p'){
                cout<<"It's a tie!\n";
            } else if (computer == 's'){
                cout<<"You lose!\n";
            } else {
                cout<<"You lose!\n"; 
            }
            break;
        case 's':
            if (computer == 'r') {
                cout<<"You lose!\n";
            } else if (computer == 'p'){
                cout<<"You win!\n";
            } else if (computer == 's'){
                cout<<"It's a tie!\n";
            } else {
                cout<<"You win!\n"; 
            }
            break;
        case 'x':
            if (computer == 'r') {
                cout<<"You lose!\n"; 
            } else if (computer == 'p'){
                cout<<"You win!\n"; 
            } else if (computer == 's'){
                cout<<"You lose!\n"; 
            } else {
                cout<<"It's a tie!\n";
            }
            break;
    }
}


