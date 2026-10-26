/* Firmware entry: 0x480553f6 */

void FUN_ram_480553f6(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  uVar3 = *param_1;
  while( true ) {
    uVar2 = uVar3 - 1;
    if ((int)uVar3 < 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if ((uVar3 & 0xffff) == 0) break;
    bVar1 = *param_1 == uVar3;
    uVar3 = *param_1;
    if (bVar1) {
      *param_1 = uVar2;
      return;
    }
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return;
}


