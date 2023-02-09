#include <iostream>
#include "Room.h"
#include "Person.h"
Room::Room(std::string name, int id, bool status,int p_price)
{
    customerName = name;
    roomId = id;
    isOccupied = status;
    price = p_price;
}

std::string Room::GetName()
{
    return customerName;
}

void Room::SetName(std::string name)
{
    customerName = name;
}

int Room::GetId()
{
    return roomId;
}

void Room::SetId(int id)
{
    roomId = id;
}

bool Room::GetStatus()
{
    return isOccupied;
}

void Room::SetStatus(bool status)
{
    isOccupied = status;
}


int Room::GetPrice()
{
    return price;
}

void Room::SetPrice(int room_price)
{
    price = room_price;
}

std::string* Room::GetInfo()
{
    static std::string Info[4];
    Info[0] = customerName;
    Info[1] = roomId;
    Info[2] = isOccupied;
    Info[3] = roomNumber;
    return Info;
}

void Room::AssignRoom(Person person)
{
    int pBalance = person.GetBalance();
    if(pBalance >= price)
    {
       pBalance -= price;
       customerName = person.GetName();
       isOccupied = true ;
    }
}

void Room::ClearRoom()
{
    isOccupied = false;
    customerName = "";
}