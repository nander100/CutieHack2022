#include "DialogNode.h"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

DialogNode::DialogNode(const string& dialog, const int& numChildren, unique_ptr<DialogNode>& parentNode) {
    this->dialog = dialog;
    this->numChildren = numChildren;
    for (unsigned i = 0; i < numChildren; ++i) {
        unique_ptr<DialogNode> node = make_unique<DialogNode>();
        children.push_back(node);
    }

}

DialogNode::~DialogNode() {

}

void DialogNode::setDialog(const string& s) {
    dialog = s;
}

string DialogNode::getDialog() const {
    return dialog;
}



void DialogNode::debugData() const {

    cout << "Displaying Dialog: " << endl;
    cout << dialog << endl;
    cout << "Number of pathways: " << numChildren << endl;
}