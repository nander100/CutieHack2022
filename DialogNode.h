#ifndef _DIALOGNODE_H_
#define _DIALOGNODE_H_
#include <iostream>
#include <vector>

using namespace std;

class DialogNode {

  public:

    DialogNode();
    ~DialogNode();
    void debugData() const;
    
  private:

    string displayText;
    int numChildren;
    unique_ptr<DialogNode> parent;
    vector< unique_ptr<DialogNode> > children;
    vector<string> choices;
    const int promptPaths() const;
    const string promptDialog() const;
    
    

};

#endif