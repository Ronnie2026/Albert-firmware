/* Firmware entry: 0x481a7060 */

void FUN_ram_481a7060(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = mhartid * 0x20;
  uVar3 = 1;
  puVar2 = &DAT_ram_4ff6c47c + mhartid * 8;
  do {
    if ((code *)*puVar2 != (code *)0x0) {
      uVar4 = (*(code *)*puVar2)();
      uVar3 = uVar3 & uVar4;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (undefined4 *)(iVar1 + 0x4ff6c49c));
  if (uVar3 == 0) {
    return;
  }
  FUN_ram_4ff2fdca();
  return;
}


