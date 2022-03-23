	#include <iostream>
	 
	int main()
	{
	    int balance;
	    std::cout << "Please input your balance: ";
	    std::cin >> balance;
	 
	    if (balance < 0)
	    {
	        std::cout << "FATAL: The account is overdrawn!" << std::endl;
	        return 1;
	    }
	 
	    int checkCount;
	    std::cout << "Please input the amount of checks you'd like: ";
	    std::cin >> checkCount;
	 
	    if (checkCount < 0)
	    {
	        std::cout << "FATAL: Amount of checks cannot be below 0!" << std::endl;
	        return 2;
	    }
	 
	    int baseFee = 10;
	    if (balance < 400)
	        baseFee += 15;
	 
	    float multiplier;
	    if (checkCount < 20)
	        multiplier = 0.1f;
	    else if (checkCount < 40)
	        multiplier = 0.08f;
	    else if (checkCount < 60)
	        multiplier = 0.06f;
	    else
	        multiplier = 0.04f;
	 
	    float fee = baseFee + ((float)checkCount * multiplier);
	    std::cout << "Monthly fee: $" << fee << std::endl;
	 
	    return 0;
	}
