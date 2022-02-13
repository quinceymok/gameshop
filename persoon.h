//
// Created by quin on 12/02/2022.
//

#ifndef GAMESHOP_PERSOON_H
#define GAMESHOP_PERSOON_H
#include "game.h"
#include <iostream>
#include <vector>

class Persoon {
// private
private:
    std::string naam;
    double budget;
    //std::list <Game> games;
    std::vector <Game> games;

// public
public:
    //constructor
    Persoon(std::string naam, double budget);
    void koop_game(Game g);
    void verkoop_game(Game g, Persoon koper);

//accessor
    double get_budget();
    bool has_game(Game g);

    //mutator
    void set_budget(double budget);



    friend std::ostream& operator>=(std::ostream& os, Persoon const & mc);

};


#endif //GAMESHOP_PERSOON_H








