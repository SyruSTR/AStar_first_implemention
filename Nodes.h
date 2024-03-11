#ifndef NODES_H
#define NODES_H


#include <vector>
#include <string>
#include <iostream>


class Nodes {
private:
    struct Node{
        std::pair<std::string,std::string> pair;
        int distance;
    };

    std::vector<Node> nodes;
    std::vector<Node>::iterator it;

public:
    Nodes(){
        it = nodes.begin();
    }

    void Add_new_pair(const std::pair<std::string,std::string>& pair, int distance){
        struct Node node;
        node.pair = pair;
        node.distance = distance;

        nodes.insert(it,node);
        it = nodes.begin();
    }

    void Print_all_pairs(){
        for (auto i = nodes.begin(); i < nodes.end(); ++i) {
            std::cout << "Pair:[" << i->pair.first << " -> " << i->pair.second << "] with distance - " << i->distance << "\n";
//            std::cout << i->pair.first << "\n";
        }
    }
};


#endif //NODES_H
