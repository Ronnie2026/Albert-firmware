/* Firmware entry: 0x48174022 */

void FUN_ram_48174022(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x44) != 1) {
    FUN_ram_4817fb90(param_1 + 0xc);
    FUN_ram_4817fb90(param_1 + 0x14);
    FUN_ram_4817fb90(param_1 + 0x1c);
    FUN_ram_4817fb90(param_1 + 0x24);
    FUN_ram_4817fb90(param_1 + 0x2c);
    FUN_ram_4817fb90(param_1 + 0x34);
    FUN_ram_4817fb90(param_1 + 4);
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (iVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x5c);
    if (uVar2 != 0) {
      iVar5 = 0;
      uVar4 = 0;
      do {
        iVar1 = iVar3 + iVar5;
        if (iVar1 != 0) {
          FUN_ram_4817fb90(iVar1);
          FUN_ram_4817fb90(iVar1 + 8);
          FUN_ram_4817fb90(iVar1 + 0x10);
          iVar3 = *(int *)(param_1 + 0x58);
          uVar2 = *(uint *)(param_1 + 0x5c);
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x18;
      } while (uVar4 < uVar2);
    }
    thunk_FUN_ram_4ff209c6(iVar3);
  }
  FUN_ram_48178af2(param_1,0x60);
  return;
}


