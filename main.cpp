#include <SFML/Graphics.hpp>
using namespace sf;

class Hero {
private:
Image heroimage; //������� ������ Image (�����������)
Texture herotexture;//������� ������ Texture (��������)
Sprite herosprite;//������� ������ Sprite(������)

public:
	Hero() {
		
		heroimage.loadFromFile("images/hero.png");//��������� � ���� ����

		herotexture.loadFromImage(heroimage);//�������� � ���� ������ Image (�����������)

		herosprite.setTexture(herotexture);//������� � ���� ������ Texture (��������)
		herosprite.setPosition(50, 25);//������ ��������� ���������� ��������� �������
		
		herosprite.setTextureRect(IntRect(0, 192, 96, 96));//�������� ������ ��� ������������� � �����
		herosprite.setPosition(50, 25);

	}
	Sprite& getSprite() { return herosprite; }

};

int main()
{
	Hero hero1;

	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(400, 500), "SFML lesson 1!");

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
		// ��������� ����	
		window.clear();
		window.draw(hero1.getSprite());//write sprite
		window.display();
	}

	return 0;
}