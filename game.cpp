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

int equip_testmentDecorator::getAttack() const {return character -> getAttack();}
int equip_testmentDecorator::getDefense() const {return character -> getDefense();}
int equip_testmentDecorator::getSpeed() const {return character -> getSpeed();}


int Boots::getSpeed() const {return character->getSpeed() + 15;}
string Boots::getDescription() const {return character->getDescription() + ", Boots";}

int Sword::getAttack() const {return character->getAttack() + 30;}
string Sword::getDescription() const {return character->getDescription() + ", Sword";}

int Bow::getAttack() const {return character->getAttack() + 25;}
string Bow::getDescription() const {return character->getDescription() + ", Bow";}

int Staff::getAttack() const {return character->getAttack() + 20;}
string Staff::getDescription() const {return character->getDescription() + ", Staff";}

int Armor::getDefense() const {return character->getDefense() + 30;}
int Armor::getSpeed() const {return character->getSpeed() - 5;}
string Armor::getDescription() const {return character->getDescription() + ", Armor";}
