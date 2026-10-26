/* Firmware entry: 0x4809a2c4 */

void FUN_ram_4809a2c4(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,
                     int param_6,int param_7,undefined4 param_8,undefined1 *param_9)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = 0;
  if (param_4 != 0) {
    iVar4 = FUN_ram_4ff21a0a();
  }
  FUN_ram_4ff3ec14(param_3 + 0x874,0xffffffff);
  if (param_7 == 0) {
    if (param_6 == 3) {
      *(int *)(param_3 + 0x2ef0) = *(int *)(param_3 + 0x2ef0) + 1;
    }
    else if (param_6 == 2) {
      *(int *)(param_3 + 0x2ef4) = *(int *)(param_3 + 0x2ef4) + 1;
    }
  }
  else {
    *(int *)(param_3 + 0x2ed8) = *(int *)(param_3 + 0x2ed8) + 1;
  }
  if (param_4 != 0) {
    param_5 = param_5 * 0x40;
    if ((*(char *)((int)param_2 + 0xe) == '\0') && (param_2[4] == 0)) {
      *(undefined4 *)(param_3 + param_5 + 0x2f30) = 0;
    }
    else {
      iVar2 = param_3 + param_5;
      uVar3 = iVar4 - param_2[4];
      *(uint *)(iVar2 + 0x2f30) = uVar3;
      if (*(uint *)(iVar2 + 0x2f34) < uVar3) {
        *(uint *)(iVar2 + 0x2f34) = uVar3;
      }
      if (1000 < uVar3) {
        *(int *)(param_3 + param_5 + 0x2f38) = *(int *)(param_3 + param_5 + 0x2f38) + 1;
        FUN_ram_48099146(param_3,2,param_2,uVar3,*(undefined4 *)(param_3 + 0x2fd4));
      }
    }
    uVar1 = FUN_ram_4ff3c5de();
    param_5 = param_3 + param_5;
    *(undefined4 *)(param_5 + 0x2f3c) = uVar1;
    *(int *)(param_5 + 0x2f0c) = *(int *)(param_5 + 0x2f0c) + 1;
    *(undefined4 *)(param_5 + 0x2f40) = 0x107;
  }
  FUN_ram_4ff3ee10(param_3 + 0x874);
  if (param_9 != (undefined1 *)0x0) {
    *param_9 = 3;
  }
  fence();
  if (*(char *)(param_1 + 0x18c6e) != '\0') {
    uStack_50 = param_2[5];
    uStack_48 = param_2[7];
    uStack_44 = param_2[8];
    uStack_64 = *param_2;
    uStack_60 = param_2[1];
    uStack_5c = param_2[2];
    uStack_58 = param_2[3];
    uStack_54 = param_2[4];
    uStack_4c = param_2[6];
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_40 = 0;
    uStack_3c = FUN_ram_4ff21a0a();
    uVar3 = uStack_38 >> 0x10;
    uStack_38._0_2_ = CONCAT11(1,(undefined1)uStack_38);
    uStack_38 = CONCAT22((short)uVar3,(undefined2)uStack_38) & 0xff00ffff;
    FUN_ram_48094000(param_1,&uStack_64,param_8);
  }
  return;
}


