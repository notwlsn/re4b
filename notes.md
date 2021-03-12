
Useful grep for using objdump disassembly and viewing just <main>
    - `objdump -d <executable_name> | grep -A 30 '<main>'`

For seeing C the combined C/assembly listing
    - `gcc -c -g -Wa,-a,-ad -S foo.c > foo.lst`

For seeing *simple* assembly output from GCC
    - `gcc -O2 -S foo.c`

Passing functions as arguments in C
    - https://jraleman.medium.com/c-programming-language-passing-a-function-as-a-parameter-90d52fe842ea 
