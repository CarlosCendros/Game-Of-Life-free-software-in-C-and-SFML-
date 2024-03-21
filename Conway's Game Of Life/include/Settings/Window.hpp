/*
    THIS FILE CONTAINS INFORMATION ABOUT THE WINDOW, THE GRID, AND MANY VARIABLES USED BY THE USER
*/

#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <SFML/Graphics.hpp>
#include <vector>

const int GAME_WIDTH = 1280, GAME_HEIGHT = 720;

int CHARACTER_SIZE = 15;
int MENU_CHARACTER_SIZE = 30;
sf::Font font;
sf::Font font2;

// Generation counter
int GEN = 1;
// Pause boolean
bool PAUSE = true;
// Simulation speed
int FPS = 10;
// Hide Grid boolean
bool GRID = false;
// Hide all text boolean
bool TEXT = true;
// Zooming factor
float ZOOM_IN = 0.8f;
float ZOOM_OUT = 1.0f/ZOOM_IN;
sf::Vector2f DEFAULT_ZOOM = {GAME_WIDTH*0.5f,GAME_HEIGHT*0.5f};
int ZOOM_COUNT = 0;
// Dragging boolean
bool IS_DRAGGING = false;
sf::Vector2f lastMousePosition;
float DRAG_SPEED = 0.5f;
// Menu and Game indicators
bool IS_IN_MENU = true;
bool IS_IN_PREGAME = false;
bool IS_IN_GAME = false;
// GridSize_booleans
bool HUGE_GRID = false;
bool BIG_GRID = false;
bool MID_GRID = false;
bool SMALL_GRID = false;
bool NEW = true;
// Pattern menu booleans
bool SHOW_PATTERN_MENU = false;
// Filename and pattern selected boolean
std::string filename;
bool PATTERN_SELECTED = false;


int nRows;
int nCols;
int GridSize;

// Create the game window
sf::RenderWindow window(sf::VideoMode(GAME_WIDTH, GAME_HEIGHT),"Conway's Game of Life");

// Create view
sf::View view(sf::FloatRect(0,0,GAME_WIDTH,GAME_HEIGHT));
float aspectRatio = static_cast<float>(GAME_WIDTH) / GAME_HEIGHT;

bool IsInBox(sf::Vector2f MousePos, sf::RectangleShape Box){
    return(
        MousePos.x > Box.getPosition().x &&
        MousePos.x < Box.getPosition().x + Box.getSize().x &&
        MousePos.y > Box.getPosition().y &&
        MousePos.y < Box.getPosition().y + Box.getSize().y
    );
}

#endif