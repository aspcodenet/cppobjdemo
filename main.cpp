#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <limits>
#include "hockeyplayer.h"


//  struct Employee{
//     operator() 
//  };


void addPlayer(std::vector<HockeyPlayer> &allPlayers){
    std::string namn;
    std::string age;
    std::cout << "Ange namn:" << std::endl;
    std::getline(std::cin,namn);
    std::cout << "Ange age:" << std::endl;
    std::cin >> age;

    HockeyPlayer player(namn,std::atoi(age.c_str()));
    allPlayers.push_back(player);
}


int main(){
    // HockeyPlayer *player = new HockeyPlayer("Foppa",21);
    // delete player;
    std::vector<HockeyPlayer> allPlayers;
    while(true){
        std::string action;
        std::cout << "1. Skapa ny" << std::endl << "2. Lista" << std::endl;
        std::cout << "Action:" << std::endl;
        std::cin >> action;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        if(action == "1"){
            addPlayer(allPlayers);
        }
        if(action == "2"){
            //
            for(HockeyPlayer p : allPlayers){
                std::cout << p.getName() << std::endl;
            }
        }

    }

    return 0;
}