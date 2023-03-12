#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "../Unit.h"
#include "../enums/DamageType.h"
#include "../particleSystem/particleSystem.h"

class Monster;
class Player;
class Projectile : public Unit{

    public:
        float damage=0.f;
        sf::Time lifetime;
        sf::Vector2f destination;
        float angle;
        float velX;
        float velY;
        float test;
        DamageType damageType;
        bool stopDealingDamageOnImpact=false;
        bool dealDamage=true;
        bool disappearOnImpact=false;
        bool attackMonsters=true;
        bool playerHit=false;
        std::vector<std::unique_ptr<Monster>*> monstersHit={nullptr};
        Projectile(std::string n, float dmg, sf::Time lt, DamageType dmgtype, sf::Vector2f p, sf::Vector2f s, sf::Vector2f dest, float spd, bool attackMons);
        void update(sf::Time elapsed,std::vector<std::unique_ptr<Monster>> &monsters, std::unique_ptr<Player> &player, std::vector<ParticleSystem> &particleSystem);
        bool checkIfMonsterWasHit(std::unique_ptr<Monster> &monster);
};
#endif // PROJECTILE_H
