//Author: John Crosby
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

int main(){
    srand ( time(NULL) );
    int randomNumber, guess;
    std::string choice;
    std::cout<<"Easy gives you 1 guess between 1 and 2. \n"<<"Medium gives you two guesses between 1 and 10. \n"<<"Hard gives you 3 guesses between 1 and 100"<<std::endl;
    std::cout<<"Would you like to do the easy, medium, or hard mode."<<std::endl;
    std::cin>>choice;

    if(choice == "easy" || choice == "Easy"){
        randomNumber = rand() % 2 + 1;
        std::cout<<"Please choose either 1 or 2"<<std::endl;
        std::cin>>guess;
        if(guess == randomNumber)
        {
            std::cout<<"You win!"<<std::endl;
        }
        else
        {
            std::cout<<"Sorry it was "<<randomNumber<<"."<<std::endl;
        }
    }



    
    
    
    
    randomNumber = rand() % 10 + 1;
    std::cout<<randomNumber<<std::endl;









    return 0;
}
