//
// Created by quin on 12/02/2022.
//

#include "persoon.h"
#include "game.h"

Persoon::Persoon(std::string naam, double budget) : naam(naam), budget(budget) {

}

void Persoon::koop_game(Game g) {
    for (auto i : games) {
        std::cout << i.get_naam();
    }
    if (std::find(games.begin(), games.end(), g) != games.end()) {
        std::cout << "gelukt";
    }
    if(budget >= g.get_prijs()) {
        games.push_back(g);
        budget -= g.get_nieuw_prijs();
    }
}

void Persoon::verkoop_game(Game g, Persoon koper) {
    if (koper.has_game(g) == False) {
        if (has_game(g) == True) {
            if (koper.get_budget() >= g.get_prijs()) {
                koper.koop_game(g);
                games.remove(games.begin(), games.end(), g);
            }
        }
    }
}

double Persoon::get_budget() {
    return budget ;
}

bool Persoon::has_game(Game g) {
    // checker of Persoon game heeft
    for (auto g: games) {
        if (std::find(games.begin(), games.end(), g) != games.end()) {
            return True;
        } else {
            return False;
        }
    }
}

void Persoon::set_budget(double budget) {
    budget = budget;
}


std::ostream& operator<<(std::ostream& os, Persoon & mc)
{
os << "\n" "p1 : " << mc.naam << "heeft een budget van : " << mc.get_budget() <<
 "en bezit de volgende games: " << mc.games;
return os;

}

