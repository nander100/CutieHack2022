#include "DialogNode.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>

using namespace std;

const string promptDialog();
const int promptPathways();
const string promptDecision();
int promptDepth();
void printVector(const vector<string>& v);
void recurse (int depth, int counter, int numResults, int change, int index, vector<string>& v);

int main() {
    
    // string s = promptDialog();
    // int i = promptPaths();
    // DialogNode root();
    int recurseCounter = 1;
    int depth = promptDepth();
    int change = pow(2, (depth-2));
    int numResults = pow(2, depth)-1;
    int currIndex = (numResults-1)/2;
    cout << numResults << endl;
    vector<string> vec(numResults);
    string first = promptDialog();
    vec.at(currIndex) = first;
    //printVector(vec);
    recurse(depth, recurseCounter, numResults, change, currIndex, vec);

    ofstream outFile("test.txt");
    if (!outFile.is_open()) {
        cout << "Error creating test.txt" << endl;
        return 1;
    }

    for (unsigned i = 0; i < vec.size(); ++i) {
        outFile << vec.at(i) << endl;
    }

    outFile.close();
    
    
    // ofstream fileOut;
    // fileOut.open("story.txt");

    // if (!fileOut.is_open()) {
    //     cout << "Error creating output file" << endl;
    //     return 1; 
    // }

    // cout << "Enter your dialog (DONE to quit): " << endl;
    // string input;
    // while (input != "DONE") {
    //     getline(cin, input);
    //     if (input != "DONE") {
    //         fileOut << input << "\n";
    //     }
    // }

    // int pathways = promptPathways();


    // int counter = 1;
    // while (pathways > 0) {

    //     cout <<  "Entering Option " << counter << "..."<< endl;
    //     promptDecision();
    //     promptDialog();
    //     cout << "Enter Dialog"
    //     counter++;
    //     pathways--;

    // }


    // fileOut.close();


    //x.debugData();

    return 0;
}

const string promptDialog() {
    ostringstream userInput;
    string input;
    cout << "Enter your dialog (DONE to stop): " << endl;
    while (input != "DONE") {
        getline(cin, input);
        if (input != "DONE") {
            userInput << input;
        }
        // userInput << "\n";
    }

    return userInput.str();
}

const int promptPathways() {
    int paths = 0;
    cout << "Enter number of pathways: ";
    cin >> paths;
    cout << endl;
    return paths;
}

const string promptDecision() {
    string s = "";
    return s;
}

int promptDepth() {
    int numResults = 0;
    cout << "How many layers deep?: ";
    cin >> numResults;
    cout << endl;
    return numResults;
}

void printVector(const vector<string>& v) {
    cout << "Printing Vector: " << endl;
    for (unsigned i = 0; i < v.size(); ++i) {
        cout << v.at(i) << endl;
    }
}



void recurse(int depth, int counter, int numResults, int change, int index, vector<string>& v) {
    cout << "For OPTION " << counter << ": " << endl;
    string x = promptDialog();
    int tempUpIndex = index+change;
    v.at(tempUpIndex) = x;
    // cout << "change: " << change << endl;
    // cout << "tempUp: " << tempUpIndex << endl;

    cout << "For OPTION " << counter+1 << ": " << endl;
    string y = promptDialog();
    int tempDownIndex = index-change;
    v.at(tempDownIndex) = y;
    // cout << "change: " << change << endl;
    // cout << "tempDown" << tempDownIndex << endl;

    //printVector(v);
    counter++;
    if (counter >= depth) {
        cout << "Completed!" << endl;
    } else {
        recurse(depth, counter, numResults, change/2, tempUpIndex, v);
        recurse(depth, counter, numResults, change/2, tempDownIndex, v);     
    }
}

const string promptOption() {
    string input;
    cout << "Enter your options (DONE to stop): " << endl;
    getline(cin, input);
        // userInput << "\n";

    return input;
}