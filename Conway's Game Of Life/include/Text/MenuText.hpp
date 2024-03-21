#ifndef MENUTEXT_HPP
#define MENUTEXT_HPP

#include "../Settings/Color.hpp"
#include "../Settings/Window.hpp"

// Initialisation of MENU text messages
sf::Texture Title_T;
sf::Sprite Title_S;
sf::RectangleShape Background;
sf::Text GitHub_user;
sf::Image Github_icon;
sf::Texture GitHub_texture;
sf::Sprite GitHub_sprite;
sf::RectangleShape GitHub_A;
sf::Text YT_user;
sf::Image YT_icon;
sf::Texture YT_texture;
sf::Sprite YT_sprite;
sf::RectangleShape YT_A;
sf::Text New_Game;
sf::RectangleShape New_Game_A;
sf::Text Find_me_message;
sf::Text VERSION;

void InitialiseMenuText(){
    font.loadFromFile("Fonts/Pixel.ttf");

    Title_T.loadFromFile("Images/Title.png");
    Title_S.setTexture(Title_T);
    Title_S.setPosition(20, 80);
    Title_S.setScale(1.8,1.8);

    Background.setSize(sf::Vector2f(window.getSize().x,window.getSize().y));

    New_Game.setFont(font);
    New_Game.setPosition(GAME_WIDTH/2-100,GAME_HEIGHT*0.6f);
    New_Game.setCharacterSize(MENU_CHARACTER_SIZE);
    New_Game.setString("Start Game");
    New_Game_A.setSize(sf::Vector2f(220,50));
    New_Game_A.setPosition(GAME_WIDTH/2-120,GAME_HEIGHT*0.6f-5);
    New_Game_A.setOutlineThickness(1);

    GitHub_user.setFont(font);
    GitHub_user.setPosition(GAME_WIDTH-190,GAME_HEIGHT-45);
    GitHub_user.setCharacterSize(CHARACTER_SIZE);
    GitHub_user.setString("Carlos Cendros");

    Github_icon.loadFromFile("Images/GitHub.png");
    GitHub_texture.loadFromImage(Github_icon);
    GitHub_sprite.setTexture(GitHub_texture);
    GitHub_sprite.setPosition(sf::Vector2f(GAME_WIDTH-60,GAME_HEIGHT-60));
    GitHub_sprite.setScale(sf::Vector2f(50/GitHub_sprite.getLocalBounds().width,50/GitHub_sprite.getLocalBounds().height));
    GitHub_A.setPosition(sf::Vector2f(GAME_WIDTH-200,GAME_HEIGHT-60));
    GitHub_A.setSize(sf::Vector2f(190,50));

    YT_user.setFont(font);
    YT_user.setPosition(GAME_WIDTH-125,GAME_HEIGHT-90);
    YT_user.setCharacterSize(CHARACTER_SIZE);
    YT_user.setString("Cend++");

    YT_icon.loadFromFile("Images/YT.png");
    YT_texture.loadFromImage(YT_icon);
    YT_sprite.setTexture(YT_texture);
    YT_sprite.setPosition(sf::Vector2f(GAME_WIDTH-60,GAME_HEIGHT-110));
    YT_sprite.setScale(sf::Vector2f(50/YT_sprite.getLocalBounds().width,50/YT_sprite.getLocalBounds().height));
    YT_A.setPosition(sf::Vector2f(GAME_WIDTH-200,GAME_HEIGHT-110));
    YT_A.setSize(sf::Vector2f(190,50));

    VERSION.setFont(font);
    VERSION.setPosition(20,GAME_HEIGHT-30);
    VERSION.setCharacterSize(CHARACTER_SIZE);
    VERSION.setString("Version 1.0");

    Find_me_message.setFont(font);
    Find_me_message.setPosition(GAME_WIDTH-170, GAME_HEIGHT-140);
    Find_me_message.setCharacterSize(CHARACTER_SIZE+10);
    Find_me_message.setString("Find me in:");
}
void MenuText(){
    // Set colors
    Background.setFillColor(COLOR_DEAD);
    GitHub_user.setFillColor(COLOR_ALIVE);
    GitHub_A.setFillColor(COLOR_DEAD);
    YT_user.setFillColor(COLOR_ALIVE);
    YT_A.setFillColor(COLOR_DEAD);
    VERSION.setFillColor(COLOR_ALIVE);
    Find_me_message.setFillColor(COLOR_ALIVE);
    New_Game.setFillColor(COLOR_ALIVE);
    New_Game_A.setFillColor(COLOR_DEAD);
    New_Game_A.setOutlineColor(COLOR_ALIVE);

    // Draw in window
    window.draw(Background);
    window.draw(Title_S);
    window.draw(GitHub_A);
    window.draw(GitHub_user);
    window.draw(GitHub_sprite);
    window.draw(YT_A);
    window.draw(YT_user);
    window.draw(YT_sprite);
    window.draw(New_Game_A);
    window.draw(New_Game);
    window.draw(VERSION);
    window.draw(Find_me_message);
}

#endif