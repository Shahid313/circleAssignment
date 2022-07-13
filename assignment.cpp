#include<graphics.h>
#include<iostream>
#include<windows.h>

class Circle{
    private:
        int height = GetSystemMetrics(SM_CYSCREEN);
        int width = GetSystemMetrics(SM_CXSCREEN);
    public:
        void createCircle(int x, int y){
        initwindow(width,height,"Circle",1,1);
        circle(x,y,50);
    }
};

class MoveCircle{
    public:
        void moveRight(int x, int y){
            cleardevice();
            circle(x,y,50);
        }

        void moveLeft(int x, int y){
            cleardevice();
            circle(x,y,50);
        }

        void moveUp(int x, int y){
            cleardevice();
            circle(x,y,50);
        }

        void moveDown(int x, int y){
            cleardevice();
            circle(x,y,50);
        }

};

int main(){
    int x = 100;
    int y = 100;
    
    Circle myCircle;
    MoveCircle move;
    myCircle.createCircle(x,y);

    while(1){
        if(GetAsyncKeyState(VK_RIGHT)){
            x += 10;
            move.moveRight(x,y);
        }else if(GetAsyncKeyState(VK_LEFT)){
            x -= 10;
            move.moveLeft(x,y);
        }else if(GetAsyncKeyState(VK_UP)){
            y -= 10;
            move.moveUp(x,y);
        }else if(GetAsyncKeyState(VK_DOWN)){
            y += 10;
            move.moveDown(x,y);
        }

        if(GetAsyncKeyState(VK_RETURN)){
            break;
        }
        Sleep(10);
    }
    
    closegraph();

    return 0;
}