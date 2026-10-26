/* Firmware entry: 0x48120778 */

int FUN_ram_48120778(uint param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0;
  if (param_2 == 0x40) {
    if (param_1 == 0) {
      return 0;
    }
    if ((param_1 & 0x3f) != 0) {
      return 0;
    }
    iVar1 = FUN_ram_4ff20956(0x40,param_1,0x404);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4ff20956(0x40,param_1,0x80c);
      FUN_ram_4ff2b96c((iVar1 == 0) + '\b',param_1);
    }
  }
  return iVar1;
}


