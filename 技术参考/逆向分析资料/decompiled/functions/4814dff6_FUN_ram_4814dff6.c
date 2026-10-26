/* Firmware entry: 0x4814dff6 */

void FUN_ram_4814dff6(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                     undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint auStack_14 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((2 < (param_2 - 3U & 0xff)) && (param_2 != 1)) {
    return;
  }
  auStack_14[0] = 0;
  if ((param_4 == 2) && (iVar1 = FUN_ram_4813b38c(param_5,auStack_14,2,param_6), iVar1 == 2)) {
    uVar2 = FUN_ram_48137fc8(auStack_14[0] & 0xffff);
    for (piVar3 = (int *)DAT_ram_4ff6e1ac; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      if (piVar3[0x31] == param_1) {
        if (*(ushort *)(piVar3 + 0x37) <= uVar2) {
          return;
        }
        *(short *)(piVar3 + 0x37) = (short)uVar2;
        return;
      }
    }
  }
  return;
}


