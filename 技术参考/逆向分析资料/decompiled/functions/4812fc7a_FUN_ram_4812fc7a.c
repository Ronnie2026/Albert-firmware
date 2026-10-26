/* Firmware entry: 0x4812fc7a */

void FUN_ram_4812fc7a(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0;
  uVar5 = 0;
  uVar2 = 0;
  do {
    uVar3 = FUN_ram_4812fc32(iVar1);
    if (uVar3 < 0x40) {
      if ((int)(uVar3 - 0x20) < 0) {
        uVar4 = 1 << (uVar3 & 0x1f);
        uVar3 = 0;
      }
      else {
        uVar3 = 1 << (uVar3 - 0x20 & 0x1f);
        uVar4 = 0;
      }
      uVar5 = uVar5 | uVar4;
      uVar2 = uVar2 | uVar3;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 7);
  FUN_ram_481333c2(uVar5,uVar2);
  return;
}


