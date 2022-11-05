#include "DialogNode.h"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

DialogNode::DialogNode() {
    displayText = promptDialog();
    numChildren = promptPaths();
}

DialogNode::~DialogNode() {

}

const int DialogNode::promptPaths() const {
    
    int numNodes = 0;
    cout << "How many paths?: ";
    cin >> numNodes;
    cout << endl;

    return numNodes;
}

const string DialogNode::promptDialog() const {
    ostringstream userDialog;
    string input;
    cout << "Enter Dialog (DONE to finish): " << endl;
    while (input != "DONE") {
        getline(cin, input);
        if (input != "DONE") {
        userDialog << input;
        }
        userDialog << "\n";
    }
    
    return userDialog.str();
}

void DialogNode::debugData() const {

    cout << "Displaying Dialog: " << endl;
    cout << displayText << endl;
    cout << "Number of pathways: " << numChildren << endl;
}