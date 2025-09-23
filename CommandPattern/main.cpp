#include "common.h"
#include "Light.h"
#include "Remote.h"
#include "ICommand.h"
#include "LightCommand.h"

int main()
{
    Light *light = new Light();
    Remote *r = new Remote();
    r->submit(new LightCommand());
}