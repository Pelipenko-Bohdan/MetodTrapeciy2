#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // ��������� �� ������ �����
    Zavdanny_3::MyForm^ form = gcnew Zavdanny_3::MyForm();
    Application::Run(form);
}