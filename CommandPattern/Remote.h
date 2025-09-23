#pragma once
#include "common.h"
#include "ICommand.h"

class Remote{
    public:
    void submit(ICommand* command)
    {
        command->execute();
    }

    void unSubmit(ICommand* command)
    {
        command->undo();
    }

};