#include <iostream>
#include <vector>
#include "IdeaReader.h"
#include "RandomSelector.h"


using namespace std;

int main() {
    IdeaReader ideaReader;
    vector<string> ideas = ideaReader.getIdeas();

    RandomSelector randomSelector;
    string idea = randomSelector.selectRandom(ideas);

    cout << idea;

    return 0;
}

