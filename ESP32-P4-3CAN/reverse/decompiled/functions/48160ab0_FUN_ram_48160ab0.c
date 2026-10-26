/* Firmware entry: 0x48160ab0 */

int FUN_ram_48160ab0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uStack_4c;
  uint uStack_48;
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
  if (*(byte *)(param_1 + 0xb5) == 0) {
LAB_ram_48160ac0:
    uVar4 = *(uint *)(param_1 + 0xc4);
    uVar3 = uVar4 & 0xc0;
    if (uVar3 == 0) {
      return 0;
    }
    if (uVar3 == 0x80) {
      if ((uVar4 & 0x100) == 0) {
        uStack_48 = 0x3b70101;
        uVar5 = 4;
      }
      else {
        uStack_48 = 0x3b70501;
        uVar5 = 4;
      }
    }
    else {
      uStack_48 = 0x3b70001;
      uVar5 = 1;
      if (uVar3 == 0xc0) {
        if ((uVar4 & 0x100) == 0) {
          uStack_48 = 0x3b70201;
          uVar5 = 8;
        }
        else {
          uStack_48 = 0x3b70601;
          uVar5 = 8;
        }
      }
    }
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
    uStack_24 = 0x3d00;
    uStack_4c = 6;
    iVar1 = FUN_ram_4816272a(param_1,&uStack_4c);
    if (iVar1 == 0) {
      if ((uStack_44 & 0x80) == 0) {
        return 0;
      }
      iVar1 = 0x108;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_mmc","E (%lu) %s: %s: can\'t change bus width (%d bit), 0x%x\n",uVar2,
                     "sdmmc_mmc","sdmmc_init_mmc_bus_width",uVar5,iVar1);
  }
  else {
    uStack_48 = (uint)*(byte *)(param_1 + 0xb5) << 8 | 0x3bb0001;
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
    uStack_24 = 0x3d00;
    uStack_4c = 6;
    iVar1 = FUN_ram_4816272a(param_1,&uStack_4c);
    if (iVar1 == 0) {
      if ((uStack_44 & 0x80) == 0) goto LAB_ram_48160ac0;
      iVar1 = 0x108;
    }
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_mmc","E (%lu) %s: %s: can\'t change power class (%d bit), 0x%x\n",
                     uVar5,"sdmmc_mmc","sdmmc_init_mmc_bus_width",*(undefined1 *)(param_1 + 0xb5),
                     iVar1);
  }
  return iVar1;
}


