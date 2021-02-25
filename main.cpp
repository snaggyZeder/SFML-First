#include <SFML/Graphics.hpp>
using namespace sf;

class Hero {
private:
Image heroimage; //создаем объект Image (изображение)
Texture herotexture;//создаем объект Texture (текстура)
Sprite herosprite;//создаем объект Sprite(спрайт)

public:
	Hero() {
		
		heroimage.loadFromFile("images/hero.png");//загружаем в него файл

		herotexture.loadFromImage(heroimage);//передаем в него объект Image (изображения)

		herosprite.setTexture(herotexture);//передаём в него объект Texture (текстуры)
		herosprite.setPosition(50, 25);//задаем начальные координаты появления спрайта
		
		herosprite.setTextureRect(IntRect(0, 192, 96, 96));//получили нужный нам прямоугольник с котом
		herosprite.setPosition(50, 25);

	}
	Sprite& getSprite() { return herosprite; }

};

int main()
{
	Hero hero1;

	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(400, 500), "SFML lesson 1!");

	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Отрисовка окна	
		window.clear();
		window.draw(hero1.getSprite());//write sprite
		window.display();
	}

	return 0;
}