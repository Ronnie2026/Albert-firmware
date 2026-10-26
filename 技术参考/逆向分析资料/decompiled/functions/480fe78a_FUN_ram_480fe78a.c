/* Firmware entry: 0x480fe78a */

undefined4 FUN_ram_480fe78a(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_98 [59];
  char cStack_5d;
  int iStack_58;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_480fe48e(&DAT_ram_4ff60e20);
  DAT_ram_4ff6de44 = DAT_ram_4ff6de44 + 1;
  if (iVar1 == 0) {
LAB_ram_480fe7b4:
    DAT_ram_4ff6de40 = DAT_ram_4ff6de40 + 1;
    return 0;
  }
  iVar2 = FUN_ram_48025ba6();
  do {
    uVar3 = FUN_ram_48025ba6();
    FUN_ram_48052b10(auStack_98,&DAT_ram_4ff69640,uVar3);
    if (iStack_58 == iVar1) {
      if (cStack_5d == '\x02') {
        return 1;
      }
      if (cStack_5d == '\x03') goto LAB_ram_480fe7b4;
    }
    iVar4 = FUN_ram_48025ba6();
    if (-1 < iVar4 - (iVar2 + 0xfa)) goto LAB_ram_480fe7b4;
    thunk_FUN_ram_4ff3c2b6(1);
  } while( true );
}


