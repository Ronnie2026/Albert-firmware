/* Firmware entry: 0x48155f4a */

void FUN_ram_48155f4a(int *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                     int param_5)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  ushort uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = *param_1;
  uVar6 = *(ushort *)(iVar5 + 0xd0);
  uVar3 = (uint)uVar6;
  if (param_5 < (int)(uVar3 - 3)) {
    uVar6 = (ushort)(param_5 + 4U);
    uVar3 = param_5 + 4U & 0xffff;
  }
  else {
    param_5 = uVar3 - 4;
  }
  iVar2 = FUN_ram_4813ad9a(0,uVar3 + 4 & 0xffff,0x280);
  if (iVar2 != 0) {
    if (*(short *)(iVar2 + 8) == *(short *)(iVar2 + 10)) {
      puVar4 = *(undefined1 **)(iVar2 + 4);
      if (param_5 != 0) {
        FUN_ram_4ff45158(puVar4 + 8,param_4,param_5);
      }
      *puVar4 = 0xff;
      puVar4[1] = 3;
      puVar4[2] = (char)((ushort)*(undefined2 *)((int)param_1 + 0xe) >> 8);
      uVar1 = *(undefined2 *)((int)param_1 + 0xe);
      puVar4[4] = param_2;
      puVar4[5] = param_3;
      puVar4[3] = (char)uVar1;
      puVar4[7] = (char)uVar6;
      puVar4[6] = (char)(uVar6 >> 8);
      FUN_ram_4814cec2(iVar5,iVar2);
      return;
    }
    FUN_ram_4813ac74();
    return;
  }
  return;
}


