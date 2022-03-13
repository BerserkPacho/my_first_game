#pragma once 
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/Audio.hpp> 
 

class Game
{

 private: 

    sf::RenderWindow* window;
    sf::VideoMode videoMode; 
    sf::Event ev; 
    void initVariables;
    void initWindow; 
    
 public:
    Game();
    virtual ~Game;
    const bool running() const; 
    void pollEvents;
    void update; 
    void print1; 
    void render;
	
};

