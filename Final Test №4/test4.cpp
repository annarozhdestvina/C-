#include <iostream>

enum class MonstersType
{
    ogre,
    goblin,
    skeleton,
    orc,
    troll
};

struct Monsters {
    MonstersType type;
    std::string name;
    int health;
};

void printMonster(Monsters my_monster) {
    if(my_monster.type == MonstersType::ogre)
        std::cout << "ogre";

    std::cout << " his name is " << my_monster.name << " power is " << my_monster.health;
}

int main() {
    Monsters orge = {MonstersType::ogre, "Dyshka", 200};
    Monsters orc = {MonstersType::orc, "Full", 25};
    
    printMonster(orge);

    return 0;
}