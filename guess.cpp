//Author: John Crosby
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand ( time(NULL) );
    int randomNumber, guess;
    string choice, answer;
    do
    {
        cout<<"Easy gives you 1 guess between 1 and 2. \n"<<"Medium gives you two guesses between 1 and 10. \n"<<"Hard gives you 3 guesses between 1 and 100"<<endl;
        cout<<"Would you like to do the easy, medium, or hard mode."<<endl;
        cin>>choice;

        if(choice == "easy" || choice == "Easy")
        {
            cout<<"You have selected easy mode."<<endl;
            randomNumber = rand() % 2 + 1;
            cout<<"Please choose either 1 or 2"<<endl;
            cin>>guess;
            if(guess == randomNumber)
            {
                cout<<"You win!"<<std::endl;
            }
            else
            {
                cout<<"Sorry it was "<<randomNumber<<"."<<endl;
            }
        }
        else if(choice == "medium" || choice == "Medium")
        {
            cout<<"You have selected medium difficulty."<<endl;
            randomNumber = rand() % 10 + 1;
            for(int count = 0; count < 2; count++)
            {
                cout<<"Please enter a number between 1 and 10."<<endl;
                cin>>guess;
                if(guess == randomNumber)
                {
                    cout<<"You won on attempt "<<count+1<<"!"<<endl;
                    count = 2;
                }
                else if(guess != randomNumber && count < 1)
                {
                    if(guess < randomNumber)
                    {
                        cout<<"Sorry the number is higher."<<endl;
                    }
                    else
                    {
                        cout<<"Sorry the number is lower."<<endl;
                    }
                }
                else
                {
                    cout<<"The number was "<<randomNumber<<"."<<endl;
                }
            }
        }
        else
        {
            cout<<"Whether you wanted to or not you in hard mode now!"<<endl;
            randomNumber = rand() % 100 + 1;
            for(int count = 0; count < 3; count ++)
            {
                cout<<"Please enter a number between 1 and 100."<<endl;
                cin>>guess;
                if(guess == randomNumber)
                {
                    cout<<"You have won on attempt "<<count+1<<"!"<<endl;
                    count = 3;
                }
                else if(guess != randomNumber && count < 2)
                {
                    if(guess < randomNumber)
                    {
                        cout<<"Sorry the number is higher."<<endl;
                    }
                    else
                    {
                        cout<<"Sorry the number is lower."<<endl;
                    }
                }
                else
                {
                    cout<<"Sorry you are out of attempts. The number was "<<randomNumber<<"."<<endl;
                }
            }
        } 
        cout<<"Do you still want to play? (yes or no?)"<<endl;
        cin>>answer;
    } while(answer == "yes" || answer == "Yes" || answer == "y");
    cout<<"Thanks for playing!"<<endl;
    
    
    
    
    










    return 0;
}
