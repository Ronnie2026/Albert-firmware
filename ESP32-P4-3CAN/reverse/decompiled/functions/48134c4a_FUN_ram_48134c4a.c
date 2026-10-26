/* Firmware entry: 0x48134c4a */

void FUN_ram_48134c4a(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 0x36;
  if (0x36 < (int)param_1) {
    do {
      if ((((int)uVar1 < 0x40) &&
          (uVar4 = 1 << (uVar1 & 0x1f), (uVar4 & *(uint *)(param_2 + 4)) != 0)) &&
         ((uVar4 & *(uint *)(param_3 + 4)) == 0)) {
        uVar2 = FUN_ram_4814e762();
        iVar3 = FUN_ram_48134bb6(uVar1);
        if (iVar3 != 0) {
          *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | uVar4;
        }
        FUN_ram_4814e79e(uVar2);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_1);
  }
  return;
}


