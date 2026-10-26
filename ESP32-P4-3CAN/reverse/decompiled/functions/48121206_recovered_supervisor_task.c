/* Firmware entry: 0x48121206 */

/* Analyst-assigned name based on firmware call sites and string references. */

void recovered_supervisor_task(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_12 = 0;
  do {
    uVar2 = FUN_ram_4ff21a0a();
    uVar1 = __divdi3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1000,0);
    FUN_ram_48120fee(uVar1,&uStack_1c);
    FUN_ram_4ff3c2b6(10);
  } while( true );
}


