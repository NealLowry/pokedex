#ifndef TYPES_HPP_
#define TYPES_HPP_

#include <unordered_map>
#include <string>
#include <vector>

struct Types{
    std::unordered_map<std::string,std::vector<std::string>> normal();
    std::unordered_map<std::string,std::vector<std::string>> grass();
    std::unordered_map<std::string,std::vector<std::string>> fire();
    std::unordered_map<std::string,std::vector<std::string>> water();
    std::unordered_map<std::string,std::vector<std::string>> electric();
    std::unordered_map<std::string,std::vector<std::string>> rock();
    std::unordered_map<std::string,std::vector<std::string>> poison();
    std::unordered_map<std::string,std::vector<std::string>> psychic();
    std::unordered_map<std::string,std::vector<std::string>> ice();
    std::unordered_map<std::string,std::vector<std::string>> ground();
    std::unordered_map<std::string,std::vector<std::string>> flying();
    std::unordered_map<std::string,std::vector<std::string>> fighting();
    std::unordered_map<std::string,std::vector<std::string>> bug();
    std::unordered_map<std::string,std::vector<std::string>> ghost();
    std::unordered_map<std::string,std::vector<std::string>> dragon();
    std::unordered_map<std::string,std::vector<std::string>> dark();
    std::unordered_map<std::string,std::vector<std::string>> steel();
    std::unordered_map<std::string,std::vector<std::string>> fairy();
};

#endif /* TYPES_HPP_ */