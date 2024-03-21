/*
    THIS FILE CONTAINS THE INFORMATION ABOUT THE CELLS FROM THE GRID
*/

#ifndef CELL_HPP
#define CELL_HPP

#include "Color.hpp"
#include "Window.hpp"

bool WALLS = false;

struct Cell{
    int posX, posY;
    int size;
    sf::RectangleShape cell;
    bool alive;
    int neighbours = 0;

    Cell(int size){
        this-> size = size;
        cell.setSize(sf::Vector2f(size,size));
        cell.setOutlineThickness(0.5f);
        alive = false;
    }
    void setPos(int x,int y){
        cell.setPosition(sf::Vector2f(x,y));
    }
    void render(sf::RenderWindow& window){
        if(alive == true)
            cell.setFillColor(COLOR_ALIVE);
        else
            cell.setFillColor(COLOR_DEAD);
        if(WALLS)
            cell.setOutlineColor(BORDER_COLOR);
        else
            cell.setOutlineColor(COLOR_DEAD);
        window.draw(cell);
    }
    void isAlive(){
        // Underpopulation
        if(alive == true && neighbours < 2) alive = false;
        // Survival
        else if(alive == true && (neighbours == 2 || neighbours == 3)) alive = true;
        // Overpopulation
        else if(alive == true && neighbours > 3) alive = false;
        // Reproduction
        else if(alive == false && neighbours == 3) alive = true;
        neighbours = 0;
    }
    void isCreated(sf::Vector2f worldMousePos, sf::RenderWindow& window){
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            if(isInside(worldMousePos))
                alive = !alive;
        }
    }
    // Checks if the mouse is inside the cell
    bool isInside(sf::Vector2f MousePos){
        return(
            MousePos.x > posX &&
            MousePos.x < posX + size &&
            MousePos.y > posY &&
            MousePos.y < posY + size
        );
    }
};

#endif