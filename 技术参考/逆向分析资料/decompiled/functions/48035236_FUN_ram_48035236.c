/* Firmware entry: 0x48035236 */

void FUN_ram_48035236(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dea8 == 0) || (iVar3 = FUN_ram_4ff3b5f0(DAT_ram_4ff6dea8,0), iVar3 != 1)) {
    return;
  }
  if (DAT_ram_4ff6dea2 == '\0') {
    fence();
    if (DAT_ram_4ff6de9c != '\0') goto LAB_ram_48035444;
    FUN_ram_4ff3ec14(&DAT_ram_4ff47ebc,0xffffffff);
    fence();
    fence();
    if ((DAT_ram_4ff6df04 == '\0') ||
       (iVar3 = FUN_ram_48025ba6(), (uint)(iVar3 - DAT_ram_4ff6df10) < DAT_ram_4ff48b5c)) {
      FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
      fence();
      if (DAT_ram_4ff6de3c != '\0') {
        fence();
        fence();
        if (DAT_ram_4ff6df04 == '\0') goto LAB_ram_48035500;
      }
    }
    else {
      FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
LAB_ram_48035500:
      DAT_ram_4ff6dea2 = '\x01';
      fence();
      DAT_ram_4ff6dea4 = 0;
      DAT_ram_4ff6dea1 = '\0';
      fence();
      DAT_ram_4ff6dea0 = 1;
    }
    if (DAT_ram_4ff6dea2 != '\0') goto LAB_ram_48035268;
  }
  else {
LAB_ram_48035268:
    if (DAT_ram_4ff6dea1 == '\0') goto LAB_ram_48035444;
  }
  if (DAT_ram_4ff6df2c == (int *)0x0) {
    sVar2 = 0;
    sVar1 = 0;
  }
  else {
    uStack_88 = DAT_ram_48222d48;
    uStack_84 = DAT_ram_48222d4c;
    uStack_80 = DAT_ram_48222d50;
    uStack_7c = DAT_ram_48222d54;
    iStack_78 = DAT_ram_48222d58;
    uStack_74 = DAT_ram_48222d5c;
    uStack_70 = DAT_ram_48222d60;
    uStack_6c = DAT_ram_48222d64;
    uStack_68 = DAT_ram_48222d68;
    sVar1 = 0;
    do {
      iVar3 = (**(code **)(*DAT_ram_4ff6df2c + 0x124))(DAT_ram_4ff6df2c,&uStack_88);
      if (iVar3 == 0) break;
      iStack_54 = iStack_78;
      iStack_40 = iStack_78;
      uStack_3c = (uint)CONCAT12(iStack_78 != 0 | uStack_7c._2_1_,0x100);
      uStack_64 = uStack_88;
      uStack_60 = uStack_84;
      uStack_5c = uStack_80;
      uStack_58 = uStack_7c;
      uStack_50 = uStack_74;
      uStack_4c = uStack_70;
      uStack_48 = uStack_6c;
      uStack_44 = uStack_68;
      iVar3 = FUN_ram_4802db7a(&uStack_64);
      if (iVar3 == 0) {
        DAT_ram_4ff6de98 = DAT_ram_4ff6de98 + 1;
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 != 0x100);
    uStack_64 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    iStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_60 = 8;
    uStack_4c = 0x10000;
    sVar2 = 0;
    do {
      iVar3 = (**(code **)(*DAT_ram_4ff6df2c + 0xec))(DAT_ram_4ff6df2c,&uStack_64);
      if (iVar3 == 0) break;
      iVar3 = FUN_ram_4802dc4a(&uStack_64);
      if (iVar3 == 0) {
        DAT_ram_4ff6de98 = DAT_ram_4ff6de98 + 1;
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 != 0x40);
  }
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = 0;
  uStack_60 = 8;
  uStack_4c = 0x10000;
  uStack_3c = 0x100;
  sVar4 = 0;
  do {
    if (DAT_ram_4ff6def4 == 0) break;
    iVar3 = FUN_ram_4ff3b4aa(DAT_ram_4ff6def4,&uStack_64,0);
    if (iVar3 != 1) break;
    sVar4 = sVar4 + 1;
    FUN_ram_4802d512(&uStack_64,uStack_3c & 0xff,uStack_3c._1_1_,iStack_40,uStack_3c._2_1_,
                     uStack_3c._3_1_);
  } while (sVar4 != 0x200);
  if ((((DAT_ram_4ff6dea2 != '\0') && (sVar1 != 0x100)) && (sVar2 != 0x40)) && (sVar4 != 0x200)) {
    FUN_ram_4802ce0c(2);
    DAT_ram_4ff6dea2 = '\0';
    fence();
    DAT_ram_4ff6de9c = '\x01';
  }
LAB_ram_48035444:
  FUN_ram_4ff3afa2(DAT_ram_4ff6dea8,0,0,0);
  return;
}


