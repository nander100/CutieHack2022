
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
    string filename;
    cout << "Make sure to end with \".txt\"\nFilename: ";
    cin >> filename;
    return filename;
}

int main() { 

    // Filename input.
    string filename = FilenameInput();

    // Open a file. 
    ofstream storyFile;
    storyFile.open(filename);

    //Check if file is open
    if (!storyFile.is_open()) {
        cout << "Error opening " << filename << endl;
        return 1;
    }
    
    int quitValue = 1;

    while (quitValue == 1) {
        // Get all string values. 
        string dialogue = InputDialogue(); 
        string option1 = CreateOptions();
        string option2 = CreateOptions();

        // Print out into the file. 
        storyFile << dialogue << endl
        << option1 << endl
        << option2 << endl;

        // Check if user wants to continue program. 
        cout << "Continue? Type 1 to continue.\n";
        cin >> quitValue;
    }

    storyFile.close();
    return 0;
}