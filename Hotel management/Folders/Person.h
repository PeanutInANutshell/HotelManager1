#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class Person
{
    private:
        std::string name = "";
        std::string gender = "";
        std::string nationality = "";
        std::string socialStatus = "";
        int id = 0;
        int balance = 0;
        int age = 0;
        int room = 0;
    public:
        Person(std::string name, std::string gender, std::string nationality,
            std::string socialStatus, int id, int balance, int age);

        std::string GetName();
        int GetRoom();
        int GetId();
        std::string GetGender();
        std::string GetNationality();
        std::string GetSocialStatus();
        int GetBalance();
        int GetAge();

        void SetName(std::string name);
        void SetRoom(int room);
        void SetId(int id);
        void SetGender(std::string gender);
        void SetNationality(std::string nation);
        void SetSocialStatus(std::string status);
        void SetBalance(int balance);
        void SetAge(int age);
        std::string* ShowInfo();
};  


#endif