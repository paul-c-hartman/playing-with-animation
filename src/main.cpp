#include <SFML/Graphics.hpp>
#include "events.hpp"
#include "configuration.hpp"

int main()
{
  auto window_state = conf::fullscreen ? sf::State::Fullscreen : sf::State::Windowed;
  auto window = sf::RenderWindow(sf::VideoMode({conf::window_size.x, conf::window_size.y}), "Playing with animation", window_state);
  window.setFramerateLimit(conf::max_framerate);

  while (window.isOpen())
  {
    processEvents(window);

    window.clear();
    window.display();
  }
}
