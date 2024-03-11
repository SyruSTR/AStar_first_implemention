#include <iostream>
#include "Nodes.h"

int main() {
    Nodes nodes;

    std::pair<std::string, std::string> pair1;
    pair1.first = "A";
    pair1.second = "B";
    int distance = 10;

    std::pair<std::string, std::string> pair2;
    pair2.first = "B";
    pair2.second = "A";
    int distance2 = 5;

    std::pair<std::string, std::string> pair3;
    pair3.first = "C";
    pair3.second = "A";
    int distance3 = 100;

    nodes.Add_new_pair(pair1, distance);
    nodes.Add_new_pair(pair2, distance2);
    nodes.Add_new_pair(pair3, distance3);

    nodes.Print_all_pairs();
}