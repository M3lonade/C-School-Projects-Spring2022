#include <iostream>

using namespace std;

int main()
{
    int userinput, sumeven = 0, sumodd = 0;
    
    for (userinput, sumeven, sumodd; userinput != 100;) {
        cout << "Enter a number, input 100 to stop: ";
        cin >> userinput;
        if (userinput == 100) {
            break;
        }
       else if (userinput %2 == 0) {
            sumeven = userinput + sumeven;
        }
        else if (userinput %2 != 0) {
            sumodd = userinput + sumodd;
        }
        
        
    }
    std::cout << "The total for even numbers are: " << sumeven << std::endl;
    cout << "The total for odd numbers are: " << sumodd << endl;
}

