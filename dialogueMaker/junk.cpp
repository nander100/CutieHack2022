
// Ignore this file. Chances are it's pretty bad. I'm just practicing opening files and closing. 

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

string InputDialogue() { //Returns dialogue. 
    string dialogue;
    cout << "On-Screen Dialogue: ";
    getline(cin, dialogue);
    cout << endl;
    return dialogue;
}

string CreateOptions() { // Returns options. 
    string option;
    cout << "User Option: ";
    getline(cin, option);
    cout << endl;
    return option; 
}

string FilenameInput() { // Returns filename.
    string fileName;
    cout << "Filename: ";
    getline(cin, fileName);
    return fileName;
}

int main() { 
    
    // Get all string values. 
    string dialogue = InputDialogue(); 
    string option1 = CreateOptions();
    string option2 = CreateOptions();
    string filename = FilenameInput();

    // Open a file. 
    ofstream storyFile;
    storyFile.open(filename);

    //Print out into the file. 
    storyFile << dialogue << endl
    << option1 << endl
    << option2 << endl;

    storyFile.close();
    return 0;
}