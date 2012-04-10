#include <afxwin.h>
#include "CloseTopWindow.h"

CMyApp myApp;

BOOL CMyApp::InitInstance ()
{
  //dynamic creation of main window
  m_pMainWnd = new CMainWindow;
  //showing window which is not active
  m_pMainWnd->ShowWindow (SW_SHOWNOACTIVATE);
  //closing message to original active window
  PostMessage(GetForegroundWindow(), WM_CLOSE,0,0);
  //close application
  exit(1);
  return TRUE;
}

CMainWindow::CMainWindow ()
{
    Create (NULL, _T ("Closing Active Window"));
}
