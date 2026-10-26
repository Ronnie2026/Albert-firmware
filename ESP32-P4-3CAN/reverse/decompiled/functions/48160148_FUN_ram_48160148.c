/* Firmware entry: 0x48160148 */

int FUN_ram_48160148(int param_1)

{
  int iVar1;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 20000) {
    *(int *)(param_1 + 0xbc) = iVar1;
  }
  else if (iVar1 < 40000) {
    *(undefined4 *)(param_1 + 0xbc) = 20000;
  }
  else {
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_24 = 0x1c00;
    uStack_48 = 0x88002602;
    uStack_4c = 0x34;
    iVar1 = FUN_ram_4816272a(param_1,&uStack_4c);
    if (iVar1 != 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar1;
    }
    if ((uStack_44 & 3) != 3) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x106;
    }
    *(undefined4 *)(param_1 + 0xbc) = 40000;
  }
  return 0;
}


