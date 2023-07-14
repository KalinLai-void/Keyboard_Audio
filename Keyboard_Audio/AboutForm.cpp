#include "AboutForm.h"
#include "Main.h"

System::Void KeyboardAudio::AboutForm::AboutForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    if (Main::lang == "zh-TW")
    {
        this->Text = "關於";
        label1->Text = "有聲鍵盤 (Keyboard Audio)\r\n"
                     + "喔齁喔齁鍵盤（Aoi所賜之專案名）\r\n"
                     + "版本: 2.0.0\r\n\r\n"
                     + "此專案為開源\r\n"
                     + "若想了解更多細節歡迎查看專案GitHub\r\n\r\n"
                     + "開發者: Kalin Lai\r\n"
                     + "(aka 風凜魂太 aka KalinKonta)\r\n\r\n";
        linkLabel1->Text = "GitHub";
        linkLabel2->Text = "Kalin's 推特";
        linkLabel3->Text = "[歡迎訂閱] 程式圖示是台灣 VTuber Aoi Hinamori\r\n"
                         + "開發靈感源自於她，也是我主推！";
    }
    else
    {
        this->Text = "About";
        label1->Text = "Keyboard Audio\r\n"
                     + "O-Hou O-Hou Keyboard（named by Aoi）\r\n"
                     + "Version: 2.0.0\r\n\r\n"
                     + "This project is OPEN-SOURCE.\r\n"
                     + "See the project GitHub to see more details.\r\n\r\n"
                     + "Made by Kalin Lai\r\n"
                     + "(aka 風凜魂太 aka KalinKonta)\r\n\r\n";
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
