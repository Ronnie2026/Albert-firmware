/* Firmware entry: 0x480084e8 */

void FUN_ram_480084e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(&DAT_ram_4ff5a014 + param_1 * 4);
  uVar3 = *(int *)(iVar2 + 0x28) + 1;
  uVar3 = uVar3 & -(uint)((int)uVar3 < *(int *)(iVar2 + 0x30));
  if (*(uint *)(iVar2 + 0x2c) == uVar3) {
    if (1 < DAT_ram_4ff47dac) {
      uVar1 = FUN_ram_4ff44d14();
      ets_printf("W (%lu) %s: Fail to enqueue pattern position, pattern queue is full.\n",uVar1,
                 &DAT_ram_481b4c88);
      return;
    }
  }
  else {
    *(undefined4 *)(*(int *)(iVar2 + 0x34) + *(int *)(iVar2 + 0x28) * 4) = param_2;
    *(uint *)(iVar2 + 0x28) = uVar3;
  }
  return;
}


