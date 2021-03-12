
Useful grep for using objdump disassembly and viewing just <main>
    - `objdump -d <executable_name> | grep -A 30 '<main>'`

For seeing C the combined C/assembly listing
    - `gcc -c -g -Wa,-a,-ad -S foo.c > foo.lst`

For seeing *simple* assembly output from GCC
    - `gcc -O2 -S foo.c`

Passing functions as arguments in C
    - https://jraleman.medium.com/c-programming-language-passing-a-function-as-a-parameter-90d52fe842ea 

Compiling for different ISA and architecture (you need `gcc-multilib` to do this)
    - `gcc -masm=*ISA* foo.c` (default=att, options=att,intel)
    - `gcc -m32 foo.c -o foo` (default=TARGET field in `gcc -v`)

    Examples:
        - Output simple 32 bit AT&T syntax assembly for foo.c
            `gcc -m32 -O2 -S foo.c`
        - Intel
            `gcc -m32 -masm=intel -O2 -S foo.c`

