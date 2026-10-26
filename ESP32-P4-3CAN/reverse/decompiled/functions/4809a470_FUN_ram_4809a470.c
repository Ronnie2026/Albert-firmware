/* Firmware entry: 0x4809a470 */

void FUN_ram_4809a470(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,
                     undefined4 param_6,undefined1 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
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
  if (param_4 != 0) {
    iVar1 = FUN_ram_4ff21a0a();
    if ((*(char *)((int)param_2 + 0xe) == '\0') && (param_2[4] == 0)) {
      FUN_ram_4ff3ec14();
      *(undefined4 *)(param_3 + param_5 * 0x40 + 0x2f30) = 0;
    }
    else {
      uVar3 = iVar1 - param_2[4];
      FUN_ram_4ff3ec14(param_3 + 0x874,0xffffffff);
      iVar1 = param_3 + param_5 * 0x40;
      *(uint *)(iVar1 + 0x2f30) = uVar3;
      if (*(uint *)(iVar1 + 0x2f34) < uVar3) {
        *(uint *)(iVar1 + 0x2f34) = uVar3;
      }
      if (1000 < uVar3) {
        iVar1 = param_3 + param_5 * 0x40;
        *(int *)(iVar1 + 0x2f38) = *(int *)(iVar1 + 0x2f38) + 1;
        FUN_ram_48099146(param_3,2,param_2,uVar3,*(undefined4 *)(param_3 + 0x2fd4));
      }
    }
    uVar2 = FUN_ram_4ff3c5de();
    iVar1 = param_3 + param_5 * 0x40;
    *(undefined4 *)(iVar1 + 0x2f3c) = uVar2;
    *(int *)(iVar1 + 0x2f18) = *(int *)(iVar1 + 0x2f18) + 1;
    *(undefined4 *)(iVar1 + 0x2f40) = 0x103;
    FUN_ram_4ff3ee10(param_3 + 0x874);
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 6;
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
    FUN_ram_48094000(param_1,&uStack_64,param_6);
  }
  return;
}


