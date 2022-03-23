/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    short randNumber1;
	short userAnswer;
	short userLives = 10;
	
	    
	int seed = time(0);
	srand(seed);
    randNumber1 = 0 + rand() % 100;

    while(userLives > 0) {
        
        cout << "Please guess the number between 0 and 100: ";
        cin >> userAnswer;
        
        if (userAnswer == randNumber1) {
        cout << "Congartulations you guessed the number right." << endl;
        return 0;
    }
    else if (userAnswer < 0 || userAnswer > 100) {
        cout << "Invalid input, please input a number between 0 and 100."<<endl;
    }
    else if (userAnswer < randNumber1) {
        cout << "You guessed too low. ";
        userLives--;
        cout << "You have "<<userLives<<" attempts left"<<endl;
    }
    else if (userAnswer > randNumber1) {
        cout << "You guessed too high. ";
        userLives--;
        cout << "You have "<<userLives<<" attempts left"<<endl;
    }
        
    }
    cout << "You are out of lives. Try again."<<endl;
    
    return 0;
}
