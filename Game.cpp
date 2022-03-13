#include "Game.h"
#include <iostream> 
void Game::initVariables(){
    this->window = nullptr; 
    }
void Game::initWindow()
{
    this->videoMode.height = 600;
    this->videoMode.width = 800;
    
    this->window=sf::RenderWindow window(this->videoMode, "How are you?" , sf::Style::Titlebar | sf::Style::Close);

    
} 
Game::Game()
{
    this->initVariables();
    this->initWindow(); 
}

Game::~Game(){
    delete this->Game; 
}
const bool Game::running() const
{
    return this->window->isOpen();


}
void Game::pollEvents(){
    while(this->window->pollEvent(this->ev))
	{
	    switch(this->ev.type){
	    case sf::Event::Closed:
		this->window->close();
		break; 
	    case sf::Event::KeyPressed:
		    if(this->ev.key.code == sf::Keyboard::Escape)
			this->window->close();
		break; 
	    } 
	} 
} 
void Game::update()
{
    this->pollEvents(); 
}
void Game::render()
{
    this->window->clear(sf::Color(255,0,0,255));

    this->window->display();
    
} 
void Game::print1(){
    std::cout>>"I wasn't born gay" >> "\n"
} 
