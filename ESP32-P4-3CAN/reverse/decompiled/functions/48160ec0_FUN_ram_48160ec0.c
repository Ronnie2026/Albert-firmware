/* Firmware entry: 0x48160ec0 */

int FUN_ram_48160ec0(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff206d8(0x200,8);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_mmc","E (%lu) %s: %s: not enough mem, err=0x%x\n",uVar2,"sdmmc_mmc",
                     "sdmmc_init_mmc_read_ext_csd",0x101);
    return 0x101;
  }
  uVar2 = FUN_ram_480020d8();
  iVar10 = 0x106;
  if ((int)param_1[0x23] < 4) goto LAB_ram_48160ef6;
  iVar10 = FUN_ram_48160e56(param_1,iVar1,0x200,uVar2);
  if (iVar10 != 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"sdmmc_mmc","E (%lu) %s: %s: send_ext_csd_data error 0x%x\n",uVar2,
                     "sdmmc_mmc","sdmmc_init_mmc_read_ext_csd",iVar10);
    goto LAB_ram_48160ef6;
  }
  bVar4 = *(byte *)(iVar1 + 0xc4);
  param_1[0x31] = param_1[0x31] & 0xfffffeff;
  if ((bVar4 & 4) == 0) {
    if ((bVar4 & 2) != 0) {
      uVar9 = param_1[2];
      uVar5 = *param_1;
      uVar3 = 52000000;
      uVar6 = 52000;
      goto LAB_ram_48160f54;
    }
    if ((bVar4 & 1) == 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"sdmmc_mmc","W (%lu) %s: %s: unknown CARD_TYPE 0x%x\n",uVar2,"sdmmc_mmc",
                       "sdmmc_init_mmc_read_ext_csd",bVar4);
      uVar6 = param_1[0x2f];
      uVar9 = param_1[2];
      uVar3 = uVar6 * 1000;
      uVar5 = *param_1;
      goto LAB_ram_48160f54;
    }
    param_1[0x28] = 26000000;
    uVar9 = param_1[2];
    if (26000 < param_1[2]) {
      uVar9 = 26000;
    }
    param_1[0x2f] = uVar9;
    if ((*param_1 & 4) == 0) {
      if ((*param_1 & 2) != 0) goto LAB_ram_481610fe;
      goto LAB_ram_48161030;
    }
LAB_ram_481610d8:
    iVar7 = 0xcb;
LAB_ram_48160f76:
    iVar8 = 3;
    bVar4 = *(byte *)(iVar1 + iVar7) >> 4;
  }
  else {
    uVar5 = *param_1;
    uVar6 = 52000;
    param_1[0x2f] = 52000;
    uVar9 = param_1[2];
    if (((uVar5 & 0x10) == 0) || ((int)uVar9 < 26000)) {
      uVar3 = 52000000;
    }
    else {
      iVar7 = (*(code *)param_1[8])(param_1[1]);
      uVar6 = param_1[0x2f];
      uVar3 = uVar6 * 1000;
      uVar9 = param_1[2];
      uVar5 = *param_1;
      if (iVar7 == 4) {
        param_1[0x31] = param_1[0x31] | 0x100;
      }
    }
LAB_ram_48160f54:
    param_1[0x28] = uVar3;
    if (uVar6 < uVar9) {
      uVar9 = uVar6;
    }
    param_1[0x2f] = uVar9;
    if ((uVar5 & 4) != 0) {
      iVar7 = 0xca;
      if (uVar9 < 0x6591) goto LAB_ram_481610d8;
      goto LAB_ram_48160f76;
    }
    if ((uVar5 & 2) == 0) {
LAB_ram_48161030:
      bVar4 = 0;
      iVar8 = 0;
    }
    else {
      iVar7 = 0xca;
      if (uVar9 < 0x6591) {
LAB_ram_481610fe:
        iVar7 = 0xcb;
      }
      iVar8 = 2;
      bVar4 = *(byte *)(iVar1 + iVar7) & 0xf;
    }
  }
  *(byte *)((int)param_1 + 0xb5) = bVar4;
  param_1[0x31] = param_1[0x31] & 0xffffff3f | iVar8 << 6;
  if (0x400000 < *(uint *)(iVar1 + 0xd4)) {
    param_1[0x24] = *(uint *)(iVar1 + 0xd4);
  }
  *(undefined1 *)((int)param_1 + 0xb6) = *(undefined1 *)(iVar1 + 0xb5);
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(iVar1 + 0xc0);
  *(undefined1 *)((int)param_1 + 0xb7) = *(undefined1 *)(iVar1 + 0xe7);
LAB_ram_48160ef6:
  thunk_FUN_ram_4ff209c6(iVar1);
  return iVar10;
}


