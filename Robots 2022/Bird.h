#pragma once
#include "Pet.h"
class Bird :
    public Pet
{
public:
    Bird();
    ~Bird();

    void Speak();
};

