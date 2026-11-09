#include <iostream>
#include <raylib.h>

// ball class
class Ball
{   
    public:
    float x, y;
    int rad;

    void Draw()
    {
        DrawCircle(x, y, rad, WHITE);
    }

};

class Paddle
{
    public:
    float x,y;
    int width, height;

    void Draw()
    {
        DrawRectangle(x, y, width, height, WHITE);
    }
};

// all objects here
Ball ball; 
Paddle player;

int main()
{
    // for the window
    const int screen_width = 1190;
    const int screen_height = 750;
    InitWindow(screen_width, screen_height, "Pong Game");
    SetTargetFPS(60); // to cap the fps

    // to make the ball
    ball.x = screen_width/2;
    ball.y = screen_height/2;
    ball.rad = 20;

    // to make the paddle
    player.x = 0;
    player.y = screen_height/2;
    player.width = 

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        // draw balls
        ball.Draw();
        // draw paddle
        

        EndDrawing();
    }


    CloseWindow();
    return 0;
}

    // Create the window[v]
    // Create the ball[v]
    // Create the paddle[]
    // Draw the playing area[]
    // add speed for ball[]
    // add speed for paddles[]
    // make enemy ai[]
    // Make collisions[]
    // Add score[]