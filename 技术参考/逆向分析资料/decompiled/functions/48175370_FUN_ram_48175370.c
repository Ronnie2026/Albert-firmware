/* Firmware entry: 0x48175370 */

int FUN_ram_48175370(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    return -0x4f80;
  }
  iVar1 = FUN_ram_4818023e(param_1 + 0x1a,param_2 + 0x1a);
  if (iVar1 != 0) {
    return -0x4f80;
  }
  iVar1 = FUN_ram_4818023e(param_1 + 0x1c,param_2 + 0x1c);
  if (iVar1 != 0) {
    return -0x4f80;
  }
  iVar1 = FUN_ram_4818023e(param_1 + 0x1e,param_2 + 0x1e);
  if (iVar1 != 0) {
    return -0x4f80;
  }
  FUN_ram_4817fb86(auStack_98);
  FUN_ram_4817fb86(auStack_90);
  FUN_ram_4817fb86(auStack_88);
  uStack_80 = 0;
  FUN_ram_4817fb86(auStack_7c);
  FUN_ram_4817fb86(auStack_74);
  FUN_ram_4817fb86(auStack_6c);
  FUN_ram_4817fb86(auStack_64);
  FUN_ram_4817fb86(auStack_5c);
  FUN_ram_4817fb86(auStack_54);
  FUN_ram_4817fb86(auStack_4c);
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_ram_48176468(&uStack_80,*param_2);
  if (param_3 != 0) {
    iVar1 = FUN_ram_4817dcd8(&uStack_80,auStack_98,param_2 + 0x18,param_2 + 7,param_3,param_4,0);
    if (iVar1 != 0) goto LAB_ram_48175442;
    iVar1 = FUN_ram_4818023e(auStack_98,param_2 + 0x1a);
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4818023e(auStack_90,param_2 + 0x1c), iVar1 == 0)) {
      iVar2 = FUN_ram_4818023e(auStack_88,param_2 + 0x1e);
      iVar1 = 0;
      if (iVar2 == 0) goto LAB_ram_48175442;
    }
  }
  iVar1 = -0x4f80;
LAB_ram_48175442:
  FUN_ram_4817fb90(auStack_98);
  FUN_ram_4817fb90(auStack_90);
  FUN_ram_4817fb90(auStack_88);
  FUN_ram_48174022(&uStack_80);
  return iVar1;
}


