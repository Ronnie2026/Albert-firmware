/* Firmware entry: 0x481a4bb6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_481a4bb6(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x16 < param_1 - 1) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_clk_tree","E (%lu) %s: %s(%d): unknown clk src\n",uVar2,"esp_clk_tree",
                     "esp_clk_tree_src_get_freq_hz",0x18);
    return 0x102;
  }
  if (2 < param_2) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_clk_tree","E (%lu) %s: %s(%d): unknown precision\n",uVar2,"esp_clk_tree"
                     ,"esp_clk_tree_src_get_freq_hz",0x19);
    return 0x102;
  }
  if (param_3 == (uint *)0x0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_clk_tree","E (%lu) %s: %s(%d): null pointer\n",uVar2,"esp_clk_tree",
                     "esp_clk_tree_src_get_freq_hz",0x1a);
    return 0x102;
  }
  if (param_1 == 0xd) {
    uVar1 = 480000000;
    goto LAB_ram_481a4c00;
  }
  if (param_1 < 0xe) {
    if (param_1 == 6) {
      uVar1 = (0x1e0 / ((_DAT_ram_500e6028 >> 0x10 & 0xff) + 1)) * 1000000;
      goto LAB_ram_481a4c00;
    }
    if (param_1 < 7) {
      if (param_1 == 3) {
        uVar1 = FUN_ram_4800398c(param_2);
      }
      else if (param_1 < 4) {
        if (param_1 != 1) goto LAB_ram_481a4cae;
        uVar1 = FUN_ram_481316c8();
      }
      else if (param_1 == 4) {
        uVar1 = FUN_ram_48131752();
      }
      else {
        uVar1 = FUN_ram_48131786();
      }
    }
    else {
      if (param_1 == 0xb) {
        uVar1 = 240000000;
        goto LAB_ram_481a4c00;
      }
      if (param_1 != 0xc) {
        if (param_1 != 9) {
          uVar1 = 160000000;
          if (param_1 == 10) goto LAB_ram_481a4c00;
          goto LAB_ram_481a4c54;
        }
        uVar1 = 80000000;
        goto LAB_ram_481a4c00;
      }
      iVar3 = FUN_ram_4ff2cffa();
      iVar4 = FUN_ram_4ff31f12(0x67,0,3,7,0);
      iVar5 = FUN_ram_4ff31f12(0x67,0,2,3,0);
      iVar6 = FUN_ram_4ff20626();
      if (iVar6 == 0) {
        iVar4 = iVar4 + 4;
      }
      uVar1 = (uint)(iVar4 * iVar3) / (iVar5 + 1U);
joined_r0x481a4dce:
      uVar1 = uVar1 * 1000000;
    }
  }
  else if (param_1 == 0x12) {
    iVar4 = FUN_ram_4ff2cffa();
    uVar1 = iVar4 * 1000000;
  }
  else if (param_1 < 0x13) {
    if (param_1 == 0x10) {
      uVar1 = FUN_ram_4800391c(param_2);
    }
    else {
      if (param_1 != 0x11) {
        if (param_1 != 0xe) {
          uVar1 = 200000000;
          goto LAB_ram_481a4c00;
        }
        iVar4 = FUN_ram_4ff2cffa();
        iVar3 = FUN_ram_4ff31f12(99,0,2,7,3);
        iVar5 = FUN_ram_4ff31f12(99,0,2,2,0);
        uVar1 = (uint)((iVar3 + 1) * iVar4) / (iVar5 + 1U);
        goto joined_r0x481a4dce;
      }
      uVar1 = FUN_ram_480039e6(param_2);
    }
  }
  else if (param_1 == 0x14) {
    iVar4 = FUN_ram_4ff2cffa();
    uVar1 = (uint)(iVar4 * 1000000) >> 1;
  }
  else if (param_1 < 0x15) {
    uVar1 = FUN_ram_481317cc();
  }
  else {
    uVar1 = 8000000;
    if (param_1 == 0x15) goto LAB_ram_481a4c00;
    if (param_1 != 0x16) goto LAB_ram_481a4c54;
LAB_ram_481a4cae:
    uVar1 = FUN_ram_48003a2c(param_2);
  }
  if (uVar1 == 0) {
LAB_ram_481a4c54:
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_clk_tree",
                     "E (%lu) %s: %s(%d): freq shouldn\'t be 0, calibration failed\n",uVar2,
                     "esp_clk_tree","esp_clk_tree_src_get_freq_hz",0x5d);
    return 0xffffffff;
  }
LAB_ram_481a4c00:
  *param_3 = uVar1;
  return 0;
}


