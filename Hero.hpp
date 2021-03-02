#pragma once
#include <SFML/Graphics.hpp>

class Hero {
private:
	sf::Image heroimage; //������� ������ Image (�����������)
	sf::Texture herotexture;//������� ������ Texture (��������)
	sf::Sprite herosprite;//������� ������ Sprite(������)

public:
	Hero() ;
	sf::Sprite& getSprite() ;
	void moveLeft(float,float& currentFrame);
	void moveRight(float, float& currentFrame);
	void moveUp(float, float& currentFrame);
	void moveDown(float, float& currentFrame);
};