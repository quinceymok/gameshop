//
// Created by quin on 12/02/2022.
//

#ifndef GAMESHOP_GAME_H
#define GAMESHOP_GAME_H
#include <iostream>
#include <algorithm>

class Game {
// private
private:
    std::string naam_game;
    int release_year;
    double nieuw_prijs;
    double huidige_prijs = nieuw_prijs;
    const double korting = 0.7;

// public
public:
    Game(std::string naam_game, int release_year, double nieuw_prijs);


    // accessor
    int get_release_year();
    std::string get_naam();
    double get_prijs();
    double get_nieuw_prijs();
    // mutator
    void set_huidige_prijs(const int korting);


    friend std::ostream& operator<<(std::ostream& os, Game const & mc);


};


#endif //GAMESHOP_GAME_H




