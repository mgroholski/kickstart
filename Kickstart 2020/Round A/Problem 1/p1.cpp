//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56

#include <iostream>
#include <stdlib.h>


int bought(int *number, int* budget) {
    int bought = 0;
    //Calculate best options to be bought
}

int main() {
    //Recieves amount of test cases
    int cases;
    std::cin >> cases;
    for (int i = 0; i < cases; i++) {
        int *numHouses = (int *) std::malloc(sizeof(int)), *budget = (int *) std::malloc(sizeof(int));
        std::cin >> *numHouses >> *budget;
        std::cout << "Case #" << i << ": " << bought(numHouses, budget);
        std::free(numHouses);
        std::free(budget);
    }
    return 1;
}