#include "AboutForm.h"
#include "Main.h"

System::Void KeyboardAudio::AboutForm::AboutForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    if (Main::lang == "zh-TW")
    {
        this->Text = "����";
        label1->Text = "���n��L (Keyboard Audio)\r\n"
                     + "����: 2.0.0\r\n\r\n"
                     + "���M�׬��}��\r\n"
                     + "�Y�Q�F�ѧ�h�Ӹ`�w��d�ݱM��GitHub\r\n\r\n"
                     + "�}�o��: Kalin Lai\r\n"
                     + "(aka ������� aka KalinKonta)\r\n\r\n";
        linkLabel1->Text = "GitHub";
        linkLabel2->Text = "Kalin's ���S";
        linkLabel3->Text = "[�w��q�\] �{���ϥܬO�x�W VTuber Aoi Hinamori\r\n"
                         + "�}�o�F�P���۩�o�A�]�O�ڥD���I";
    }
    else
    {
        this->Text = "About";
        label1->Text = "Keyboard Audio\r\n"
                     + "Version: 2.0.0\r\n\r\n"
                     + "This project is OPEN-SOURCE.\r\n"
                     + "See the project GitHub to see more details.\r\n\r\n"
                     + "Made by Kalin Lai\r\n"
                     + "(aka ������� aka KalinKonta)\r\n\r\n";
        linkLabel1->Text = "GitHub";
        linkLabel2->Text = "Kalin's Twitter";
        linkLabel3->Text = "[Promote] Icon is Taiwanese VTuber, Aoi Hinamori.\r\n"
                         + "My inspiration for development comes from her.";
    }

    return System::Void();
}

System::Void KeyboardAudio::AboutForm::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    System::Diagnostics::Process::Start("https://github.com/KalinLai-void/Keyboard_Audio");
    return System::Void();
}

System::Void KeyboardAudio::AboutForm::linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    System::Diagnostics::Process::Start("https://twitter.com/KarinKonta");
    return System::Void();
}

System::Void KeyboardAudio::AboutForm::linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    System::Diagnostics::Process::Start("https://www.youtube.com/@AoiHinamoriCh");
    return System::Void();
}