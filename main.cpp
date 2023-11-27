#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <limits>


//  struct Employee{
//     operator() 
//  };

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
    HockeyPlayer(std::string name, int age)
        :name(name){
            setAge(age);
    }
    
    HockeyPlayer(std::string name, int age,std::string team, int jerseyNumber)
        :HockeyPlayer(name,age){
         this->team = team;   
         this->jerseyNumber = jerseyNumber;   
    }


    std::string getName(){
        return name;
    }



    void setAge(int age){
        if(age <0){
            throw std::invalid_argument("age less than 0, stupid");
        }
        this->age = age;
    }
    void setJerseyNumber(int jerseyNumber){
        if(jerseyNumber <0){
            throw std::invalid_argument("jerseyNumber less than 0, stupid");
        }
        this->jerseyNumber = jerseyNumber;
    }
    void setTeam(std::string team){
        this->team = team;
    }

private:
    std::string name;     
    int age;
    int jerseyNumber;     
    std::string team;     
};

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