#pragma once
#include "common.h"
#include "Light.h"
#include "ICommand.h"

class LightCommand : public ICommand{
    public:
    Light *light;

    void execute()
    {
        light->on();
    }
    void undo()
    {
        light->off();
    }

};