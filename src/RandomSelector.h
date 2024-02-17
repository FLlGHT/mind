//
// Created by Michael Fedorenko on 17.02.2024.
//

#ifndef MIND_RANDOMSELECTOR_H
#define MIND_RANDOMSELECTOR_H

#include <iostream>
#include <vector>

using namespace std;

class RandomSelector {

public:
    string selectRandom(vector<string>& list) {
        srand(time(NULL));
        int randomIndex = rand() % list.size();
        return list[randomIndex];
    }
};


#endif //MIND_RANDOMSELECTOR_H
