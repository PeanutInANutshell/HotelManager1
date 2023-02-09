#include <iostream>
#include "Room.h"
#include "Person.h"
#include <vector>
#include <cstdlib>
#include "time.h"
int main()
{
    std::vector<Room> rooms;
    std::vector<Person> persons;
    for(int i = 0; i < 100; i++)
    {
        srand(time(0));
        int price = ((rand() % 10) + 1) * 1000;
        Room room("",i,false,price);
        rooms.push_back(room);
    }
    for(int i = 0; i < 100; i++)
    {
        srand(time(0));
        int balance = ((rand() % 5) + 1) * 1000;
        int name = rand() % 20;
        int nationality= rand() % 10;
        int status= rand() % 2; 
        std::string names[20] = {"Muhammad", "Ahmad", "Mahmoud", "Mustafa", "Wael", 
        "Noor", "Alex", "Abdullah", "Abdulrahman","Ayman"
        "Yousuf", "Kareem", "Sameer", "Osama", "Jack",
        "Ali", "Omar", "Uthman", "Ameen", "Ramy"};
        std::string nationalities[10] =
        {
            "Egyptian", "American" , "Morrocan", "Algerian" , "Romanian",
            "Canadian", "Syrian", "Palestenian", "Japanese", "Sudanese"
        };
        std::string relationship[2] = {"Single", "Married"};
        Person person(names[name], "Male", nationalities[nationality], 
        relationship[status],i,balance,20);
        persons.push_back(person);  
    }

    while(true)
    {
        std::string first_choice;
        std::cout << std::flush << "Welcome, Admin. Here are your options:"
        <<std::endl << "1. Show all rooms"
        <<std::endl << "2. Show all people"
        <<std::endl << "3. Search a specific room"
        <<std::endl << "4. Search a specific person" << std::endl;
        
        std::cin >> first_choice;

        if (first_choice == "1")
        {
            
            for(int i = 0; i < 100; i++)
            {
                std::cout << std::flush << "Room " << i + 1
                <<" : id = " << rooms[i].GetId() << std::endl; 
            }
            while (true){
                std::string choice;
                std::cout << std::endl << "To go back , please enter 0" << std::endl;
                std::cin >> choice;
                if (choice == "0")
                {
                    break;
                }
                else
                {
                    std::cout << "Please enter a valid choice." << std::endl;
                }
            }
            

        }
        else if (first_choice == "2")
        {
            for(int i = 0; i < 100; i++)
            {
                std::cout << std::flush << "Person " << i + 1
                <<" : id = " << persons[i].GetName() << std::endl; 
            }
            while (true){
                std::string choice;
                std::cout << std::endl << "To go back , please enter 0" << std::endl;
                std::cin >> choice;
                if (choice == "0")
                {
                    break;
                }
                else
                {
                    std::cout << "Please enter a valid choice." << std::endl;
                }
            }
        }
        else if(first_choice == "3")
        {
            while (true)
            {
                int id;
                std::cout << std::flush << "Enter the Rooms Id please." << std::endl;
                std::cin >> id;
                try
                {
                    
                    std::cout << std::flush << "Customer name : " << rooms[id].GetName()
                    <<std::endl << "Id : " << rooms[id].GetId()
                    <<std::endl << "Price : " << rooms[id].GetPrice()
                    <<std::endl << "Is room free : " << rooms[id].GetStatus()
                    <<std::endl << std::endl <<std::endl <<std::endl
                    <<"To go back to the main menu, enter 0";
                    break;
                }
                catch(...)
                {
                    std::cout <<std::endl << "An error occured. Make sure you entered a valid ID" << std::endl;
                }
                while(true)
                {
                    std::string choice;

                    if(choice == "0")
                    {
                        break;
                    }
                    else
                    {
                        std::cout << std::endl << "Make sure you entered 0 to leave"
                        <<std::endl;
                    }
                }
            }
        }
        else if (first_choice == "4")
        {
            while (true)
            {
                int id;
                std::cout << std::flush << "Enter the persons Id please." << std::endl;
                std::cin >> id;
                try
                {
                    
                    std::cout << std::flush << "Name : " << persons[id].GetName()
                    << std::endl << "Gender : " << persons[id].GetGender()
                    << std::endl << "Nationality : " << persons[id].GetNationality()
                    <<std::endl << "Social status : " << persons[id].GetSocialStatus()
                    <<std::endl << "Id : " << persons[id].GetId()
                    <<std::endl << "Balance : " << persons[id].GetBalance()
                    <<std::endl << "Age : " << persons[id].GetAge()
                    <<std::endl << "Room : " << persons[id].GetRoom()
                    <<std::endl << std::endl <<std::endl <<std::endl
                    <<"To go back to the main menu, enter 0";
                    break;
                }
                catch(...)
                {
                    std::cout <<std::endl << "An error occured. Make sure you entered a valid ID" << std::endl;
                }
                while(true)
                {
                    std::string choice;

                    if(choice == "0")
                    {
                        break;
                    }
                    else
                    {
                        std::cout << std::endl << "Make sure you entered 0 to leave"
                        <<std::endl;
                    }
                }
            }
        }
        else
        {
            std::cout<< "Please enter a valid number from the 4 above." << std::endl;
        }
    }
    return 0;
}