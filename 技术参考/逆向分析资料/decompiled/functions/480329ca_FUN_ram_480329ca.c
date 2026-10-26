/* Firmware entry: 0x480329ca */

void FUN_ram_480329ca(void)

{
  short sVar1;
  int iVar2;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6df2c == (int *)0x0) {
LAB_ram_48032ad8:
    do {
      uStack_54 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      iStack_44 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      iStack_30 = 0;
      uStack_3c = 0x10000;
      uStack_2c = 0x100;
      uStack_50 = 8;
      sVar1 = 0;
      do {
        if (DAT_ram_4ff6def4 == 0) {
LAB_ram_48032b3a:
          if (sVar1 == 0) {
            return;
          }
          break;
        }
        iVar2 = FUN_ram_4ff3b4aa(DAT_ram_4ff6def4,&uStack_54,0);
        if (iVar2 != 1) goto LAB_ram_48032b3a;
        sVar1 = sVar1 + 1;
        FUN_ram_4802d512(&uStack_54,uStack_2c & 0xff,uStack_2c._1_1_,iStack_30,uStack_2c._2_1_,
                         uStack_2c._3_1_);
      } while (sVar1 != -1);
    } while( true );
  }
  uStack_78 = DAT_ram_48222d48;
  uStack_74 = DAT_ram_48222d4c;
  uStack_70 = DAT_ram_48222d50;
  uStack_6c = DAT_ram_48222d54;
  iStack_68 = DAT_ram_48222d58;
  uStack_64 = DAT_ram_48222d5c;
  uStack_60 = DAT_ram_48222d60;
  uStack_5c = DAT_ram_48222d64;
  uStack_58 = DAT_ram_48222d68;
LAB_ram_48032a1c:
  sVar1 = 0;
LAB_ram_48032a70:
  iVar2 = (**(code **)(*DAT_ram_4ff6df2c + 0x124))(DAT_ram_4ff6df2c,&uStack_78);
  if (iVar2 != 0) goto LAB_ram_48032a20;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  iStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_50 = 8;
  uStack_3c = 0x10000;
  while( true ) {
    iVar2 = (**(code **)(*DAT_ram_4ff6df2c + 0xec))(DAT_ram_4ff6df2c,&uStack_54);
    if (iVar2 == 0) break;
    sVar1 = sVar1 + 1;
    FUN_ram_4802dc4a(&uStack_54);
    if (sVar1 == 0x80) {
      FUN_ram_4802e1dc(0x200);
      sVar1 = 0;
    }
  }
  goto LAB_ram_48032ad8;
LAB_ram_48032a20:
  sVar1 = sVar1 + 1;
  iStack_44 = iStack_68;
  iStack_30 = iStack_68;
  uStack_2c = (uint)CONCAT12(iStack_68 != 0 | uStack_6c._2_1_,0x100);
  uStack_54 = uStack_78;
  uStack_50 = uStack_74;
  uStack_4c = uStack_70;
  uStack_48 = uStack_6c;
  uStack_40 = uStack_64;
  uStack_3c = uStack_60;
  uStack_38 = uStack_5c;
  uStack_34 = uStack_58;
  FUN_ram_4802db7a(&uStack_54);
  if (sVar1 == 0x80) goto LAB_ram_48032b56;
  goto LAB_ram_48032a70;
LAB_ram_48032b56:
  FUN_ram_4802e1dc(0x200);
  goto LAB_ram_48032a1c;
}


