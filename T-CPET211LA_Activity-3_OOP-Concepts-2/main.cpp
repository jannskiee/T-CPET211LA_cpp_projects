// The parent class (Character) has two functions. One function will input and return the attack stats,
// while the second function will input and return the defense stats.
//    •	There are two derive classes (Troll and Human)
//    •	The winner of the fight is determined by the highest stats between the difference of their attack and defense.


#include <iostream>

class Character {
public:
    int attackStats;
    int defenseStats;
};

class Troll : public Character {
public:
    Troll(int attack, int defense) : Character() {
        attackStats = attack;
        defenseStats = defense;
    }
};

class Human : public Character {
public:
    Human(int attack, int defense) : Character() {
        attackStats = attack;
        defenseStats = defense;
    }
};

Character fight(Character c1, Character c2) {
    int diff1 = c1.attackStats - c1.defenseStats;
    int diff2 = c2.attackStats - c2.defenseStats;

    if (diff1 > diff2) {
        return c1;
    } else {
        return c2;
    }
}

int main() {
    int trollAttack, trollDefense, humanAttack, humanDefense;

    std::cout << "Enter Troll's attack and defense stats: " << std::endl;
    std::cin >> trollAttack >> trollDefense;

    std::cout << "Enter Human's attack and defense stats: " << std::endl;
    std::cin >> humanAttack >> humanDefense;

    Troll t(trollAttack, trollDefense);
    Human h(humanAttack, humanDefense);

    Character winner = fight(t, h);

    if (winner.attackStats == t.attackStats && winner.defenseStats == t.defenseStats) {
        std::cout << "Troll wins the fight!" << std::endl;
    } else {
        std::cout << "Human wins the fight!" << std::endl;
    }

    return 0;
}