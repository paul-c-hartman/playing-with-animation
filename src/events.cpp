#include "events.hpp"

void processEvents(sf::Window& window)
{
  while (const std::optional event = window.pollEvent())
  {
      if (event->is<sf::Event::Closed>())
      {
          window.close();
      }
  }

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
  {
      window.close();
  }
}