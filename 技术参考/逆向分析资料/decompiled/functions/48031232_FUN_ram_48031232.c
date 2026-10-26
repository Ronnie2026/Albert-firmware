/* Firmware entry: 0x48031232 */

bool FUN_ram_48031232(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  uVar2 = *(uint *)(param_3 + 8);
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  iVar5 = 0;
  puVar4 = &local_30;
  do {
    iVar3 = param_3 + iVar5;
    iVar5 = iVar5 + 1;
    *(undefined1 *)puVar4 = *(undefined1 *)(iVar3 + 0x10);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (iVar5 != 0x20);
  uVar1 = *(uint *)(param_3 + 0x30);
  if (((*(int *)(param_3 + 4) == -0x4f544153) && (*(uint *)(param_3 + 0xc) == ~uVar2)) &&
     (*(uint *)(param_3 + 0x34) == ~uVar1)) {
    uVar2 = FUN_ram_480311a6(uVar2,&local_30);
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return uVar2 == uVar1;
  }
  return false;
}


