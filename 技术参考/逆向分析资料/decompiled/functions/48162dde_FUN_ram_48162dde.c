/* Firmware entry: 0x48162dde */

void FUN_ram_48162dde(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_5c [4];
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *param_1;
  iStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  puStack_34 = (undefined4 *)0x0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  iStack_20 = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_4c = 9;
  if ((uVar1 & 8) == 0) {
    uStack_24 = 0x1600;
    iStack_48 = (uint)(ushort)param_1[0x2e] << 0x10;
  }
  else {
    puStack_34 = auStack_5c;
    uStack_30 = 0x10;
    uStack_24 = 0x1c50;
  }
  uStack_1c = param_1[0x10];
  if (uStack_1c == 0) {
    uStack_1c = 1000;
  }
  iVar2 = (*(code *)param_1[0xc])(param_1[1],&uStack_4c);
  if ((iVar2 == 0) && (iStack_20 == 0)) {
    puVar3 = &uStack_44;
    if ((uVar1 & 8) == 0) {
      uVar1 = param_1[0x31];
    }
    else {
      FUN_ram_4815f2c8(auStack_5c,0x10);
      uVar1 = param_1[0x31];
      puVar3 = auStack_5c;
    }
    if ((uVar1 & 4) == 0) {
      FUN_ram_481623a0(puVar3,param_2);
      return;
    }
    FUN_ram_48160d9c(&uStack_44);
  }
  return;
}


