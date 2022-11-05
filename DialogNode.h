#ifndef _DIALOGNODE_H_
#define _DIALOGNODE_H_
#include <iostream>
#include <vector>

using namespace std;

class DialogNode {

  public:

    DialogNode();
    ~DialogNode();

  private:

    string displayText;
    unique_ptr<DialogNode> parent;
    vector< unique_ptr<DialogNode> > children;
    vector<string> choices;
    void promptData() const;
    

};

#endif