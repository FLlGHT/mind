//
// Created by Michael Fedorenko on 17.02.2024.
//

#ifndef MIND_IDEAREADER_H
#define MIND_IDEAREADER_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class IdeaReader {
public:
    vector<string> getIdeas() {
        ifstream mind("../files/mind_eng.txt");
        vector<string> ideas;

        while (!mind.eof()) {
            string text;
            while (getline(mind, text)) {
                if (!text.empty()) {
                    ideas.push_back(text);
                }
            }
        }
        mind.close();
        return ideas;
    }
};


#endif //MIND_IDEAREADER_H
