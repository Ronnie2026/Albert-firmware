/* Firmware entry: 0x480fd2fc */

int FUN_ram_480fd2fc(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6df2c == 0) {
    return 0;
  }
  cVar1 = '\x02';
  iVar2 = FUN_ram_480fcff8(&DAT_ram_4ff60e20,param_1);
  while( true ) {
    if (iVar2 != 0) {
      fence();
      DAT_ram_4ff6de3c = (char)param_1;
      return iVar2;
    }
    if (cVar1 == '\0') break;
    FUN_ram_4ff3c2b6(5);
    cVar1 = cVar1 + -1;
    iVar2 = FUN_ram_480fcff8(&DAT_ram_4ff60e20,param_1);
  }
  fence();
  DAT_ram_4ff6de3c = 0;
  return 0;
}


