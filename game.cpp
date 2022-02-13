//
// Created by quin on 12/02/2022.
//

#include "game.h"

Game::Game(std::string naam_game, int release_year, double prijs) : naam_game(naam_game),
release_year(release_year), nieuw_prijs(nieuw_prijs)  {

}
// accessor
std::string Game::get_naam() {
    return naam_game;
}

double Game::get_prijs() {
    return prijs;
}
double Game::get_nieuw_prijs(){
    return nieuw_prijs;
}
// mutator
void Game::set_huidige_prijs(int huidige_prijs) {
    huidige_prijs = huidige_prijs;
}


std::ostream& operator<<(std::ostream& os, Game & mc) {
    os << mc.get_naam() << " uitgegeven in : " << mc.get_release_year() << "nieuwe prijs : " <<
       mc.get_prijs() << "nu voor : " << mc.get_nieuwe_prijs();
    return os;

}