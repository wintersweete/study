//
// Created by qin on 3/1/19.
//

#include<string>
#include<curses.h>
//#include<vector>

using namespace std;

void initialize(){
    // ncurses初始化
    initscr();
    // 按键不需要输入回车,直接交互
    cbreak();
    // 按键不显示(功能建不显示)
    noecho();
    // 隐藏光标
    curs_set(0);
    // 随机数
    srand(time(NULL));
}

void shutdown(){
    // ncurses清理
    endwin();

}

void main(){
    initialize();

    char ch='n';
    do{
        move(5,5);
        addch(ch);
        mvprintw(2,2,"https://www.qinxuemei.meili");
        ch = getch();
    }while(ch != 'Q' && ch != 'q');

    shutdown();
    return 0;
}