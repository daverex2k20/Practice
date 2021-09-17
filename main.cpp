/**
* Magic Eight Ball Program
* This is a simple program to simulate a magic 8-ball
*
* This is a good example of using arrays, rand, and strings in c++
* By Nathan Gallagher
*/

//Include standard library, input output stream, and string
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
//Use a constant to set the array length
const int ARRAY_LENGTH = 6;
//Create an array to store our 8 ball responses
string eightBall[ARRAY_LENGTH];
//Set a bool flag for our main game loop
bool prgExit = false;

/**
* Main function for our program. We just need this one
* function for our 8-ball program. 
*/
int main(int argc, char *argv[]){
    //Set up the random seed when getting random numbers.
    srand ( time(0));
    //Set up a string to store user input
    string userInput;
    //populate array
        eightBall[0] = "No";
        eightBall[1] = "Yes";
        eightBall[2] = "Perhaps...";
        eightBall[3] = "Most definetly yes";
        eightBall[4] = "Almost positively not";
        eightBall[5] = "I think so...";
    //output a welcome message
    cout << "Welcome to the Magic 8-Ball Game!\n";
    cout << "Type a Yes or No question to play, or type 'exit' to quit\n";
    //create the main game loop
    while(!prgExit){
        //output the question line
        cout << "\nAsk me a question and I will tell the future!\n" ; 
        //Get user input: notice i didn't use cin? Because I wanted
        // to ignore spaces on user input. change this line to
        // cin << userInput and you'll see what I mean :)       
        getline(cin, userInput);
        //See if the exit command was entered... 
        if(userInput.compare("exit") == 0)prgExit=true;   
        //if exit wasnt entered, make sure that the string isnt empty    
        if(userInput.compare("") != 0 && userInput.compare("exit") != 0){
             //output a random eight ball resonse
             //using rand()%ARRAY_LENGTH sets the range from 0 to 5
             //(the length of our array)
             cout << eightBall[rand()%ARRAY_LENGTH] << "\n";
             //Reset user input to empty
             userInput = "";
        }   
    } 
    //User exited, so output a nice leaving message
    cout << "Thanks for playing!\n";  
    //Pause so the user can choose to return to command prompt 
    system("PAUSE");
    return EXIT_SUCCESS;
}
