#include <types.hpp>

std::vector<std::string> Types::normal(){
    std::vector<std::string> strengths{};
    std::vector<std::string> weaknesses{"fighting"};
    std::unordered_map<std::string,std::vector<std::string>> normal = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::grass(){
    std::vector<std::string> strengths{"water","rock","ground"};
    std::vector<std::string> weaknesses{"fire","poison","ice","bug","flying"};
    std::unordered_map<std::string,std::vector<std::string>> grass = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::fire(){
    std::vector<std::string> strengths{"grass","bug","ice","steel"};
    std::vector<std::string> weaknesses{"water","rock","ground"};
    std::unordered_map<std::string,std::vector<std::string>> fire = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::water(){
    std::vector<std::string> strengths{"fire","rock","ground"};
    std::vector<std::string> weaknesses{"grass","electric"};
    std::unordered_map<std::string,std::vector<std::string>> water = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::electric(){
    std::vector<std::string> strengths{"water","flying"};
    std::vector<std::string> weaknesses{"ground"};
    std::unordered_map<std::string,std::vector<std::string>> electric = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::rock(){
    std::vector<std::string> strengths{"fire","ice","flying"};
    std::vector<std::string> weaknesses{"grass","water","steel","ground","fighting"};
    std::unordered_map<std::string,std::vector<std::string>> rock = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::poison(){
    std::vector<std::string> strengths{"grass","fairy"};
    std::vector<std::string> weaknesses{"ground","psychic"};
    std::unordered_map<std::string,std::vector<std::string>> poison = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::psychic(){
    std::vector<std::string> strengths{"poison","fighting"};
    std::vector<std::string> weaknesses{"dark","ghost","bug"};
    std::unordered_map<std::string,std::vector<std::string>> psychic = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::ice(){
    std::vector<std::string> strengths{"grass","flying","dragon","ground"};
    std::vector<std::string> weaknesses{"rock","fire","fighting","steel"};
    std::unordered_map<std::string,std::vector<std::string>> ice = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::ground(){
    std::vector<std::string> strengths{"fire","rock","steel","electric","poison"};
    std::vector<std::string> weaknesses{"grass","water","ice"};
    std::unordered_map<std::string,std::vector<std::string>> ground = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::flying(){
    std::vector<std::string> strengths{"grass","bug","fighting"};
    std::vector<std::string> weaknesses{"electric","ice","rock"};
    std::unordered_map<std::string,std::vector<std::string>> flying = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::fighting(){
    std::vector<std::string> strengths{"normal","rock","steel", "dark"};
    std::vector<std::string> weaknesses{"psychic","flying"};
    std::unordered_map<std::string,std::vector<std::string>> fighting = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::bug(){
    std::vector<std::string> strengths{"grass","psychic","dark"};
    std::vector<std::string> weaknesses{"fire","rock","flying"};
    std::unordered_map<std::string,std::vector<std::string>> bug = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::ghost(){
    std::vector<std::string> strengths{"ghost","psychic"};
    std::vector<std::string> weaknesses{"ghost","dark"};
    std::unordered_map<std::string,std::vector<std::string>> ghost = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::dragon(){
    std::vector<std::string> strengths{"dragon"};
    std::vector<std::string> weaknesses{"dragon","ice","fairy"};
    std::unordered_map<std::string,std::vector<std::string>> dragon = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::dark(){
    std::vector<std::string> strengths{"psychic","ghost"};
    std::vector<std::string> weaknesses{"fighting","bug","fairy"};
    std::unordered_map<std::string,std::vector<std::string>> dark = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::steel(){
    std::vector<std::string> strengths{"rock","fairy","ice"};
    std::vector<std::string> weaknesses{"fire","ground","fighting"};
    std::unordered_map<std::string,std::vector<std::string>> steel = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}

std::vector<std::string> Types::fairy(){
    std::vector<std::string> strengths{"dragon","dark","fighting"};
    std::vector<std::string> weaknesses{"poison","steel"};
    std::unordered_map<std::string,std::vector<std::string>> fairy = {{"Strengths",strengths},{"Weaknesses",weaknesses}};
}