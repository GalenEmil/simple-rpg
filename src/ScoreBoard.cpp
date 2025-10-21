#include "ScoreBoard.h"

ScoreBoard :: ScoreBoard() {

}
ScoreBoard :: ~ScoreBoard() {

}

ScoreBoard::ScoreBoard() {
    this->pts = 0;
}
ScoreBoard::~ScoreBoard() {
}
void ScoreBoard::addPts(int value) {
    this->pts += value;
}
int ScoreBoard::getPts() const {
    return this->pts;
}
void ScoreBoard::setPts(int value) {
    this->pts = value;
}
void ScoreBoard::Load(std::string fileName) {
    this->texture->loadFromFile(fileName, sf::IntRect());
    this->setTexture(*this->texture);
}
void ScoreBoard::Load(std::string fileName, sf::IntRect rect) {
    this->texture->loadFromFile(fileName, rect);
    this->setTexture(*this->texture);
}