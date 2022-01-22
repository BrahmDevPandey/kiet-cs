#include <wx/wx.h>
class MainApp : public wxApp
{
public:
    virtual bool OnInit();
};
bool MainApp::OnInit()
{
    wxFrame *content = new wxFrame(NULL, wxID_ANY, wxT("Hello World!"), wxDefaultPosition, wxSize(200, 200));
    content->Show(true);
    return true;
}
IMPLEMENT_APP(MainApp)