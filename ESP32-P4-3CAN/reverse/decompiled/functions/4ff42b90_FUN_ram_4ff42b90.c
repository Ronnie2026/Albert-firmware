/* Firmware entry: 0x4ff42b90 */

void FUN_ram_4ff42b90(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_1 + param_1[1] * 0x24;
  uVar1 = *(uint *)(iVar2 + 0x1c);
  uVar3 = *(undefined4 *)(iVar2 + 0x18);
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xffc00000 | param_3 & 0x3fffff;
  *(undefined4 *)(iVar2 + 0x18) = param_2;
  *(undefined4 *)(iVar2 + 0x20) = 1;
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xffc00000 | uVar1 & 0x3fffff;
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  return;
}


