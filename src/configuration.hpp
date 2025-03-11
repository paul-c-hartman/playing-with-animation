#pragma once

namespace conf
{
  // Window
  sf::Vector2u const window_size = {1920, 1080};
  sf::Vector2f const window_size_f = static_cast<sf::Vector2f>(window_size);
  uint32_t const max_framerate = 144;
  bool const fullscreen = true;
  float const dt = 1.0 / static_cast<float>(max_framerate);
}