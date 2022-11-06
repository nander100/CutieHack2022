#include "DialogNode.h"
#include "Story.h"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

const string promptDialog();
const int promptPaths();
int main() {
    
    // string s = promptDialog();
    // int i = promptPaths();
    // DialogNode root();

    ofstream fileOut;
    fileOut.open("story.txt");

    if (!fileOut.is_open()) {
        cout << "Error creating output file" << endl;\
        return 1; 
    }

    cout << "Enter your dialog (DONE to quit): " << endl;
    string input;
    while (input != "DONE") {
        getline(cin, input);
        if (input != "DONE") {
            fileOut << input << "\n";
        }
    }

    int pathways = 0;
    cout << "Enter number of pathways: ";
    cin >> pathways;
    cout << endl;

    int counter = 1;
    while (pathways > 0) {

        cout <<  "Option " << counter << endl;
    }


    fileOut.close();


    //x.debugData();

    return 0;
}