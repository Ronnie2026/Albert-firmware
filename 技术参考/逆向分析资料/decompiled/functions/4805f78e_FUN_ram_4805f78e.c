/* Firmware entry: 0x4805f78e */

void FUN_ram_4805f78e(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 uVar6;
  char acStack_6c [4];
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ushort uStack_4c;
  char cStack_4a;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = (uint)*(byte *)((int)param_1 + 5);
  acStack_6c[0] = *(char *)(param_1 + 1);
  iStack_48 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  acStack_6c[1] = 0;
  acStack_6c[2] = '\0';
  iStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  cStack_4a = '\x01';
  iVar2 = FUN_ram_480450a0(*param_1,uVar5 - (((uint)((ulonglong)uVar5 * 0xaaaaaaab >> 0x20) & 0xfe)
                                            + uVar5 / 3) & 0xff,param_2,param_3,param_4,&iStack_48,0
                          );
  if (iVar2 == 0) goto LAB_ram_4805f868;
  acStack_6c[2] = *(char *)((int)param_1 + 5);
  if (((char)uStack_24 == acStack_6c[2]) && (iStack_48 != 0 || iStack_44 != 0)) {
    iStack_68 = iStack_40;
    if (iStack_40 == 0) {
      cStack_4a = '\x01';
      uStack_54 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_64 = 0;
      bVar3 = 0;
      uVar1 = 0;
      uVar4 = 0;
      uVar6 = 0;
      acStack_6c[2] = '\0';
      acStack_6c[0] = '\0';
    }
    else {
      if ((short)uStack_3c == -1) goto LAB_ram_4805f81c;
      acStack_6c[0] = *(char *)(param_1 + 1);
      bVar3 = 0x12;
      cStack_4a = '\x04';
      uStack_54 = uStack_28;
      uStack_58 = uStack_30;
      uStack_60 = uStack_34;
      uStack_64 = uStack_38;
      uVar6 = uStack_24._1_1_;
      uVar4 = uStack_24._2_1_;
      if (acStack_6c[0] == '\x01') {
        cStack_4a = '\x04' - *(char *)(param_2 + 0x14);
        uVar1 = 1;
        bVar3 = 1;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  else {
LAB_ram_4805f81c:
    cStack_4a = '\x01';
    bVar3 = 0;
    uVar1 = 0;
    acStack_6c[2] = '\0';
    acStack_6c[0] = '\0';
    uStack_54 = 0;
    iStack_68 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_64 = 0;
    uVar6 = 0;
    uVar4 = 0;
  }
  acStack_6c[1] = 0;
  uStack_5c = 0;
  uStack_50 = (uint)CONCAT12(uVar1,CONCAT11(uVar4,uVar6));
  uStack_4c = (ushort)bVar3;
LAB_ram_4805f868:
  (**(code **)(*param_3 + 0xa8))(param_3,acStack_6c);
  return;
}


