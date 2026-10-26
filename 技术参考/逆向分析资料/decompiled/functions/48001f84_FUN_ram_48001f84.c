/* Firmware entry: 0x48001f84 */

int FUN_ram_48001f84(uint param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6d9b0 != (uint *)0x0) {
    iVar3 = 0;
    puVar1 = DAT_ram_4ff6d9b0;
    do {
      if (puVar1[7] != 0) {
        if (param_1 == ((*puVar1 | puVar1[1] | puVar1[2]) & param_1)) {
          iVar2 = FUN_ram_481a969a();
          iVar3 = iVar3 + iVar2;
        }
      }
      puVar1 = (uint *)puVar1[8];
    } while (puVar1 != (uint *)0x0);
    return iVar3;
  }
  return 0;
}


