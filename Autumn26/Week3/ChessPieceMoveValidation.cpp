#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::string typeOfPiece;
    double startX, startY, endX, endY;
    std::cout << "Enter the piece type, starting position x, starting position y and its ending position x, ending position y";
    std::cin >> typeOfPiece >> startX >> startY >> endX >> endY;
    bool validMove = false, validBoardPosition = true;
    //Knight valid move
    if(typeOfPiece == "Knight"){
        if(startX - endX == 2 || endX - startX == 2) {
            if(startY - endY == 1 || endY - startY == 1) {
                validMove = true;
            }
        } else if(startX - endX == 1 || endX - startX == 1) {
            if(startY - endY == 2 || endY - startY == 2) {
                validMove = true;
            }
        }
    }
    //Bishop valid move
    if(typeOfPiece == "Bishop"){
        if(abs(startX - endX) == abs(startY - endY)){  
            validMove = true;
        }
    }
    //Rook valid move
    if(typeOfPiece == "Rook"){
        if(startX == endX || startY == endY) {
                validMove = true;
        } 
    }
    //King valid move
    if(typeOfPiece == "King"){
        if(startX - endX == 1 || endX - startX == 1) {
            if(startY - endY == 1 || endY - startY == 1) {
                validMove = true;
            }
        } 
    }
    //Queen valid move
    if(typeOfPiece == "Queen"){
        if(abs(startX - endX) == abs(startY - endY)){  
            validMove = true;
        }
        if(startX == endX || startY == endY) {
                validMove = true;
        } 
    }
    //General piece check for piece being out of bounds
    if(endX > 8 || endX  < 1 || endY > 8 || endY < 1) {
        validBoardPosition = false;
    } 

    if(validBoardPosition && validMove) {
        std::cout << "This is a valid move";
    } else {
        std::cout << "This is not a valid move" << std::endl;
    }
    
}