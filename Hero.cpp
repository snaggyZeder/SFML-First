#include "Hero.hpp"
#include <SFML/Graphics.hpp>
using namespace sf;

Hero::Hero() {
	
	heroimage.loadFromFile("images/hero.png");//загружаем в него файл

	herotexture.loadFromImage(heroimage);//передаем в него объект Image (изображения)

	herosprite.setTexture(herotexture);//передаём в него объект Texture (текстуры)
	herosprite.setPosition(50, 25);//задаем начальные координаты появления спрайта

	herosprite.setTextureRect(IntRect(0, 192, 96, 96));//получили нужный нам прямоугольник с котом
	herosprite.setPosition(50, 25);
}

Sprite& Hero::getSprite() { return herosprite; }


void Hero::moveLeft(float ftime, float& currentFrame) {
	
	currentFrame += 0.005 * ftime; //служит для прохождения по "кадрам". переменная доходит до трех суммируя произведение времени и скорости. изменив 0.005 можно изменить скорость анимации
	if (currentFrame > 3) currentFrame -= 3; // если пришли к третьему кадру - откидываемся назад.
	herosprite.setTextureRect(IntRect(96 * int(currentFrame), 96, 96, 96)); //проходимся по координатам Х. получается начинаем рисование с координаты Х равной 0,96,96*2, и опять 0
	herosprite.move(-0.1 * ftime, 0);//происходит само движение персонажа влево

	/*herosprite.move(-0.4 * ftime, 0);
	herosprite.setTextureRect(IntRect(0, 96, 96, 96));*/
}
void Hero::moveRight(float ftime, float& currentFrame) {
	
	currentFrame += 0.005 * ftime; //служит для прохождения по "кадрам". переменная доходит до трех суммируя произведение времени и скорости. изменив 0.005 можно изменить скорость анимации
	if (currentFrame > 3) currentFrame -= 3; //если пришли к третьему кадру - откидываемся назад.
	herosprite.setTextureRect(IntRect(96 * int(currentFrame), 192, 96, 96)); //проходимся по координатам Х. получается 0, 96,96*2 и опять 0
	herosprite.move(0.1 * ftime, 0);//происходит само движение персонажа вправо
	
	
	/*herosprite.move(0.4 * ftime, 0);
	herosprite.setTextureRect(IntRect(0, 192, 96, 96));*/
}
void Hero::moveUp(float ftime, float& currentFrame) {
	
	currentFrame += 0.005 * ftime; //служит для прохождения по "кадрам". переменная доходит до трех суммируя произведение времени и скорости. изменив 0.005 можно изменить скорость анимации
	if (currentFrame > 3) currentFrame -= 3; // если пришли к третьему кадру - откидываемся назад.
	herosprite.setTextureRect(IntRect(96 * int(currentFrame), 288, 96, 96)); //проходимся по координатам Х. получается 0,96,96*2, и опять 0
	herosprite.move(0, -0.1 * ftime);//происходит само движение персонажа вверх
	
	/*herosprite.move(0, -0.4 * ftime);
	herosprite.setTextureRect(IntRect(0, 288, 96, 96));*/
}

void Hero::moveDown(float ftime, float& currentFrame) {

	currentFrame += 0.005 * ftime; //служит для прохождения по "кадрам". переменная доходит до трех суммируя произведение времени и скорости. изменив 0.005 можно изменить скорость анимации
	if (currentFrame > 3) currentFrame -= 3; //если пришли к третьему кадру - откидываемся назад.
	herosprite.setTextureRect(IntRect(96 * int(currentFrame), 0, 96, 96)); //проходимся по координатам Х. получается 0,96,96*2,и опять 0
	herosprite.move(0, 0.1 * ftime);//происходит само движение персонажа вниз


	/*herosprite.move(0, 0.4* ftime);
	herosprite.setTextureRect(IntRect(0, 0, 96, 96));*/
}




