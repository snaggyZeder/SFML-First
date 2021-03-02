#include "Hero.hpp"
#include <SFML/Graphics.hpp>
using namespace sf;

Hero::Hero() {
	
	heroimage.loadFromFile("images/hero.png");//��������� � ���� ����

	herotexture.loadFromImage(heroimage);//�������� � ���� ������ Image (�����������)

	herosprite.setTexture(herotexture);//������� � ���� ������ Texture (��������)
	herosprite.setPosition(50, 25);//������ ��������� ���������� ��������� �������

	herosprite.setTextureRect(IntRect(0, 192, 96, 96));//�������� ������ ��� ������������� � �����
	herosprite.setPosition(50, 25);
}

Sprite& Hero::getSprite() { return herosprite; }


void Hero::moveLeft(float ftime, float& currentFrame) {
	
	currentFrame += 0.005 * ftime; //������ ��� ����������� �� "������". ���������� ������� �� ���� �������� ������������ ������� � ��������. ������� 0.005 ����� �������� �������� ��������
	if (currentFrame > 3) currentFrame -= 3; // ���� ������ � �������� ����� - ������������ �����.
	herosprite.setTextureRect(IntRect(96 * int(currentFrame), 96, 96, 96)); //���������� �� ����������� �. ���������� �������� ��������� � ���������� � ������ 0,96,96*2, � ����� 0
	herosprite.move(-0.1 * ftime, 0);//���������� ���� �������� ��������� �����

	/*herosprite.move(-0.4 * ftime, 0);
	herosprite.setTextureRect(IntRect(0, 96, 96, 96));*/
}
void Hero::moveRight(float ftime, float& currentFrame) {
	
	currentFrame += 0.005 * ftime; //������ ��� ����������� �� "������". ���������� ������� �� ���� �������� ������������ ������� � ��������. ������� 0.005 ����� �������� �������� ��������
	if (currentFrame > 3) currentFrame -= 3; //���� ������ � �������� ����� - ������������ �����.
	herosprite.setTextureRect(IntRect(96 * int(currentFrame), 192, 96, 96)); //���������� �� ����������� �. ���������� 0, 96,96*2 � ����� 0
	herosprite.move(0.1 * ftime, 0);//���������� ���� �������� ��������� ������
	
	
	/*herosprite.move(0.4 * ftime, 0);
	herosprite.setTextureRect(IntRect(0, 192, 96, 96));*/
}
void Hero::moveUp(float ftime, float& currentFrame) {
	
	currentFrame += 0.005 * ftime; //������ ��� ����������� �� "������". ���������� ������� �� ���� �������� ������������ ������� � ��������. ������� 0.005 ����� �������� �������� ��������
	if (currentFrame > 3) currentFrame -= 3; // ���� ������ � �������� ����� - ������������ �����.
	herosprite.setTextureRect(IntRect(96 * int(currentFrame), 288, 96, 96)); //���������� �� ����������� �. ���������� 0,96,96*2, � ����� 0
	herosprite.move(0, -0.1 * ftime);//���������� ���� �������� ��������� �����
	
	/*herosprite.move(0, -0.4 * ftime);
	herosprite.setTextureRect(IntRect(0, 288, 96, 96));*/
}

void Hero::moveDown(float ftime, float& currentFrame) {

	currentFrame += 0.005 * ftime; //������ ��� ����������� �� "������". ���������� ������� �� ���� �������� ������������ ������� � ��������. ������� 0.005 ����� �������� �������� ��������
	if (currentFrame > 3) currentFrame -= 3; //���� ������ � �������� ����� - ������������ �����.
	herosprite.setTextureRect(IntRect(96 * int(currentFrame), 0, 96, 96)); //���������� �� ����������� �. ���������� 0,96,96*2,� ����� 0
	herosprite.move(0, 0.1 * ftime);//���������� ���� �������� ��������� ����


	/*herosprite.move(0, 0.4* ftime);
	herosprite.setTextureRect(IntRect(0, 0, 96, 96));*/
}




