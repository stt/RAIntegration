#include "stdafx.h"

using namespace std;

_EXTERN_C
void prompt_quit() noexcept;

_END_EXTERN_C

/// <summary>Defines the entry point for the console application.</summary>
/// <returns>
///   Application exit code, <c>0</c> for success, non-zero for failure.
/// </returns>
int main()
{


	prompt_quit();
} // end function main

/// <summary>Prompts user to quit the quit the application.</summary>
void prompt_quit() noexcept {
	cout << "Press any button to exit...\n";
	cin.get();
} // end function prompt_quit