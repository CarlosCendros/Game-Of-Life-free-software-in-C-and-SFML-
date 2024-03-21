/*
    THIS FILE CONTAINS ALL THE POSSIBLE USER EVENTS:
    PAUSE,SPEED,SHOW GRID, HIDE TEXT, CHANGE COLOR
*/

#ifndef EVENT_HPP
#define EVENT_HPP

#include "../Settings/Cell.hpp"
#include "../Text/MenuText.hpp"
#include "../Text/PreGameText.hpp"
#include "../Text/GameText.hpp"
#include <cstdlib>
#include <iostream>

// Create grids
std::vector<std::vector<Cell>> Cells(GAME_WIDTH/30,std::vector<Cell>(GAME_HEIGHT/30,Cell(30)));
std::vector<std::vector<Cell>> Huge_grid(GAME_WIDTH/3,std::vector<Cell>(GAME_HEIGHT/3,Cell(3)));
std::vector<std::vector<Cell>> Big_grid(GAME_WIDTH/4,std::vector<Cell>(GAME_HEIGHT/4,Cell(4)));
std::vector<std::vector<Cell>> Mid_grid(GAME_WIDTH/10,std::vector<Cell>(GAME_HEIGHT/10,Cell(10)));
std::vector<std::vector<Cell>> Small_grid(GAME_WIDTH/20,std::vector<Cell>(GAME_HEIGHT/20,Cell(20)));

void EventMenu(sf::Event event){
    if(event.type == sf::Event::Closed) window.close();
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
    else if(event.type == sf::Event::Resized){
        float newAspectRatio = static_cast<float>(event.size.width) / event.size.height;
        float scaleFactor = newAspectRatio / aspectRatio;

        view.setSize(GAME_WIDTH * scaleFactor, GAME_HEIGHT);
        view.setCenter(view.getSize() / 2.0f);
        view.setCenter(DEFAULT_ZOOM);
        view.setSize(GAME_WIDTH,GAME_HEIGHT);
        window.setView(view);
        ZOOM_COUNT = 0;
    }
    //////////////
    // Menu events
    if(IS_IN_MENU)
    {
    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left){
        sf::Vector2f MousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
        if(IsInBox(MousePos,New_Game_A)){
            IS_IN_MENU = false;
            IS_IN_PREGAME = true;
        }
        else if(IsInBox(MousePos,GitHub_A)){
            system("start https://github.com/CarlosCendros");
        }
        else if(IsInBox(MousePos,YT_A)) {
            system("start https://www.youtube.com/channel/UCmqI78OvR3R6HK7QEB-4SAA");
        }
    }
    }
    /////////////////
    // PreGame events
    else if(IS_IN_PREGAME)
    {
    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left){
        sf::Vector2f MousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
        if(IsInBox(MousePos,Huge_Option_A)){
            IS_IN_PREGAME = false;
            IS_IN_GAME = true;
            HUGE_GRID = true;
            BIG_GRID = false;
            MID_GRID = false;
            SMALL_GRID = false;
            GEN = 1;
            PAUSE = true;
        }
        else if(IsInBox(MousePos,Big_Option_A)){
            IS_IN_PREGAME = false;
            IS_IN_GAME = true;
            HUGE_GRID = false;
            BIG_GRID = true;
            MID_GRID = false;
            SMALL_GRID = false;
            GEN = 1;
            PAUSE = true;
        }
        else if(IsInBox(MousePos,Medium_Option_A)){
            IS_IN_PREGAME = false;
            IS_IN_GAME = true;
            HUGE_GRID = false;
            BIG_GRID = false;
            MID_GRID = true;
            SMALL_GRID = false;
            GEN = 1;
            PAUSE = true;
        }
        else if(IsInBox(MousePos,Small_Option_A)){
            IS_IN_PREGAME = false;
            IS_IN_GAME = true;
            BIG_GRID = false;
            MID_GRID = false;
            SMALL_GRID = true;
            GEN = 1;
            PAUSE = true;
        }
        else if(IsInBox(MousePos,Huge_Option_info_A)) {
            SHOW_HUGE_INFO = !SHOW_HUGE_INFO;
        }
        else if(IsInBox(MousePos,Big_Option_info_A)) {
            SHOW_BIG_INFO = !SHOW_BIG_INFO;
        }
        else if(IsInBox(MousePos,Mid_Option_info_A)) {
            SHOW_MID_INFO = !SHOW_MID_INFO;
        }
        else if(IsInBox(MousePos,Small_Option_info_A)) {
            SHOW_SMALL_INFO = !SHOW_SMALL_INFO;
        }
    }   
    }
    //////////////
    // Game events
    else if(IS_IN_GAME)
    {
    sf::Vector2f MousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
    if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left && IsInBox(MousePos,PatternMenu_A) && PAUSE){
        SHOW_PATTERN_MENU = true;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::P)
        PAUSE = !PAUSE;

    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Right)
        FPS++;

    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Left && FPS != 1)
        FPS--;

    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::R){
        IS_IN_GAME = false;
        IS_IN_MENU = true;
        PAUSE = false;
        COLOR_ALIVE = GREEN_NEON;
        COLOR_DEAD = BLACK;
        GEN = 1;
        GRID = false;
        WALLS = false;
        TEXT = true;
        NEW = true;
        SHOW_BIG_INFO = false;
        SHOW_MID_INFO = false;
        SHOW_SMALL_INFO = false;
        FPS = 10;
        for(int r = 0; r < nRows; r++){
            for(int c = 0; c < nCols; c++){
                Cells[r][c].alive = false;
            }
        }
        view.setCenter(DEFAULT_ZOOM);
        view.setSize(GAME_WIDTH,GAME_HEIGHT);
        window.setView(view);
        ZOOM_COUNT = 0;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::G){
        GRID = !GRID;
        WALLS = !WALLS;
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::T)
        TEXT = !TEXT;

    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::C){
        for(int r = 0; r < nRows; r++){
            for(int c = 0; c < nCols; c++){
                Cells[r][c].alive = false;
            }
        }
        GEN = 1;
    }
    else if(event.type == sf::Event::MouseWheelScrolled){
        if(event.mouseWheelScroll.delta > 0 && ZOOM_COUNT <= 8){
            view.zoom(ZOOM_IN);
            ZOOM_COUNT++;
        }
        else if(event.mouseWheelScroll.delta < 0 && ZOOM_COUNT > 0){
            view.zoom(ZOOM_OUT);
            ZOOM_COUNT--;
        }
    }
    else if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::D){
        view.setCenter(DEFAULT_ZOOM);
        view.setSize(GAME_WIDTH,GAME_HEIGHT);
        window.setView(view);
        ZOOM_COUNT = 0;
    }
    else if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Right){
        IS_DRAGGING = true;
        lastMousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));
    }
    else if(event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Right)
        IS_DRAGGING = false;
    
    else if(event.type == sf::Event::MouseMoved && IS_DRAGGING){
        sf::Vector2f newMousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));
        sf::Vector2f delta = lastMousePosition - newMousePosition;

        sf::FloatRect viewRect = view.getViewport();

        view.move(delta * DRAG_SPEED);
        window.setView(view);

        lastMousePosition = newMousePosition;
    }
    }
}

#endif