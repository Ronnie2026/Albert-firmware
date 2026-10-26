/* Firmware entry: 0x4fc00330 */

/* WARNING: Control flow encountered bad instruction data */

void longjmp(__jmp_buf_tag *__env,int __val)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


