#include "gamemodel.h"

GameModel::GameModel(QSize window_size)
{
    this->b1 = new Ball(QPoint(240,250), 1.0, 2*M_PI/8);
    this->b2 = new Ball(QPoint(240,250), 1.0, 10*M_PI/8);
    this->p1 = new Player(Player::TOP, window_size);
    this->p2 = new Player(Player::BOTTOM, window_size);
    this->score_board = new ScoreBoard();
    this->briques = initBriques();
}

std::vector<Brique*> GameModel::initBriques() {
    return std::vector<Brique*>{ new Brique(154,44,24,24, 222), new ColoredBrique(200, 145, 30, 44, 22, Qt::red)};
}