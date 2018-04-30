'Hello World' 

* in nasm assembly language dialect (variation of standard x86 assembly language)
    - standard x86 & nasm
        -> https://en.wikipedia.org/wiki/X86_assembly_language
        -> https://en.wikipedia.org/wiki/Netwide_Assembler
        -> http://www.nasm.us/doc
    - nasm syntax (e.g., 'db' pseudo-instruction to declare init-d data in a.out)
        -> http://www.nasm.us/doc/nasmdoc3.html

* for x86_64 Linux only
    - uses elf64 Linux binary format
    - uses Linux 'syscall' indirection, write & exit calls
        -> http://man7.org/linux/man-pages/man2/syscall.2.html
        -> http://man7.org/linux/man-pages/man2/write.2.html
        -> http://man7.org/linux/man-pages/man3/exit.3.html
