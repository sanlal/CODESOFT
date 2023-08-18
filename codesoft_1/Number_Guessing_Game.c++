
//Number_Guessing_Game by RAMAVATH SANTHOSH

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;


    // int ascii = 003;  //used for symbols //it will work in dev c++
    // char ch = ascii;  

    // for(int i=0;i<100;i++){
    //     cout<<ch;
    // }
    cout<<endl;
    cout << "Welcome to the Number Guessing Game made by R.Santhosh !\n";
    cout << "I have picked a number between 1 and 100. Try to guess it.\n";

    //  for(int i=0;i<100;i++){
    //     cout<<ch;
    // }
    cout<<endl;

    do {
        // Ask for the user's guess
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        // Provide feedback on the user's guess
        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempts << " attempts.\n";
            break;
        }
    } while (true);

    cout<<endl<<"You tackled Ramavath Santhosh's game!!!"<<endl<<endl;
    return 0;
}
