#pragma once
#include <SFML/Graphics.hpp>
#include<string>


class Hero {
private:
	float x, y, w, h, dx, dy, speed; //���������� ������ � � �, ������ ������, ��������� (�� � � �� �), ���� ��������
	int dir; //����������� (direction) �������� ������
	std::string File; //���� � �����������
	sf::Image image; //������� ������ Image (�����������)
	sf::Texture texture;//������� ������ Texture (��������)
	sf::Sprite sprite;//������� ������ Sprite(������)

public:
	Hero(std::string F, float X, float Y, float W, float H) ;
	sf::Sprite& getSprite() ;
	void moveLeft(float,float& currentFrame);
	void moveRight(float, float& currentFrame);
	void moveUp(float, float& currentFrame);
	void moveDown(float, float& currentFrame);
	void update(float time);
};                       