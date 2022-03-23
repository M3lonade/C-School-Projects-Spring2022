	#include<iostream>
	using namespace std;
	int main()
	{
	    int max=0,min=0,sum=0;
	    int num=0;
	    int avg=0;
	    int sumeven = 0, sumodd = 0;
	    cout<<"enter a whole number or -1 to get result:"; 
	    cin>>num;                                  
	    max=num;                                   
	    min=num;                                  
	    do
	    {
	    if(num!=-1){
	        sum=sum+num;        
	        if(num>max) {                
	        max=num; }                        
	        else if(num<min){                    
	        min=num; }
	         if (num %2 == 0) {
	            sumeven = num + sumeven;
	        }
	         if (num %2 != 0) {
	            sumodd = num + sumodd;
	        }
	        cout<<"enter a whole number or -1 to get result:";             
	        cin>>num;                          
	      }
	    }
	    while(num!=-1);                      
	        avg=sum/10.0;
	        cout<<"sum="<<sum<<endl;
	        cout<<"average of numbers you entered is:"<<avg<<endl;
	        cout<<"maximum number you enter is:"<<max<<endl;
	        cout<<"minimum number you enter is:"<<min<<endl;
	        std::cout << "The total for even numbers are: " << sumeven << std::endl;
	    cout << "The total for odd numbers are: " << sumodd << endl;
	        }
