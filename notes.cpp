#include <iostream>
#include <string>
#include <vector>

using namespace std;

string sharpNotes[] = {
    "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

string flatNotes[] = {
    "A", "Bb", "B", "C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab"};

int main(void) {
    int i;
    int index;
    string startNote;
    string myNotes[12];
    char sharp;

    cout<<"Would you like flats or sharps?"<<endl;
    cout<<"Type b or #"<<endl;

//    cin >> sharp;

    cout<<"Enter the note you would like to start at:"<<endl;
    //input from user for start note
    getline(cin, startNote);
    
    // find the start position in the notes array
    for (i = 0 ; i < sizeof(sharpNotes)/sizeof(sharpNotes[0]); ++i){
        if(sharpNotes[i] == startNote)
            index = i;
    }

    // fill the array from the designated start position
    for (i = 0 ; i < sizeof(sharpNotes)/sizeof(sharpNotes[0]); i++){
        myNotes[i] = sharpNotes[index];

        if(sharpNotes[index] == "G#")
            index = 0;
        else
            index++;
    }
    
    for (i = 0 ; i < sizeof(sharpNotes)/sizeof(sharpNotes[0]); i++){
        cout<<myNotes[i]<<endl;
    }
    
    cout<<sharp<<endl;
    cin.get();
}
