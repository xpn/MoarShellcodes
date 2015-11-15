char shellcode[] = "\x31\xc0\x50\x68\x6e\x63\x61\x74\x68\x2f\x6e\x79\x61\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x07\xcd\x7f";

/*** NYANCAT Shellcode **

** Simple, launches /bin/nyancat ;) **

xor eax, eax
push eax
push 0x7461636e
push 0x61796e2f
push 0x6e69622f
mov ebx, esp ; '/bin/nyancat'
push eax
mov edx, esp
push ebx
mov ecx, esp
mov al, 7 ; execve
int 0x7F  ; FIRE!!!!

*/