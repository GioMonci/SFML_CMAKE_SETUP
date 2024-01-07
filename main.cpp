#include <SFML/Graphics.hpp>

const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIGHT = 720;

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SFML with CMAKE");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with white color
        window.clear(sf::Color::White);

        // draw everything here...
        sf::CircleShape shape(50.f);
        shape.setFillColor(sf::Color(150, 50, 250));

        // set a 10-pixel wide orange outline
        shape.setOutlineThickness(10.f);
        shape.setOutlineColor(sf::Color(250, 150, 100));
        shape.setOrigin(25.f,25.f);
        shape.setPosition(WINDOW_WIDTH/2.f,WINDOW_HEIGHT/2.f);

        // window.draw(...);
        window.draw(shape);
        // end the current frame
        window.display();
    }

    return 0;
}