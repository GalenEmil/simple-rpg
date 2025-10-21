#ifndef ScoreBoard
#define ScoreBoard

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>


#endif // ScoreBoard

class ScoreBoard{
public:
ScoreBoard();
    void addPts(int value); // added parameter to the addPts method
    int getPts() const; // added getter for points
    void setPts(int value); // added setter for points so if a consel is made in the future it can be set
    void Load(std::string fileName);
    void Load(std::string fileName, sf::IntRect rect);
    void update(sf::RenderWindow* window, int timeElapsed); 

    

private:
    int Pts; 
    sf::Texture* texture;
    
};