#pragma once
#include "common.h"

class ICommand{
    public:
    virtual void execute() = 0;
    virtual void undo() = 0;
};