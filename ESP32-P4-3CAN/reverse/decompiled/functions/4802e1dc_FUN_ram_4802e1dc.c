/* Firmware entry: 0x4802e1dc */

uint FUN_ram_4802e1dc(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
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
  uStack_4c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_48 = 8;
  uStack_34 = 0x10000;
  uStack_24 = 0x100;
  uVar1 = 0;
  while( true ) {
    if (DAT_ram_4ff6def4 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return uVar1;
    }
    iVar2 = FUN_ram_4ff3b4aa(DAT_ram_4ff6def4,&uStack_4c,0);
    if (iVar2 != 1) break;
    uVar1 = uVar1 + 1 & 0xffff;
    FUN_ram_4802d512(&uStack_4c,uStack_24 & 0xff,uStack_24._1_1_,uStack_28,uStack_24._2_1_,
                     uStack_24._3_1_);
    if (param_1 == uVar1) {
      return uVar1;
    }
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return uVar1;
}


