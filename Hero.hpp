#pragma once
#include <SFML/Graphics.hpp>
#include<string>


class Hero {
private:
	float x, y, w, h, dx, dy, speed; //координаты игрока х и у, высота ширина, ускорение (по х и по у), сама скорость
	int dir; //направление (direction) движения игрока
	std::string File; //файл с расширением
	sf::Image image; //создаем объект Image (изображение)
	sf::Texture texture;//создаем объект Texture (текстура)
	sf::Sprite sprite;//создаем объект Sprite(спрайт)

public:
	Hero(std::string F, float X, float Y, float W, float H) ;
	sf::Sprite& getSprite() ;
	void moveLeft(float,float& currentFrame);
	void moveRight(float, float& currentFrame);
	void moveUp(float, float& currentFrame);
	void moveDown(float, float& currentFrame);
	void update(float time);
};                       