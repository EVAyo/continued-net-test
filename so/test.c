#include <stdio.h>
#include <windows.h>
void gotoxy(short x, short y) {
    COORD pos = {x,y};
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);// ��ȡ��׼����豸���
    SetConsoleCursorPosition(hOut, pos);//���������ֱ���ָ���ĸ����壬����λ��
}
void cprint(char *str) {
    gotoxy(0,0);
    printf("%s\n", str);
}