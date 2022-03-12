 
#include <SFML/Graphics.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works?", sf::Style::Close);

    sf::Event ev;
    //event is an object 
    while (window.isOpen())
       {
	   while(window.pollEvent(ev)){

	       switch(ev.type)

		   {
		   case sf::Event::Closed:
		       window.close();
		       break; 
		 
		   case sf::Event::KeyPressed:
		       if(ev.key.code ==sf::Keyboard::Escape)
			   window.close();
		       break;
		   } 

			   
	     
	       
	   } 

       } 

	   window.clear();
	   window.display();
	   
	   return 0;

} 
