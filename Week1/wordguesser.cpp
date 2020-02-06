//
// Created by Jan Mouwes on 06/02/2020.
//

#include <iostream>

using namespace std;

void runGuesser(int maxGuesses, const char word[]);

int run() {
    const int MAX_GUESSES = 10;
    const int MAX_WORD_LENGTH = 12;

    char word[MAX_WORD_LENGTH];

    cout << "Which word should be guessed? (max characters: " << MAX_WORD_LENGTH << ")" << endl;

    cin.getline(word, MAX_WORD_LENGTH);

    runGuesser(MAX_GUESSES, word);

    return 0;
}

bool contains(char word[], char searchChar) {
    int length = strlen(word);

    for (int i = 0; i < length; ++i) {
        if (word[i] == searchChar ) {
            return true;
        }
    }

    return false;
}

int fillCurrentKnownWord(const char *word, char *guessedChars, char outputArray[]) {
    int wordLength = strlen(word);
    int missingChars = 0;

    for (int i = 0; i < wordLength; ++i) {
        char currentWordChar = word[i];

        if (contains(guessedChars, currentWordChar)) {
            outputArray[i] = currentWordChar;
        } else {
            outputArray[i] = '.';
            missingChars++;
        }
    }

    return missingChars;
}

void runGuesser(const int maxGuesses, const char word[]) {
    int guessesLeft = maxGuesses;
    bool wordGuessed;

    char guessedChars[maxGuesses];
    do {
        char currentKnownWord[strlen(word)];
        int missingChars = fillCurrentKnownWord(word, guessedChars, currentKnownWord);
        wordGuessed = missingChars == 0;

        if (wordGuessed) {
            cout << "Congratulations! You guessed: " << word << endl;
            break;
        }

        cout << "Current known word: " << currentKnownWord << " Guesses left: "<< guessesLeft << endl;

        cout << "Which letter would you like to guess?" << endl;

        char currentGuess;
        cin >> currentGuess;

        int currentIndex = maxGuesses - guessesLeft;

        guessedChars[currentIndex] = currentGuess;

        guessesLeft--;
    } while (guessesLeft > 0 && !wordGuessed);

    if (!wordGuessed) {
        cout << "Too bad, you ran out of guesses" << endl;
    }
}