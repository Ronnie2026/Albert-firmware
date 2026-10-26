/* Firmware entry: 0x48161344 */

int FUN_ram_48161344(undefined4 param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_3 - 1U) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0x102;
  }
  if (0xf < param_4) {
    return 0x102;
  }
  if (1 < param_2) {
    return 0x102;
  }
  uVar3 = (param_3 - 1U) * 4;
  uStack_58 = param_4 << (uVar3 & 0x1f) | param_2 << 0x1f | 0xf << (uVar3 & 0x1f) ^ 0xffffffU;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_34 = 0x1c50;
  uStack_5c = 6;
  uStack_40 = 0x40;
  uStack_3c = 0x40;
  uStack_38 = 0x40;
  iStack_44 = param_5;
  iVar1 = FUN_ram_4816272a(param_1,&uStack_5c);
  if (iVar1 == 0) {
    FUN_ram_4815f2c8(param_5,0x40);
    if (*(char *)(param_5 + 0x2e) != '\0') {
      if (*(char *)(param_5 + 0x2e) != '\x01') {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x108;
      }
      uVar3 = (param_3 + 0x10) * 0x10;
      if ((1 << (param_4 & 0x1f) & *(uint *)(param_5 + ((int)uVar3 >> 5) * 4) >> (uVar3 & 0x1f)) !=
          0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x103;
      }
    }
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: %s: sdmmc_send_cmd returned 0x%x\n",uVar2,"sdmmc_sd",
                   "sdmmc_send_cmd_switch_func",iVar1);
  return iVar1;
}


