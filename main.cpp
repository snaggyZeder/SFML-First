#include <SFML/Graphics.hpp>
#include "Hero.hpp"
using namespace sf;



int main()
{
	Clock clock;
	float time = clock.getElapsedTime().asMicroseconds(); //���� ��������� ����� � �������������
	clock.restart(); //������������� �����
	time = time *2; //�������� ����

	float currentFrame = 0;



	Hero hero1;
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(800, 600), "SFML lesson 1!");

	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Left )||
			Keyboard::isKeyPressed( Keyboard::A)) {
			hero1.moveLeft(time, currentFrame);
		} //���������� Y, �� ������� ����� ��������� ������ ����� ����� 96
		if (Keyboard::isKeyPressed(Keyboard::Right) || 
			Keyboard::isKeyPressed(Keyboard::D))
		{
			hero1.moveRight(time, currentFrame);
		} //���������� Y, �� ������� ����� ��������� ������ ������ ����� 96+96=192
		if (Keyboard::isKeyPressed(Keyboard::Up) ||
			Keyboard::isKeyPressed(Keyboard::W)) {
			hero1.moveUp(time, currentFrame);
		} //���������� Y �� ������� ����� ��������� ������ ����� ����� 288
		if (Keyboard::isKeyPressed(Keyboard::Down) || 
			Keyboard::isKeyPressed(Keyboard::S)) {
			hero1.moveDown(time, currentFrame);
		} //���������� 0, ��� ������� ����� ����������� � ������, �� ��� � ������������� ������� ������������ �� 96. 


		// ��������� ����	
		window.clear();
		window.draw(hero1.getSprite());//write sprite
		window.display();
	}

	return 0;
}

//without OOPV