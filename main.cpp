#include <SFML/Graphics.hpp>
#include "Hero.hpp"
using namespace sf;



int main()
{
	Clock clock;
	float time = clock.getElapsedTime().asMicroseconds(); //дать прошедшее врем€ в микросекундах
	clock.restart(); //перезагружает врем€
	time = time *2; //скорость игры

	float currentFrame = 0;



	Hero hero1;
	// ќбъект, который, собственно, €вл€етс€ главным окном приложени€
	RenderWindow window(VideoMode(800, 600), "SFML lesson 1!");

	// √лавный цикл приложени€. ¬ыполн€етс€, пока открыто окно
	while (window.isOpen())
	{
		// ќбрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// ѕользователь нажал на Ђкрестикї и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Left )||
			Keyboard::isKeyPressed( Keyboard::A)) {
			hero1.moveLeft(time, currentFrame);
		} //координата Y, на которой герой изображен идущим влево равна 96
		if (Keyboard::isKeyPressed(Keyboard::Right) || 
			Keyboard::isKeyPressed(Keyboard::D))
		{
			hero1.moveRight(time, currentFrame);
		} //координата Y, на которой герой изображен идущем вправо равна 96+96=192
		if (Keyboard::isKeyPressed(Keyboard::Up) ||
			Keyboard::isKeyPressed(Keyboard::W)) {
			hero1.moveUp(time, currentFrame);
		} //координата Y на которой герой изображен идущим вверх равна 288
		if (Keyboard::isKeyPressed(Keyboard::Down) || 
			Keyboard::isKeyPressed(Keyboard::S)) {
			hero1.moveDown(time, currentFrame);
		} //координата 0, это верхн€€ часть изображени€ с героем, от нее и отталкиваемс€ ровными квадратиками по 96. 


		// ќтрисовка окна	
		window.clear();
		window.draw(hero1.getSprite());//write sprite
		window.display();
	}

	return 0;
}

//without OOPV