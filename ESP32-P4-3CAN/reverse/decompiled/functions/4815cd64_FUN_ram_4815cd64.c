/* Firmware entry: 0x4815cd64 */

int FUN_ram_4815cd64(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 100) != 1) {
    return 0x1101;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    while (iVar2 = FUN_ram_4815b3e2(iVar1,param_2,0xff,0,0xff), iVar2 != 0x1102) {
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}


