#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"
#include "Player.h"
#include "EnemyShip.h"
#include "PowerUp.h"
#include "Strafer.h"
#include "Charger.h"

class Game
{
public:
	Player player;
	std::vector<EnemyShip*> hostileVec;
	std::vector<Projectile> projectileVec;
	std::vector<PowerUp*> powerUpVec;
	sf::Font scoreFont;
	sf::Text scoreText;
	int score;

	float GetMagnitude(sf::Vector2f input);
	void Load(float posX, float posY);
	void Update(float maxX, float maxY);
	void Render(sf::RenderWindow &window);
private:

};
