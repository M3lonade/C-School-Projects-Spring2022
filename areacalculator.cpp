	#include <iostream>
	 
	#define APP_PI 3.14159
	 
	int main(int argc, char* argv[], char* envp[])
	{
	    int choice;
	    std::cout << "Select one of the following choices:" << std::endl;
	    std::cout << " 1) Calculate the area of a circle" << std::endl;
	    std::cout << " 2) Calculate the area of a rectangle" << std::endl;
	    std::cout << " 3) Calculate the area of a triangle" << std::endl;
	    std::cout << " 4) Quit" << std::endl;
	    std::cin >> choice;
	 
	    double area;
	 
	    switch (choice)
	    {
	        case 1:
	            double radius;
	            std::cout << "Please enter the radius of the circle: " << std::endl;
	            std::cin >> radius;
	 
	            area = (APP_PI * radius * radius);
	            break;
	        case 2:
	            double length;
	            std::cout << "Please enter the length of the rectangle: " << std::endl;
	            std::cin >> length;
	 
	            double width;
	            std::cout << "Please enter the width of the rectangle: " << std::endl;
	            std::cin >> width;
	 
	            area = (length * width);
	            break;
	        case 3:
	            double base;
	            std::cout << "Please enter the length of the triangle's base: " << std::endl;
	            std::cin >> base;
	 
	            double height;
	            std::cout << "Please enter the height of the triangle: " << std::endl;
	            std::cin >> height;
	 
	            area = (base * height * 0.5);
	            break;
	        case 4:
	            std::cout << "Exiting." << std::endl;
	            return 0;
	        default:
	            std::cout << "FATAL: Choice is out of range [1, 4]!" << std::endl;
	            return 1;
	    }
	 
	    std::cout << "The area is " << area << "." << std::endl;
	 
	    return 0;
	}