//
// Created by Daniella on 15/06/2023.
//

#ifndef EX4_MTM_NINJA_H
#define EX4_MTM_NINJA_H

#include "Player.h"

class Ninja : public Player{
public:
    /**C'tor for Ninja
     *
     * @param name the name of the player
     * creates new Ninja player with default values
     */
    explicit Ninja(const std::string& name) : Player(name) {};

    //Here we tell the compiler to use defaults:
    Ninja& operator=(const Ninja&) = default;
    Ninja(const Ninja&) = default;
    ~Ninja() override = default;

    /*
     * handles well encounter for ninja
     */
    void encounterWell() override;

    /*
     *adds double the regular amount of coins
    */
     void addCoins(int coinAmount) override;

     /*
      * print function
      */
     std::ostream& print(std::ostream& os) const override;
};


#endif //EX4_MTM_NINJA_H
