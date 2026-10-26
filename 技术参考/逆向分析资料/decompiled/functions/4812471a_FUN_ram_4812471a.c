/* Firmware entry: 0x4812471a */

int FUN_ram_4812471a(undefined4 param_1,char param_2,undefined1 param_3,int param_4,
                    undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 auStack_52 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_481246fe();
  if ((uVar1 & 1) == 0) {
    DAT_ram_4ff6e064 = param_2;
    FUN_ram_48124534(&DAT_ram_4ff6c118,1);
    FUN_ram_481246f0(2);
    FUN_ram_481246f0(1);
    if (DAT_ram_4ff6e058 != 0) {
      thunk_FUN_ram_4ff209c6();
      DAT_ram_4ff6e058 = 0;
    }
    DAT_ram_4ff6e05c = 0;
    memset(auStack_52,0,0x22);
    if (param_4 == 0) {
      uStack_4c = DAT_ram_4ff47ef4;
      uStack_48 = param_5;
    }
    else {
      uStack_50 = 1;
      uStack_44 = param_5;
    }
    uStack_5c = param_7;
    uStack_58 = param_8;
    uStack_54 = param_6;
    uStack_53 = param_3;
    iVar2 = thunk_FUN_ram_4800f7f2(&uStack_5c,0);
    if (iVar2 == 0) {
      DAT_ram_4ff6e060 = FUN_ram_48025ba6();
      FUN_ram_481246f0(2);
      FUN_ram_481246e2(1);
      if (DAT_ram_4ff6e064 != '\0') goto LAB_ram_4812480c;
      iVar2 = FUN_ram_4812470a(2,DAT_ram_4ff47ef8);
      if (iVar2 != 0) {
        return (int)DAT_ram_4ff6e05c;
      }
    }
    iVar2 = -2;
  }
  else {
LAB_ram_4812480c:
    iVar2 = -1;
  }
  return iVar2;
}


