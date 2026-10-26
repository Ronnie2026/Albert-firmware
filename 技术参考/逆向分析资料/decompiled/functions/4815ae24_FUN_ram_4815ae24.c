/* Firmware entry: 0x4815ae24 */

int FUN_ram_4815ae24(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  undefined1 auStack_50 [36];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x110b;
  }
  uVar1 = param_3 + 1;
  uVar6 = (uint)*(ushort *)(param_2 + 0x18);
  iVar4 = param_4;
  if (uVar1 < (uint)*(byte *)(param_2 + 2) + param_3) {
    do {
      if (0x7d < uVar1) {
        return -1;
      }
      pcVar5 = *(code **)(**(int **)(param_1 + 0x50) + 0x10);
      iVar3 = (*pcVar5)(*(int **)(param_1 + 0x50),uVar1 * 0x20 + *(int *)(param_1 + 8) + 0x40,
                        auStack_50,0x20,pcVar5);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar2 = uVar6;
      if (0x20 < uVar6) {
        uVar2 = 0x20;
      }
      FUN_ram_4ff45158(iVar4,auStack_50,uVar2);
      uVar1 = uVar1 + 1;
      uVar6 = uVar6 - uVar2;
      iVar4 = iVar4 + uVar2;
    } while (uVar1 < (uint)*(byte *)(param_2 + 2) + param_3);
    uVar6 = (uint)*(ushort *)(param_2 + 0x18);
  }
  iVar4 = FUN_ram_4815d6a8(param_4,uVar6,0);
  iVar3 = 0;
  if ((iVar4 != *(int *)(param_2 + 0x1c)) && (iVar3 = FUN_ram_4815ac98(param_1,param_3), iVar3 == 0)
     ) {
    iVar3 = 0x1102;
  }
  return iVar3;
}


