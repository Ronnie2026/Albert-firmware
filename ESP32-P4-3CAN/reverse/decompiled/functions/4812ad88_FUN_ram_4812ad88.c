/* Firmware entry: 0x4812ad88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4812ad88(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar9 = *param_1;
  uVar8 = param_1[1];
  uVar4 = uVar8 - (uVar9 == 0);
  if ((0x7fffff < uVar4) || ((uVar4 == 0x7fffff && (uVar9 == 0)))) {
    uVar7 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: GPIO_PIN mask error \n",uVar7,
                     &DAT_ram_481d385c);
    return 0x102;
  }
  uVar4 = 0;
LAB_ram_4812ade0:
  do {
    uVar1 = uVar4 - 0x20;
    uVar5 = uVar8 >> (uVar1 & 0x1f);
    if ((int)uVar1 < 0) {
      uVar5 = uVar9 >> (uVar4 & 0x1f) | (uVar8 << 1) << (0x1f - uVar4 & 0x1f);
    }
    if ((uVar5 & 1) != 0) {
      iVar2 = FUN_ram_4812c13a(uVar4);
      if (iVar2 != 0) {
        FUN_ram_4812c3fe(uVar4);
      }
      uVar5 = param_1[2];
      if ((int)uVar1 < 0) {
        uVar1 = -0x1000000 << (0x1f - uVar4 & 0x1f);
      }
      else {
        uVar1 = -0x800000 >> (uVar1 & 0x1f);
      }
      if ((uVar5 & 1) == 0) {
        if ((uVar1 & 1) != 0) {
          uVar3 = FUN_ram_4ff44d14();
          pcVar6 = "gpio_input_disable";
          uVar7 = 0xc9;
          goto LAB_ram_4812afc4;
        }
        iVar2 = uVar4 * 4;
        *(uint *)(iVar2 + 0x500e1004) = *(uint *)(iVar2 + 0x500e1004) & 0xfffffdff;
      }
      else if ((uVar1 & 1) == 0) {
        iVar2 = uVar4 * 4;
        *(uint *)(iVar2 + 0x500e1004) = *(uint *)(iVar2 + 0x500e1004) | 0x200;
      }
      else {
        uVar3 = FUN_ram_4ff44d14();
        pcVar6 = "gpio_input_enable";
        uVar7 = 0xd0;
LAB_ram_4812afc4:
        FUN_ram_4ff44bf0(1,&DAT_ram_481d385c,"E (%lu) %s: %s(%d): %s\n",uVar3,&DAT_ram_481d385c,
                         pcVar6,uVar7,"GPIO number error");
        uVar5 = param_1[2];
        iVar2 = uVar4 << 2;
      }
      if ((uVar5 & 4) == 0) {
        FUN_ram_4812a97a(uVar4);
      }
      else {
        FUN_ram_4812aa02();
      }
      if ((param_1[2] & 2) == 0) {
        FUN_ram_4812a72e(uVar4);
      }
      else {
        FUN_ram_4812a856();
      }
      if (param_1[3] == 0) {
        FUN_ram_4812a146(uVar4);
      }
      else {
        FUN_ram_4812a082();
      }
      if (param_1[4] == 0) {
        FUN_ram_4812a314(uVar4);
      }
      else {
        FUN_ram_4812a250();
      }
      FUN_ram_4812a3d8(uVar4,param_1[5]);
      if (param_1[5] == 0) {
        FUN_ram_4812a618(uVar4);
        uVar1 = param_1[6];
        if (uVar1 == 1) goto LAB_ram_4812aef2;
LAB_ram_4812ae82:
        if (uVar1 == 0) {
          FUN_ram_481a9038(PTR_DAT_ram_4ff47f08_ram_4ff4b978,uVar4,0);
        }
      }
      else {
        FUN_ram_4812a542();
        uVar1 = param_1[6];
        if (uVar1 != 1) goto LAB_ram_4812ae82;
LAB_ram_4812aef2:
        FUN_ram_481a9038(PTR_DAT_ram_4ff47f08_ram_4ff4b978,uVar4,1);
      }
      if (((uVar4 & 0xff) - 0x18 & 0xff) < 2) {
        _DAT_ram_500d2018 = _DAT_ram_500d2018 & 0xffffbfff;
        uVar4 = uVar4 + 1;
        *(uint *)(iVar2 + 0x500e1004) = *(uint *)(iVar2 + 0x500e1004) & 0xffff8fff | 0x1000;
        goto LAB_ram_4812ade0;
      }
      if (((uVar4 & 0xff) - 0x1a & 0xff) < 2) {
        _DAT_ram_50080000 = _DAT_ram_50080000 & 0xfffbffff;
      }
      *(uint *)(iVar2 + 0x500e1004) = *(uint *)(iVar2 + 0x500e1004) & 0xffff8fff | 0x1000;
    }
    uVar4 = uVar4 + 1;
    if (uVar4 == 0x37) {
      return 0;
    }
  } while( true );
}


