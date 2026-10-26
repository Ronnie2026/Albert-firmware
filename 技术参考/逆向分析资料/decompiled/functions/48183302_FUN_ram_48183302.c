/* Firmware entry: 0x48183302 */

void FUN_ram_48183302(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0x30;
    if (-1 < (int)uVar1) goto LAB_ram_48183340;
  }
  else {
    if (-1 < (int)uVar1) goto LAB_ram_48183340;
    if (uVar3 < 0x30) {
      uVar1 = uVar3 + 1 >> 1;
      goto LAB_ram_48183340;
    }
  }
  uVar1 = 0;
LAB_ram_48183340:
  iVar2 = FUN_ram_4817b524(param_1 + 0x20,&local_40,0x100);
  if (iVar2 == 0) {
    FUN_ram_48183198(param_1,param_4,param_5,uVar1);
  }
  return;
}


