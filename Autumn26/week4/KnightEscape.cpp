#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int main() {
    int orginalX, orginalY, startX, startY, endX = -1, endY = -1, validMoves = 0;
    //std::cout << "Enter the starting position x, and starting position y" << std::endl;
    //std::cin >> startX >> startY ;
    std::srand(std::time(NULL));
    orginalX = std::rand() % 6 + 2;
    orginalY = std::rand() % 6 + 2;
    std::cout << "Starting position (x,y): " << orginalX << "," << orginalY << std::endl;
    bool validMove, validBoardPosition;
    //Knight valid move
    startX = orginalX;
    startY = orginalY;
    while((!(startX == 1 || startX == 8 ) || (!( startY == 1 || startY == 8)))) {
        validMove = false;
        validBoardPosition = true;
        std::cout << "Enter the new end position x, and new end position y" << std::endl;
        std::cin >> endX >> endY ;
        if(startX - endX == 2 || endX - startX == 2) {
            if(startY - endY == 1 || endY - startY == 1) {
                validMove = true;
            }
        } else if(startX - endX == 1 || endX - startX == 1) {
            if(startY - endY == 2 || endY - startY == 2) {
                validMove = true;
            }
        }
        //General piece check for piece being out of bounds
        if(endX > 8 || endX  < 1 || endY > 8 || endY < 1) {
            validBoardPosition = false;
        } 

        if(validBoardPosition && validMove) {
            std::cout << "This is a valid move moving to: " << endX << "," << endY << std::endl;
            startX = endX;
            startY = endY;
            validMoves++;
        } else {
            std::cout << "This is not a valid move please try again" << std::endl;
        }
        if(validMoves > 5) {
            std::cout << "You took too many moves try again you have been put back to (x,y)" << orginalX << "," << orginalY << std::endl;
            startX = orginalX;
            startY = orginalY;
            validMoves = 0;
        }
    }  
    std::cout << "Congrats on escaping you did so in " << validMoves << " valid moves" << std::endl;
}