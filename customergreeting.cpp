	#include <iostream>
	 
	using namespace std;
	 
	int main()
	{
	   string customerName;
	   char customerGender;
	   
	   cout << "Hello, please input your name: " <<endl;
	   getline(cin, customerName);
	   
	   cout << "Please input your gender (F,f or M,m): "<<endl;
	   cin >> customerGender;
	   if (customerGender == 'M' || customerGender == 'm') {
	       cout <<"Greetings Mr. " << customerName << "What can I do for you?"; 
	   }
	   else if (customerGender == 'F' || customerGender == 'f') {
	       cout <<"Greetings Ms. " << customerName << " What can I do for you?";
	   }
	   else {
	       cout << "Your gender input was wrong, please use the characters 'F' 'f' 'M' or 'm'";
	   }
	 
	    return 0;
	}
