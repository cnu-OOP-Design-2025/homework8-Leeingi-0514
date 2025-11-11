#include "game.h"

int Knight::getAttack() const {return 70;}
int Knight::getDefense() const {return 80;}
int Knight::getSpeed() const {return 40;}

int Wizard::getAttack() const {return 50;}
int Wizard::getSpeed() const {return 50;}
int Wizard::getDefense() const {return 30;}

int Archer::getAttack() const {return 60;}
int Archer::getSpeed() const {return 70;}
int Archer::getDefense() const {return 40;}

int Staff::getAttack() const {return character->getAttack() + 20;}
int Sword::getAttack() const {return character->getAttack() + 30;}
int Bow::getAttack() const {return character->getAttack() + 25;}
int Boots::getSpeed() const {return character->getSpeed() + 15;}
int Armor::getDefense() const {return character->getDefense() + 30;}
int Armor::getSpeed() const {return character->getSpeed() - 5;}

