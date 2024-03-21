/*
    THIS FILE CONTAINS ALMOST EVERY ACTION DEVELOPED IN THE MAIN FILE.
    HERE THERE ARE FUNCTIONS THAT RUN DOUBLE FOR LOOPS ACROSS THE GRID 
*/

#ifndef ACTIONS_HPP
#define ACTIONS_HPP

#include "../Settings/Cell.hpp"
#include "../Settings/Color.hpp"
#include "../Settings/Window.hpp"
#include <iostream>

// Show actual generation
void ShowActualGeneration(std::vector<std::vector<Cell>>& Cells, int nRows, int nCols){
    for(int r = 0; r < nRows; r++){
        for(int c = 0; c < nCols; c++){
            Cells[r][c].posX = r*Cells[r][c].size;
            Cells[r][c].posY = c*Cells[r][c].size;
            Cells[r][c].setPos(Cells[r][c].posX,Cells[r][c].posY);
            Cells[r][c].render(window);
        }
    }
}
// Counts how many neighbours each cell has
void CheckNeighbours(std::vector<std::vector<Cell>>& Cells, int nRows, int nCols){
    for(int r = 0; r < nRows; r++){
        for(int c = 0; c < nCols; c++){

            if(r-1 >= 0 && Cells[r-1][c].alive == true) Cells[r][c].neighbours++;
            if(r+1 < nRows && Cells[r+1][c].alive == true) Cells[r][c].neighbours++;
            if(c-1 >= 0 && Cells[r][c-1].alive == true) Cells[r][c].neighbours++;
            if(c+1 < nCols && Cells[r][c+1].alive == true) Cells[r][c].neighbours++;
            if(r-1 >= 0 && c-1 >= 0 && Cells[r-1][c-1].alive == true) Cells[r][c].neighbours++;
            if(r-1 >= 0 && c+1 < nCols && Cells[r-1][c+1].alive == true) Cells[r][c].neighbours++;
            if(r+1 < nRows && c-1 >= 0 && Cells[r+1][c-1].alive == true) Cells[r][c].neighbours++;
            if(r+1 < nRows && c+1 < nCols && Cells[r+1][c+1].alive ==true) Cells[r][c].neighbours++;
        }
    }
}
// Creates the next generation
void CreateNextGeneration(std::vector<std::vector<Cell>>& Cells, int nRows, int nCols){
    for(int r = 0; r < nRows; r++){
        for(int c = 0; c < nCols; c++){
             Cells[r][c].isAlive();
        }
    }
}
// Create new cells with the mouse
void CreateNewCell(std::vector<std::vector<Cell>>& Cells, int nRows, int nCols){
    sf::Vector2i pixelMousePos = sf::Mouse::getPosition(window);
    sf::Vector2f worldMousePos = window.mapPixelToCoords(pixelMousePos);
    for(int r = 0; r < nRows; r++){
        for(int c = 0; c < nCols; c++)
            Cells[r][c].isCreated(worldMousePos, window);
    }
}
// Show actual generation (if paused)
void ShowPausedGeneration(std::vector<std::vector<Cell>>& Cells, int nRows, int nCols){
    for(int r = 0; r < nRows; r++){
        for(int c = 0; c < nCols; c++){
            Cells[r][c].posX = r*Cells[r][c].size;
            Cells[r][c].posY = c*Cells[r][c].size;
            Cells[r][c].setPos(Cells[r][c].posX,Cells[r][c].posY);
            Cells[r][c].render(window);
        }
    }
}

#endif