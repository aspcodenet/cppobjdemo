#include "hockeyplayer.h"
#include <stdexcept>

std::string HockeyPlayer::getName(){
    return name;
}

void HockeyPlayer::setAge(int age){
    if(age <0){
        throw std::invalid_argument("age less than 0, stupid");
    }
    this->age = age;
}

void HockeyPlayer::setJerseyNumber(int jerseyNumber){
    if(jerseyNumber <0){
        throw std::invalid_argument("jerseyNumber less than 0, stupid");
    }
    this->jerseyNumber = jerseyNumber;
}
void HockeyPlayer::setTeam(std::string team){
    this->team = team;
}

HockeyPlayer::HockeyPlayer(std::string name, int age)
    :name(name){
        setAge(age);
}

HockeyPlayer::HockeyPlayer(std::string name, int age,std::string team, int jerseyNumber)
    :HockeyPlayer(name,age){
        this->team = team;   
        this->jerseyNumber = jerseyNumber;   
}


