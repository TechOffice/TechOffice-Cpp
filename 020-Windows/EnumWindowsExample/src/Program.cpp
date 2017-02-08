//============================================================================
// Name        :
// Author      : Ben
// Version     :
// Copyright   :
// Description : This is an example which use windows api to list all available window
//============================================================================

#include <minwindef.h>
#include <windef.h>
#include <winnt.h>
#include <winuser.h>
#include <iostream>

using namespace std;

/**
 * Callback function passed to enumerate function
 */
BOOL CALLBACK EnumWindowsProc(HWND hWnd, long lParam) {
    char buff[255];
    if (IsWindowVisible(hWnd)) {

    	GetWindowText(hWnd, (LPSTR) buff, 254);
        cout <<  "Window Title: " << buff << endl;

        DWORD outDword = 20;
        GetWindowThreadProcessId(hWnd, &outDword);
        cout << "Process ID: " << outDword << endl;
    }
    return TRUE;
}

/**
 * Main Program
 */
int main() {
	cout << "Welcome to Techoffice Example" << endl; // prints Welcome to Techoffice Example

	// Get the handle to the foregroung window.
    EnumWindows((WNDENUMPROC)EnumWindowsProc, 0);

	return 0;
}
