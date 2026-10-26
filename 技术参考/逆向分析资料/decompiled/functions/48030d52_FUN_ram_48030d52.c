/* Firmware entry: 0x48030d52 */

int FUN_ram_48030d52(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = param_2 + param_1 * 0x1d40;
  if (*(int *)(iVar4 + 0x1cc4) != 0) {
    puVar1 = (undefined4 *)(param_1 * 0x1d40 + 0xcc4 + param_2);
    uVar2 = 0;
    do {
      iVar3 = FUN_ram_4802b18e(param_3,*puVar1);
      if (iVar3 != 0) {
        return (param_1 * 0x3a8 + uVar2) * 8 + 0xcc4 + param_2;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 2;
    } while (uVar2 < *(uint *)(iVar4 + 0x1cc4));
  }
  return 0;
}


