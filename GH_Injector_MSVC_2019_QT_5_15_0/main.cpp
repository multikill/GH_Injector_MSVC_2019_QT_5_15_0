#include <QApplication>
#include "DarkStyle.h"
#include "framelesswindow/framelesswindow.h"
#include "mainwindow.h"
#include "GuiMain.h"
#include "CmdArg.hpp"
#include "InjectionLib.hpp"

#ifdef _DEBUG

#define DEBUG_CMD_ARG
char* argument_value1[]{ "val1" };
char* argument_value2[]{ "val1", "-y" };
char* argument_value3[]{ "val1", "-f", "C:\\temp\\HelloWorld_x64.dll", "-p", "notepad.exe" };

#endif


int main(int argc, char* argv[]) {

#ifdef DEBUG_CMD_ARG
	int res = CmdArg(ARRAYSIZE(argument_value3), argument_value3);

#else	
	int res = CmdArg(argc, argv);

#endif //DEBUG CMD

	if (res > 1)
	{
		return res;
	}

	//InjectionLib inj;
	//inj.Init();
   // std::vector<std::string> l;
	//l.push_back({});
	//l.reserve(10);

	//inj.ScanHook(18108, l);

	// Restart Application loop
	int currentExitCode = 0;
	do {

		QApplication a(argc, argv);


		FramelessWindow framelessWindow;
		if (!res)
		{
			DarkStyle* dark = new DarkStyle;
			QApplication::setStyle(dark);
			QApplication::setPalette(QApplication::style()->standardPalette());
			//a.setStyle(dark);

			framelessWindow.setWindowTitle("GH Injector");
			framelessWindow.setWindowIcon(QIcon(":/GuiMain/gh_resource/GH Icon.ico"));
			GuiMain* MainWindow = new GuiMain(&framelessWindow);
			framelessWindow.setContent(MainWindow);
			framelessWindow.show();
		}
		// Old performance style
		else
		{
			GuiMain* mainWindow = new GuiMain;
			mainWindow->show();
		}


		currentExitCode = a.exec();

		int i = 42;
	} while (currentExitCode == GuiMain::EXIT_CODE_REBOOT);

	return currentExitCode;
}
