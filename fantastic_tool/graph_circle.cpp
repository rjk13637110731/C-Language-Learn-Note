#include <easyx.h>
#include <conio.h>
int main()
{
	initgraph(6000, 6000);
	circle(150, 150, 100);
	circle(280, 150, 100);
	circle(400, 150, 100);
	circle(215, 280, 100);
	circle(340, 280, 100);
	_getch();               // 按任意键继续
	closegraph();           // 关闭绘图窗口
	return 0;
}
