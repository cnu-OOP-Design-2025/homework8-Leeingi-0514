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

int Armor::getAttack() const {}