
/*
	Virtual functions help override methods in subclasses
*/

#include <stdio.h>
#include <iostream>

class Entity {

    public:
    	std::string GetName(){return "Entity";}

};

class Player : public Entity {
    
 private:

 	std::string m_Name;

public:

	Player(const std::string& name) // Player Constructor
	: m_Name(name){}

	std::string GetName(){return m_Name;}

};

void PrintName(Entity* entity){
    std::cout << entity->GetName() << std::endl;
}

int main()
{

    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p);

    std::cin.get();
}
