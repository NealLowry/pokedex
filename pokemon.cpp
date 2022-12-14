#include "pokemon.hpp"
#include <iostream>

Pokemon::Pokemon(std::string name, int id, std::vector<std::string> types, std::vector<Pokemon> evolutionTree, double weight, double height){
    this->name = name;
    this->id = id;
    this->types = types;
    this->evolutionTree = evolutionTree;
    this->weight = weight;
    this->height = height;
}

void Pokemon::printInfo(){
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "ID: " << this->id << std::endl;
    for (int i=0; i<=this->types.size(); i++){
        std::cout << "Type " << i+1 << ": " << this->types[i] << std::endl; 
    }
    for (int i=0; i<=this->evolutionTree.size(); i++){
        std::cout << "Type " << i+1 << ": " << this->evolutionTree[i].name << std::endl; 
    }
    std::cout << "Height: " << this->height << std::endl;
    std::cout << "Weight: " << this->weight << std::endl;
}

std::string Pokemon::getName(){
    return this->name;
}

bool Pokemon::isEvolvable(){
    for (int i=0; i<this->evolutionTree.size(); i++){
        std::string name = this->evolutionTree[i].name;
        if (name == this->evolutionTree.back().name){
            return true;
            break;
        }
        else{
            return false;
        }
    }
}

int Pokemon::getID(){
    return this->id;
}

std::vector<std::string> Pokemon::getTypes(){
    return this->types;
}

std::vector<Pokemon> Pokemon::getEvoTree(){
    return this->evolutionTree;
}

std::vector<std::string> Pokemon::getWeaknesses(){
    return ;
}
