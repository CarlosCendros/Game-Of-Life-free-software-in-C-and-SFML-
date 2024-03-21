#ifndef PREGAMETEXT_HPP
#define PREGAMETEXT_HPP

#include "../Settings/Color.hpp"
#include "../Settings/Window.hpp"

// Initialisation of PREGAME text messages
sf::RectangleShape Background2;
sf::Text Size_message;
sf::Text Huge_Option;
sf::Text Huge_Option_info;
sf::Text Huge_Option_text;
sf::RectangleShape Huge_Option_A;
sf::RectangleShape Huge_Option_info_A;
bool SHOW_HUGE_INFO = false;
sf::Text Big_Option;
sf::Text Big_Option_info;
sf::Text Big_Option_text;
sf::RectangleShape Big_Option_A;
sf::RectangleShape Big_Option_info_A;
bool SHOW_BIG_INFO = false;
sf::Text Medium_Option;
sf::Text Medium_Option_info;
sf::Text Mid_Option_text;
sf::RectangleShape Medium_Option_A;
sf::RectangleShape Mid_Option_info_A;
bool SHOW_MID_INFO = false;
sf::Text Small_Option;
sf::Text Small_Option_info;
sf::Text Small_Option_text;
sf::RectangleShape Small_Option_A;
sf::RectangleShape Small_Option_info_A;
bool SHOW_SMALL_INFO = false;

void InitialisePreGameText(){
    font.loadFromFile("Fonts/Pixel.ttf");
    font2.loadFromFile("Fonts/Arial.ttf");

    Background2.setSize(sf::Vector2f(window.getSize().x,window.getSize().y));

    Size_message.setFont(font);
    Size_message.setPosition(GAME_WIDTH/2-260,50);
    Size_message.setCharacterSize(CHARACTER_SIZE+40);
    Size_message.setString("CHOOSE GRID SIZE");

    Huge_Option.setFont(font);
    Huge_Option.setPosition(GAME_WIDTH/2-100,130);
    Huge_Option.setCharacterSize(MENU_CHARACTER_SIZE);
    Huge_Option.setString("Huge Grid");
    Huge_Option_A.setSize(sf::Vector2f(200,40));
    Huge_Option_A.setPosition(GAME_WIDTH/2-110,130);
    Huge_Option_A.setOutlineThickness(1);
    Huge_Option_info.setFont(font2);
    Huge_Option_info.setPosition(GAME_WIDTH/2+110,130);
    Huge_Option_info.setCharacterSize(MENU_CHARACTER_SIZE);
    Huge_Option_info.setString("v");
    Huge_Option_info_A.setSize(sf::Vector2f(15,15));
    Huge_Option_info_A.setPosition(GAME_WIDTH/2+110,130+13);
    Huge_Option_text.setFont(font);
    Huge_Option_text.setPosition(GAME_WIDTH/2-180,180);
    Huge_Option_text.setCharacterSize(CHARACTER_SIZE);
    Huge_Option_text.setString("100.000 Cells: Use only if necessary");

    Big_Option.setFont(font);
    Big_Option.setPosition(GAME_WIDTH/2-100,GAME_HEIGHT/3+30);
    Big_Option.setCharacterSize(MENU_CHARACTER_SIZE);
    Big_Option.setString("Large Grid");
    Big_Option_A.setSize(sf::Vector2f(200,40));
    Big_Option_A.setPosition(GAME_WIDTH/2-110,GAME_HEIGHT/3+30);
    Big_Option_A.setOutlineThickness(1);
    Big_Option_info.setFont(font2);
    Big_Option_info.setPosition(GAME_WIDTH/2+110,GAME_HEIGHT/3+30);
    Big_Option_info.setCharacterSize(MENU_CHARACTER_SIZE);
    Big_Option_info.setString("v");
    Big_Option_info_A.setSize(sf::Vector2f(15,15));
    Big_Option_info_A.setPosition(GAME_WIDTH/2+110,GAME_HEIGHT/3+13+30);
    Big_Option_text.setFont(font);
    Big_Option_text.setPosition(GAME_WIDTH/2-280,GAME_HEIGHT*0.4f+30);
    Big_Option_text.setCharacterSize(CHARACTER_SIZE);
    Big_Option_text.setString("58.000 Cells: More space at the cost of a slower frame rate");

    Medium_Option.setFont(font2);
    Medium_Option.setPosition(GAME_WIDTH/2-100,GAME_HEIGHT*0.53f+30);
    Medium_Option.setCharacterSize(MENU_CHARACTER_SIZE);
    Medium_Option.setString("Medium Grid");
    Medium_Option_A.setSize(sf::Vector2f(200,40));
    Medium_Option_A.setPosition(GAME_WIDTH/2-115,GAME_HEIGHT*0.53f+30);
    Medium_Option_A.setOutlineThickness(1);
    Medium_Option_info.setFont(font2);
    Medium_Option_info.setPosition(GAME_WIDTH/2+130,GAME_HEIGHT*0.53f+30);
    Medium_Option_info.setCharacterSize(MENU_CHARACTER_SIZE);
    Medium_Option_info.setString("v");
    Mid_Option_info_A.setSize(sf::Vector2f(15,15));
    Mid_Option_info_A.setPosition(GAME_WIDTH/2+130,GAME_HEIGHT*0.55f+30);
    Mid_Option_text.setFont(font);
    Mid_Option_text.setPosition(GAME_WIDTH/2-210,GAME_HEIGHT*0.6f+30);
    Mid_Option_text.setCharacterSize(CHARACTER_SIZE);
    Mid_Option_text.setString("9.200 Cells: Reasonable size with great FPS");

    Small_Option.setFont(font2);
    Small_Option.setPosition(GAME_WIDTH/2-100,GAME_HEIGHT*0.75f+30);
    Small_Option.setCharacterSize(MENU_CHARACTER_SIZE);
    Small_Option.setString("Small Grid");
    Small_Option_A.setSize(sf::Vector2f(200,40));
    Small_Option_A.setPosition(GAME_WIDTH/2-120,GAME_HEIGHT*0.75f+30);
    Small_Option_A.setOutlineThickness(1);
    Small_Option_info.setFont(font2);
    Small_Option_info.setPosition(GAME_WIDTH/2+110,GAME_HEIGHT*0.75f+30);
    Small_Option_info.setCharacterSize(MENU_CHARACTER_SIZE);
    Small_Option_info.setString("v");
    Small_Option_info_A.setSize(sf::Vector2f(15,15));
    Small_Option_info_A.setPosition(GAME_WIDTH/2+110,GAME_HEIGHT*0.77f+30);
    Small_Option_text.setFont(font);
    Small_Option_text.setPosition(GAME_WIDTH/2-210,GAME_HEIGHT*0.82f+30);
    Small_Option_text.setCharacterSize(CHARACTER_SIZE);
    Small_Option_text.setString("2.000 Cells: Small set for incredible speeds");
}
void PreGameText(){
    // Set colors
    Background2.setFillColor(COLOR_DEAD);
    Size_message.setFillColor(COLOR_ALIVE);
    Huge_Option_A.setFillColor(COLOR_DEAD);
    Huge_Option_A.setOutlineColor(COLOR_ALIVE);
    Huge_Option.setFillColor(COLOR_ALIVE);
    Huge_Option_info_A.setFillColor(COLOR_DEAD);
    Huge_Option_info.setFillColor(COLOR_ALIVE);
    Big_Option_A.setFillColor(COLOR_DEAD);
    Big_Option_A.setOutlineColor(COLOR_ALIVE);
    Big_Option.setFillColor(COLOR_ALIVE);
    Big_Option_info_A.setFillColor(COLOR_DEAD);
    Big_Option_info.setFillColor(COLOR_ALIVE);
    Medium_Option_A.setFillColor(COLOR_DEAD);
    Medium_Option_A.setOutlineColor(COLOR_ALIVE);
    Medium_Option.setFillColor(COLOR_ALIVE);
    Mid_Option_info_A.setFillColor(COLOR_DEAD);
    Medium_Option_info.setFillColor(COLOR_ALIVE);
    Small_Option.setFillColor(COLOR_ALIVE);
    Small_Option_A.setFillColor(COLOR_DEAD);
    Small_Option_A.setOutlineColor(COLOR_ALIVE);
    Small_Option_info_A.setFillColor(COLOR_DEAD);
    Small_Option_info.setFillColor(COLOR_ALIVE);
    Huge_Option_text.setFillColor(COLOR_ALIVE);
    Big_Option_text.setFillColor(COLOR_ALIVE);
    Mid_Option_text.setFillColor(COLOR_ALIVE);
    Small_Option_text.setFillColor(COLOR_ALIVE);

    // Draw in window
    window.draw(Background2);
    window.draw(Size_message);
    window.draw(Huge_Option_A);
    window.draw(Huge_Option);
    window.draw(Huge_Option_info_A);
    window.draw(Huge_Option_info);
    window.draw(Big_Option_A);
    window.draw(Big_Option);
    window.draw(Big_Option_info_A);
    window.draw(Big_Option_info);
    window.draw(Medium_Option_A);
    window.draw(Medium_Option);
    window.draw(Mid_Option_info_A);
    window.draw(Medium_Option_info);
    window.draw(Small_Option_A);
    window.draw(Small_Option);
    window.draw(Small_Option_info_A);
    window.draw(Small_Option_info);
    if(SHOW_BIG_INFO)
        window.draw(Big_Option_text);
    if(SHOW_MID_INFO)
        window.draw(Mid_Option_text);
    if(SHOW_SMALL_INFO)
        window.draw(Small_Option_text);
    if(SHOW_HUGE_INFO)
        window.draw(Huge_Option_text);
}

#endif