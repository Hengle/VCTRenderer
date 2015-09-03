#pragma once
#include "render_window.h"

class Interface
{
    public:
        Interface();
        virtual ~Interface();

        void Initialize(const RenderWindow &activeWindow);
        void Terminate();
        void Render();
        void NewFrame();
    protected:
        // Application specific UI code
        virtual void Draw() = 0;
};
