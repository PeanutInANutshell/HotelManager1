#include <iostream>
#include "Person.h"


Person::Person(std::string p_name, std::string p_gender, std::string p_nationality,
            std::string p_socialStatus, int p_id, int p_balance, int p_age)
{
    name = p_name;
    gender = p_gender;
    nationality = p_nationality;
    socialStatus = p_socialStatus;
    id = p_id;
    balance = p_balance;
    age = p_age;
}



std::string Person::GetName()
{
    return name;
}

int Person::GetRoom()
{
    return room;
}

int Person::GetId()
{
    return id;
}

std::string Person::GetGender()
{
    return gender;
}
std::string Person::GetNationality()
{
    return nationality;
}
std::string Person::GetSocialStatus()
{
    return socialStatus;
}
int Person::GetBalance()
{
    return balance;
}
int Person::GetAge()
{
    return age;
}



void Person::SetName(std::string Pname)
{
    name = Pname;
}

void Person::SetRoom(int p_room)
{
    room = p_room;
}

void Person::SetId(int p_id)
{
    id = p_id;
}

void Person::SetGender(std::string Pgender)
{
    gender = Pgender;
}
void Person::SetNationality(std::string nation)
{
    nationality = nation;
}
void Person::SetSocialStatus(std::string status)
{
    socialStatus = status;
}
void Person::SetBalance(int Pbalance)
{
    balance = Pbalance;
}
void Person::SetAge(int P_age)
{
    age = P_age;
}

std::string* Person::ShowInfo()
{
    static std::string info[7];
    info[0] =  name;
    info[1] =  gender;
    info[2] =  nationality;
    info[3] = socialStatus;
    info[4] = balance;
    info[5] =   age;
    info[6] = room;
    return info;
}
