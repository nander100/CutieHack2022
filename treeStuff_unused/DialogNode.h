#ifndef _DIALOGNODE_H_
#define _DIALOGNODE_H_
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class DialogNode {

  public:

    DialogNode(const string& dialog, const int& numChildren, unique_ptr<DialogNode>& parentNode);
    ~DialogNode();
    void debugData() const;
    void setDialog(const string& s);
    string getDialog() const;

  private:

    string dialog;
    int numChildren;
    unique_ptr<DialogNode> parent;
    vector< unique_ptr<DialogNode> > children;
    vector<string> choices;
    //const int promptPaths() const;
    //const string promptDialog() const;
    
    

};

#endif