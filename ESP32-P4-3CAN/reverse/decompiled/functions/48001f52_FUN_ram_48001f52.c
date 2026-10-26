/* Firmware entry: 0x48001f52 */

int FUN_ram_48001f52(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0;
  puVar2 = DAT_ram_4ff6d9b0;
  if (DAT_ram_4ff6d9b0 != (uint *)0x0) {
    do {
      if ((puVar2[7] != 0) && (param_1 == ((*puVar2 | puVar2[1] | puVar2[2]) & param_1))) {
        iVar1 = iVar1 + (puVar2[4] - puVar2[3]);
      }
      puVar2 = (uint *)puVar2[8];
    } while (puVar2 != (uint *)0x0);
    return iVar1;
  }
  return iVar1;
}


