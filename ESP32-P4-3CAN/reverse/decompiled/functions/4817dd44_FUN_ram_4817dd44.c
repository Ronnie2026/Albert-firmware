/* Firmware entry: 0x4817dd44 */

/* WARNING: Removing unreachable block (ram,0x4817dfbe) */
/* WARNING: Removing unreachable block (ram,0x4817dfaa) */
/* WARNING: Removing unreachable block (ram,0x4817dfd2) */

undefined4
FUN_ram_4817dd44(int *param_1,undefined1 *param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [48];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((param_1 == (int *)0x0) || (param_2 == (undefined1 *)0x0)) || (param_4 == 0)) ||
     ((param_5 == 0 || (param_6 == 0)))) {
    return 0xffffb080;
  }
  uVar2 = FUN_ram_4ff20626();
  if (uVar2 < 300) {
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"ecdsa_alt",
                     "E (%lu) %s: ECDSA peripheral not supported on this chip revision\n",uVar6,
                     "ecdsa_alt");
    return 0xffffb180;
  }
  iVar3 = *param_1;
  uVar6 = 1;
  if (iVar3 == 1) {
    if (param_3 != 0x20) {
      return 0xffffb080;
    }
    param_3 = 0x18;
    uVar6 = 0;
    iVar3 = FUN_ram_481802e8(param_5,0);
  }
  else {
    if (iVar3 == 3) {
      if (param_3 != 0x20) {
        return 0xffffb080;
      }
    }
    else {
      if (iVar3 != 4) {
        return 0xffffb080;
      }
      if (param_3 != 0x30) {
        return 0xffffb080;
      }
      param_3 = 0x30;
      uVar6 = 2;
    }
    iVar3 = FUN_ram_481802e8(param_5,0);
  }
  local_130 = -0x6a6a6a6b;
  if (0 < iVar3) {
    local_130 = -0x6a6a6a6b;
    iVar3 = FUN_ram_4818023e(param_5,param_1 + 0xd);
    if (((iVar3 < 0) && (iVar3 = FUN_ram_481802e8(param_6,0), 0 < iVar3)) &&
       (iVar3 = FUN_ram_4818023e(param_6,param_1 + 0xd), iVar3 < 0)) {
      local_130 = 0x6a6a6a6a;
    }
  }
  if (local_130 == 0x6a6a6a6a) {
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uVar2 = param_3 - 0x18;
    puVar4 = &uStack_38;
    if (0xf < uVar2) {
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uVar2 = param_3 - 0x28;
      puVar4 = local_28;
    }
    if (7 < uVar2) {
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    puVar5 = param_2 + param_3 + -1;
    puVar4 = &uStack_50;
    do {
      *(undefined1 *)puVar4 = *puVar5;
      bVar1 = param_2 != puVar5;
      puVar5 = puVar5 + -1;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while (bVar1);
    FUN_ram_48180126(param_4,auStack_b0,param_3);
    FUN_ram_48180126(param_4 + 8,auStack_80,param_3);
    FUN_ram_48180126(param_5,auStack_110,param_3);
    FUN_ram_48180126(param_6,auStack_e0,param_3);
    FUN_ram_481322da();
    FUN_ram_48132706(1);
    FUN_ram_481324d8(1);
    FUN_ram_48132780(1);
    FUN_ram_4813244e(1);
    uStack_124 = 1;
    uStack_12c = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_128 = uVar6;
    iVar3 = FUN_ram_4818b2b2(&uStack_12c,&uStack_50,auStack_110,auStack_e0,auStack_b0,auStack_80,
                             param_3);
    FUN_ram_48132706(0);
    FUN_ram_481324d8(0);
    FUN_ram_48132780(0);
    FUN_ram_4813244e(0);
    FUN_ram_48132312();
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 0xffffb200;
}


