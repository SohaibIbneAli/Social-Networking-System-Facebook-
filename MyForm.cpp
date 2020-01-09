#include "MyForm.h"
#include "signupp.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	BhayaBook::MyForm form;

	Application::Run(%form);



}
