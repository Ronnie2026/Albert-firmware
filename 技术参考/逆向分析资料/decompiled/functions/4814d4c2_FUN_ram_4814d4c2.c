/* Firmware entry: 0x4814d4c2 */

undefined4 FUN_ram_4814d4c2(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 auStack_22 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_4813ad9a(0,0x5ec,0x280);
  if (iVar5 == 0) {
    FUN_ram_4813ac74(param_3);
    uVar7 = 0xffffffff;
  }
  else {
    *(undefined2 *)(iVar5 + 10) = 0;
    *(undefined2 *)(iVar5 + 8) = *(undefined2 *)(param_3 + 10);
    thunk_FUN_ram_4ff3c5d4();
    iVar6 = FUN_ram_4814d1e6(param_2,iVar5,0x7e,0,0);
    sVar1 = *(short *)(param_3 + 10);
    auStack_22[0] = 0xffff;
    puVar2 = *(undefined1 **)(param_3 + 4);
    if (sVar1 != 0) {
      puVar3 = puVar2;
      do {
        puVar4 = puVar3 + 1;
        if (iVar6 == 0) {
          iVar6 = FUN_ram_4814d1e6(param_2,iVar5,*puVar3,1,auStack_22);
        }
        puVar3 = puVar4;
      } while (puVar2 + (ushort)(sVar1 - 1) + 1 != puVar4);
    }
    uVar7 = FUN_ram_4814d2c2(param_2,iVar6,iVar5,auStack_22);
    FUN_ram_4813ac74(param_3);
  }
  return uVar7;
}


