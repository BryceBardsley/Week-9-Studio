#include <iostream>
#include <string>
#include <cmath>

int main()
{
    //Problem 1
    
    std::string wordArray[5];
    for (int i = 0; i < 5; i++) {
        std::cout << "Input your word:" << std::endl;
        std::string word;
        std::cin >> word;
        wordArray[i] = word;
    }

    for (int i = 4; i >= 0; i--) {
        std::cout << wordArray[i] << " " << std::endl;
    }
    

    //Problem 2
     
    double numberArray[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "Enter a number" << std::endl;
        double number;
        std::cin >> number;
        numberArray[i] = number;
    }

    //Find mean
    double sum = 0;
    for (int i = 0; i < 10; i++) {
        
        sum = sum + numberArray[i];
    }
    double mean = sum / 10;
    

   //Find standard deviation
   double dev = 0;
   for (int i = 0; i < 10; i++) {
        dev = dev + (numberArray[i] - mean) * (numberArray[i] - mean);
    }
   dev = dev / 9;
   std::cout << "Your standard deviation is: " << pow(dev, 0.5) << std::endl;
}

