#ifndef GAMETEXT_HPP
#define GAMETEXT_HPP

#include "PatternText.hpp"
#include "../Settings/Color.hpp"
#include "../Settings/Window.hpp"

// Initialisation of GAME text messages
sf::Text Generation_counter;
sf::Text Pause_message;
sf::Text Pause_signal;
sf::Text FPS_message;
sf::Text FPS_signal;
sf::Text Grid_message;
sf::Text Text_info;
sf::Text Color_message;
sf::RectangleShape Color_square;
sf::Text Clear_all;
sf::Text Default_view;
sf::Text Return_message;
sf::Text PatternMenu;
sf::RectangleShape PatternMenu_A;

void InitialiseGameText(){
    font.loadFromFile("Fonts/Pixel.ttf");
    font2.loadFromFile("Fonts/Arial.ttf");

    // Counts how many generations have passed
    Generation_counter.setFont(font);
    Generation_counter.setPosition(20,15);
    Generation_counter.setCharacterSize(CHARACTER_SIZE);

    // Tells the user how to pause
    Pause_message.setFont(font);
    Pause_message.setPosition(20,GAME_HEIGHT-20);
    Pause_message.setCharacterSize(CHARACTER_SIZE);
    Pause_message.setString("Select 'P' to pause:");

    // Tells if it is paused
    Pause_signal.setFont(font);
    Pause_signal.setPosition(210,GAME_HEIGHT-20);
    Pause_signal.setCharacterSize(CHARACTER_SIZE);
    Pause_signal.setFillColor(COLOR_ALIVE);
    Pause_signal.setString("Paused");

    // Tells the user how to increase or decrease FPS
    FPS_message.setFont(font);
    FPS_message.setPosition(GAME_WIDTH-190,30);
    FPS_message.setCharacterSize(CHARACTER_SIZE);
    FPS_message.setString("- <---- FPS ----> +");

    // Shows FPS
    FPS_signal.setFont(font);
    FPS_signal.setPosition(GAME_WIDTH-130,15);
    FPS_signal.setCharacterSize(CHARACTER_SIZE);
    FPS_signal.setString(std::to_string(FPS)+" FPS");

    // Tells the user how to hide grid
    Grid_message.setFont(font);
    Grid_message.setPosition(20,GAME_HEIGHT-40);
    Grid_message.setCharacterSize(CHARACTER_SIZE);

    // Tells the user how to hide all text
    Text_info.setFont(font);
    Text_info.setPosition(20,GAME_HEIGHT-60);
    Text_info.setCharacterSize(CHARACTER_SIZE);
    Text_info.setString("Select 'T' to hide text");

    // Shows all different color combinations
    Color_message.setFont(font);
    Color_message.setPosition(GAME_WIDTH-120,GAME_HEIGHT-20);
    Color_message.setCharacterSize(CHARACTER_SIZE);
    Color_message.setString("0123456789");

    Color_square.setSize(sf::Vector2f(20,20));
    Color_square.setPosition(GAME_WIDTH-30,GAME_HEIGHT-20);

    // Tells how to clear screen
    Clear_all.setFont(font);
    Clear_all.setPosition(20,GAME_HEIGHT-80);
    Clear_all.setCharacterSize(CHARACTER_SIZE);
    Clear_all.setString("Select 'C' to clear all");

    // Tells how to set default view
    Default_view.setFont(font);
    Default_view.setPosition(20,GAME_HEIGHT-100);
    Default_view.setCharacterSize(CHARACTER_SIZE);
    Default_view.setString("Select 'D' for default view");

    // Tells the user how to return to the menu
    Return_message.setFont(font);
    Return_message.setPosition(20,GAME_HEIGHT-120);
    Return_message.setCharacterSize(CHARACTER_SIZE);
    Return_message.setString("Select 'R' to return to the menu");

    // Text to pattern menu
    PatternMenu.setFont(font2);
    PatternMenu.setPosition(GAME_WIDTH/2-100,GAME_HEIGHT-40);
    PatternMenu.setCharacterSize(MENU_CHARACTER_SIZE);
    PatternMenu.setString("Open Pattern Menu");
    PatternMenu_A.setSize(sf::Vector2f(230,33));
    PatternMenu_A.setPosition(sf::Vector2f(GAME_WIDTH/2-100,GAME_HEIGHT-40));
}

// Text info if the simulation is running
void ShowText(){
    // Add message
    Generation_counter.setString("Generation "+std::to_string(GEN));
    FPS_signal.setString(std::to_string(FPS)+" FPS");
    if(GRID)
        Grid_message.setString("Select 'G' to hide grid");
    else if(!GRID)
        Grid_message.setString("Select 'G' to show grid");

    // Add color
    Generation_counter.setFillColor(COLOR_ALIVE);
    Pause_message.setFillColor(COLOR_ALIVE);
    Pause_signal.setFillColor(COLOR_ALIVE);
    FPS_message.setFillColor(COLOR_ALIVE);
    FPS_signal.setFillColor(COLOR_ALIVE);
    Grid_message.setFillColor(COLOR_ALIVE);
    Text_info.setFillColor(COLOR_ALIVE);
    Color_message.setFillColor(COLOR_ALIVE);
    Color_square.setFillColor(COLOR_ALIVE);
    Clear_all.setFillColor(COLOR_ALIVE);
    Default_view.setFillColor(COLOR_ALIVE);
    Return_message.setFillColor(COLOR_ALIVE);
    PatternMenu.setFillColor(COLOR_ALIVE);
    PatternMenu_A.setFillColor(COLOR_DEAD);

    // Draw text messages
    window.draw(PatternMenu_A);
    window.draw(PatternMenu);
    window.draw(Generation_counter);
    window.draw(Pause_message);
    window.draw(FPS_message);
    window.draw(FPS_signal);
    window.draw(Grid_message);
    window.draw(Text_info);
    window.draw(Color_message);
    window.draw(Color_square);
    window.draw(Clear_all);
    window.draw(Default_view);
    window.draw(Return_message);
    if(PAUSE)
        window.draw(Pause_signal);
    else if(!PAUSE)
        GEN++;
}

#endif