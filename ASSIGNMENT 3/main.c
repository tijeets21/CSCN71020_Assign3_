#include<stdio.h>
#include<string.h>
#include<assert.h>

#define ROCK "Rock"
#define PAPER "Paper"
#define SCISSORS "Scissors"




const char* determine_winner(const char* player1_throw, const char* player2_throw) {
    // Implement minimal code to pass the failing test cases
    if (strcmp(player1_throw, ROCK) == 0 && strcmp(player2_throw, SCISSORS) == 0) {
        return "Player1";
    }
    else if (strcmp(player1_throw, PAPER) == 0 && strcmp(player2_throw, ROCK) == 0) {
        return "Player1";
    }
    else if (strcmp(player1_throw, SCISSORS) == 0 && strcmp(player2_throw, PAPER) == 0) {
        return "Player1";
    }
    else if (strcmp(player1_throw, player2_throw) == 0) {
        return "Draw";
    }
    else {
        return "Player2"; // Assuming Player2 wins for other cases
    }
}


void  test_determine_winner() {
    char* result;

    // Test case 1: Rock vs Scissors, Player1 should win
    result = determine_winner(ROCK, SCISSORS);
    assert(strcmp(result, "Player1") == 0);

    // Test case 2: Paper vs Rock, Player1 should win
    result = determine_winner(PAPER, ROCK);
    assert(strcmp(result, "Player1") == 0);

    // Test case 3: Scissors vs Paper, Player1 should win
    result = determine_winner(SCISSORS, PAPER);
    assert(strcmp(result, "Player1") == 0);

    // Add more failing test cases for different scenarios
    // ...


}

int main() {
    test_determine_winner();
    printf("All tests passed!\n");
    return 0;
}
