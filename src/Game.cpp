
#include "Game.h"
#include <iostream>

Game::Game(sf::RenderWindow& window) : window(window)
{
  srand(time(NULL));
}

Game::~Game() {}

bool Game::init()
{
  return true;
}

void Game::update(float dt) {}

void Game::render() {}

void Game::mouseClicked(sf::Event event)
{
  // get the click position
  sf::Vector2i click = sf::Mouse::getPosition(window);
}

void Game::keyPressed(sf::Event event) {}
