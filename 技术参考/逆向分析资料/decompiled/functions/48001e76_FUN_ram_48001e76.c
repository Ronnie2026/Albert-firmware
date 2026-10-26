/* Firmware entry: 0x48001e76 */

void FUN_ram_48001e76(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = DAT_ram_4ff6d9a4 + 1;
  if (DAT_ram_4ff6d9a0 < 0x1f) {
    uVar3 = DAT_ram_4ff6d9a4 << 3;
    uVar1 = DAT_ram_4ff6d9a0 + 1;
    DAT_ram_4ff6d9a4 = iVar4;
    (&DAT_ram_4ff58a3c)[DAT_ram_4ff6d9a0 * 2] = param_2 & 7 | uVar3;
    (&DAT_ram_4ff58a38)[DAT_ram_4ff6d9a0 * 2] = param_1;
  }
  else {
    DAT_ram_4ff58a3c = param_2 & 7 | DAT_ram_4ff6d9a4 << 3;
    DAT_ram_4ff58a38 = param_1;
    DAT_ram_4ff6d9a4 = iVar4;
    FUN_ram_48001c3c(0);
    uVar1 = DAT_ram_4ff6d9a0;
  }
  if (iVar4 != 0x1fffffff) {
    DAT_ram_4ff6d9a0 = uVar1;
    return;
  }
  uVar3 = 0;
  DAT_ram_4ff6d9a0 = uVar1;
  do {
    uVar2 = uVar3 + 1;
    (&DAT_ram_4ff58a3c)[uVar3 * 2] = (&DAT_ram_4ff58a3c)[uVar3 * 2] & 7 | uVar3 * 8;
    uVar3 = uVar2;
  } while (uVar1 != uVar2);
  DAT_ram_4ff6d9a4 = uVar1;
  return;
}


