#pragma once
#include <SFML/Graphics.hpp>

class Hero {
private:
	sf::Image heroimage; //создаем объект Image (изображение)
	sf::Texture herotexture;//создаем объект Texture (текстура)
	sf::Sprite herosprite;//создаем объект Sprite(спрайт)

public:
	Hero() ;
	sf::Sprite& getSprite() ;
	void moveLeft(float,float& currentFrame);
	void moveRight(float, float& currentFrame);
	void moveUp(float, float& currentFrame);
	void moveDown(float, float& currentFrame);
};