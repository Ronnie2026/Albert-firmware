/* Firmware entry: 0x4ff37524 */

void FUN_ram_4ff37524(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = 8;
  do {
    while( true ) {
      uVar1 = param_1 >> 0x1c;
      if (9 < uVar1) break;
      FUN_ram_4ff3732e(uVar1 + 0x30);
      iVar2 = iVar2 + -1;
      FUN_ram_4ff37386(uVar1 + 0x30);
      param_1 = param_1 << 4;
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_ram_4ff3732e(uVar1 + 0x57);
    iVar2 = iVar2 + -1;
    FUN_ram_4ff37386(uVar1 + 0x57);
    param_1 = param_1 << 4;
  } while (iVar2 != 0);
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return;
}


