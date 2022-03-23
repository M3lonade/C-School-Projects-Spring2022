/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int lotteryRandom, lotteryUser;
    int seed = time(0);
    srand(seed);
    
    lotteryRandom = 0 + rand() % 99;
    std::cout << "Input a 2 digit number to participate in the lottery: ";
    std::cin >> lotteryUser;
    
    int U1 = lotteryUser/10;
    int U2 = lotteryUser%10;
    
    int R1 = lotteryRandom/10;
    int R2 = lotteryRandom%10;
    
    if (lotteryUser >= 100 || lotteryUser < 0) {
        std::cout << "You can't input a number greater than 99 or below 0."<<std::endl;
        return 0;
    }
    else if (lotteryUser == lotteryRandom) {
        std::cout << "You've won $10,000 by getting the number right." << std::endl;
    }
    else if (R1 == U2 && R2 == U1) {
        std::cout << "You guessed both numbers right but in different order, you've won $3,000"<<endl;
    }
    else if (R1 == U2 || R2 == U1) {
        std::cout << "You guessed only one number right, you've won $1,000"<<endl;
    }
    else {
        std::cout << "You didn't get any of the numbers right."<<endl;
    }
    std::cout << "Random number was: " << lotteryRandom <<endl;
    return 0;
}
