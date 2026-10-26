/* Firmware entry: 0x4800d9a4 */

int FUN_ram_4800d9a4(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_68;
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
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (undefined4 *)0x0) {
    return 0x102;
  }
  if (param_1 == 0) {
    return 0x102;
  }
  if ((param_3 & 8) != 0) {
    iVar1 = FUN_ram_4800d3be();
    return iVar1;
  }
  iVar1 = 0;
  if (param_2[0xb] != 0) {
    iVar1 = FUN_ram_4ff206d8(0x40,0x1000);
    if (iVar1 == 0) {
      iVar3 = 0;
      iVar2 = 0;
      goto LAB_ram_4800dad6;
    }
    FUN_ram_4ff45158(iVar1,param_2[0xb],0x40);
  }
  iVar2 = 0;
  if (param_2[0xc] != 0) {
    iVar2 = FUN_ram_4ff206d8(0x1c,0x1000);
    if (iVar2 == 0) {
      iVar3 = 0;
      goto LAB_ram_4800dad6;
    }
    FUN_ram_4ff45158(iVar2,param_2[0xc],0x1c);
  }
  if (param_2[0xd] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_ram_4ff206d8(0x18,0x1000);
    if (iVar3 == 0) goto LAB_ram_4800dad6;
    FUN_ram_4ff45158(iVar3,param_2[0xd],0x18);
  }
  uStack_64 = param_2[1];
  uStack_5c = param_2[3];
  uStack_58 = param_2[4];
  uStack_60 = param_2[2];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  uStack_48 = param_2[8];
  uStack_44 = param_2[9];
  uStack_40 = param_2[10];
  uStack_68 = *param_2;
  iStack_3c = iVar1;
  iStack_38 = iVar2;
  iStack_34 = iVar3;
  iVar4 = FUN_ram_4ff206d8(0x38,0x1000);
  if (iVar4 != 0) {
    FUN_ram_4ff45158(iVar4,&uStack_68,0x38);
    iVar1 = FUN_ram_4800d3be(param_1,iVar4,param_3,param_4,0);
    if (iVar1 == 0) {
      return 0;
    }
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar4 + 0x30));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar4 + 0x2c));
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar4 + 0x34));
    thunk_FUN_ram_4ff209c6(iVar4);
    return iVar1;
  }
LAB_ram_4800dad6:
  thunk_FUN_ram_4ff209c6(iVar1);
  thunk_FUN_ram_4ff209c6(iVar2);
  thunk_FUN_ram_4ff209c6(iVar3);
  return 0x101;
}


