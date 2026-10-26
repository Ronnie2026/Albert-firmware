/* Firmware entry: 0x48162756 */

int FUN_ram_48162756(uint *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = param_1[0x10];
  iStack_48 = (uint)(ushort)param_1[0x2e] << 0x10;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  iStack_20 = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_24 = 0x1c00;
  uStack_4c = 0x37;
  if (uStack_1c == 0) {
    uStack_1c = 1000;
  }
  iVar1 = (*(code *)param_1[0xc])(param_1[1],&uStack_4c);
  if (iVar1 != 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return iVar1;
  }
  if (iStack_20 != 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return iStack_20;
  }
  if ((uStack_44 & 0x20) == 0 && (*param_1 & 8) == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"sdmmc_cmd","W (%lu) %s: card doesn\'t support APP_CMD\n",uVar2,"sdmmc_cmd");
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0x106;
  }
  uVar3 = param_1[0x10];
  if (uVar3 == 0) {
    if (*(int *)(param_2 + 0x30) != 0) goto LAB_ram_481627ba;
    uVar3 = 1000;
  }
  *(uint *)(param_2 + 0x30) = uVar3;
LAB_ram_481627ba:
  iVar1 = (*(code *)param_1[0xc])(param_1[1],param_2);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x2c);
  }
  return iVar1;
}


