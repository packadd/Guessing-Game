#include <iostream>

using namespace std;

int main()
{
  int secretNumber = 7;
  int guess;
  int guessCount = 0;
  int guessLimit = 3;
  bool outOfGuesses = false;


  while(secretNumber != guess && !outOfGuesses){
    if(guessCount < guessLimit){
    cout << "Enter guess: " << endl;
    cin >> guess;
    guessCount++;
  } else {
      outOfGuesses = true;
  }
}

  if(outOfGuesses){
    cout << "You Lose!" << endl;
  } else {
    cout << "You Win!" << endl;
  }

  return 0;
}
