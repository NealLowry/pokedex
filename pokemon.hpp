#ifndef POKEMON_HPP_
#define POKEMON_HPP_

#include <string>
#include <vector>

struct Pokemon{
    std::string name;
    int id;
    std::vector<std::string> types;
    std::vector<Pokemon> evolutionTree;
    double weight;
    double height;
    Pokemon(std::string, int, std::vector<std::string>, std::vector<Pokemon>, double, double);
    void printInfo();
    std::string getName();
    bool isEvolvable();
    int getID();
    std::vector<std::string> getTypes();
    std::vector<Pokemon> getEvoTree();
    std::vector<std::string> getWeaknesses();
    std::vector<std::string> getStrengths();


};





#endif /* POKEMON_HPP_ */