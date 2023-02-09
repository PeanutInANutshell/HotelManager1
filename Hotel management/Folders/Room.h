#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <vector>
#include "Person.h"

class Room {
    private:
        std::string customerName = "";
        int roomId = 0;
        bool isOccupied = false;
        int price = 0;
    public:
        Room(std::string name,int id, bool occupied , int price);
        
        std::string GetName();
        void SetName(std::string name);

        int GetId();
        void SetId(int id);

        bool GetStatus();
        void SetStatus(bool status);

        int GetPrice();
        void SetPrice(int room_price);

        std::string* GetInfo();
        void AssignRoom(Person person);
        void ClearRoom();
        int roomNumber;
};

#endif