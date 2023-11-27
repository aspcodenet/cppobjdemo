#ifndef __HOCKEY_PLAYER_H
#define __HOCKEY_PLAYER_H

#include <string>
#include <exception>

class HockeyPlayer{
public:    

    //constructor = ange paramtrar som är mandatory för en Player
    // OPK om ni vill
    // HockeyPlayer(std::string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }

    //constructor = ange paramtrar som är mandatory för en Player
    // Såsom man brukar = best practice
    HockeyPlayer(std::string name, int age);
    HockeyPlayer(std::string name, int age,std::string team, int jerseyNumber);

    std::string getName();
    void setAge(int age);
    void setJerseyNumber(int jerseyNumber);
    void setTeam(std::string team);

private:
    std::string name;     
    int age;
    int jerseyNumber;     
    std::string team;     
};


#endif // __HOCKEY_PLAYER_H