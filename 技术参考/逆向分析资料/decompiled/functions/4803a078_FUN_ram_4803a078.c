/* Firmware entry: 0x4803a078 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_4803a078(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  byte *******pppppppbVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_50 [16];
  byte *******local_40 [3];
  char cStack_31;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(local_40,"stableSpeedDownIntervalMs");
  iVar9 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar9 + 0x1cc4) != 0) {
    puVar1 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      iVar3 = FUN_ram_4802b18e(local_40,*puVar1);
      if (iVar3 != 0) {
        FUN_ram_4802a59e(local_40);
        FUN_ram_4802a8a8(auStack_50,"stableSpeedDownIntervalMs");
        iVar4 = FUN_ram_4802b18e(auStack_50,"plain");
        iVar3 = DAT_ram_4ff5cbe8;
        iVar9 = DAT_ram_4ff5cbdc;
        if ((iVar4 == 0) ||
           (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0'))
        {
          iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
          if (*(int *)(iVar4 + 0x1cc4) == 0) goto LAB_ram_4803a3b4;
          puVar1 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
          uVar2 = 0;
          goto LAB_ram_4803a1b4;
        }
        puVar6 = *(undefined1 **)(iVar4 + 0x43c);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(local_40,puVar6,*(undefined4 *)(iVar4 + 0x438));
        goto joined_r0x4803a1e6;
      }
      puVar1 = puVar1 + 2;
    } while (uVar2 < *(uint *)(iVar9 + 0x1cc4));
  }
  FUN_ram_4802a59e(local_40);
LAB_ram_4803a22e:
  FUN_ram_4802a8a8(local_40,"speedDownStepKph");
  iVar9 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar9 + 0x1cc4) != 0) {
    puVar1 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      iVar3 = FUN_ram_4802b18e(local_40,*puVar1);
      if (iVar3 != 0) {
        FUN_ram_4802a59e(local_40);
        FUN_ram_4802a8a8(auStack_50,"speedDownStepKph");
        iVar4 = FUN_ram_4802b18e(auStack_50,"plain");
        iVar3 = DAT_ram_4ff5cbe8;
        iVar9 = DAT_ram_4ff5cbdc;
        if ((iVar4 == 0) ||
           (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0'))
        {
          iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
          if (*(int *)(iVar4 + 0x1cc4) == 0) goto LAB_ram_4803a3e8;
          puVar1 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
          uVar2 = 0;
          goto LAB_ram_4803a302;
        }
        puVar6 = *(undefined1 **)(iVar4 + 0x43c);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_ram_481df390;
        }
        FUN_ram_4802a888(local_40,puVar6,*(undefined4 *)(iVar4 + 0x438));
        goto joined_r0x4803a3a2;
      }
      puVar1 = puVar1 + 2;
    } while (uVar2 < *(uint *)(iVar9 + 0x1cc4));
  }
  FUN_ram_4802a59e(local_40);
  return 1;
  while( true ) {
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 2;
    if (*(uint *)(iVar4 + 0x1cc4) <= uVar2) break;
LAB_ram_4803a1b4:
    iVar5 = FUN_ram_4802b18e(auStack_50,*puVar1);
    if (iVar5 != 0) {
      FUN_ram_4802a8a8(local_40,*(undefined4 *)(iVar3 + (iVar9 * 0x3a8 + uVar2) * 8 + 0xcc8));
      goto joined_r0x4803a1e6;
    }
  }
LAB_ram_4803a3b4:
  FUN_ram_4802a8a8(local_40,&DAT_ram_481df390);
joined_r0x4803a1e6:
  if (cStack_31 < '\0') {
    uVar2 = (uint)local_40[0] & 0xff;
    pppppppbVar7 = (byte *******)local_40;
  }
  else {
    if (local_40[0] == (byte *******)0x0) goto LAB_ram_4803a148;
    uVar2 = (uint)*(byte *)local_40[0];
    pppppppbVar7 = local_40[0];
  }
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      pppppppbVar7 = (byte *******)((int)pppppppbVar7 + 1);
      uVar8 = (uVar2 - 0x30) + uVar8 * 10;
      if ((9 < (uVar2 - 0x30 & 0xff)) || (10000 < uVar8)) goto LAB_ram_4803a148;
      uVar2 = (uint)*(byte *)pppppppbVar7;
    } while (uVar2 != 0);
    if ((99 < uVar8) && (uVar8 == 500)) {
      FUN_ram_4802a59e(local_40);
      FUN_ram_4802a59e(auStack_50);
      goto LAB_ram_4803a22e;
    }
  }
LAB_ram_4803a148:
  FUN_ram_4802a59e(local_40);
  FUN_ram_4802a59e(auStack_50);
  FUN_ram_4802ad46(param_1,"stableSpeedDownIntervalMs");
  return 0;
  while( true ) {
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 2;
    if (*(uint *)(iVar4 + 0x1cc4) <= uVar2) break;
LAB_ram_4803a302:
    iVar5 = FUN_ram_4802b18e(auStack_50,*puVar1);
    if (iVar5 != 0) {
      FUN_ram_4802a8a8(local_40,*(undefined4 *)(iVar3 + (iVar9 * 0x3a8 + uVar2) * 8 + 0xcc8));
      goto joined_r0x4803a3a2;
    }
  }
LAB_ram_4803a3e8:
  FUN_ram_4802a8a8(local_40,&DAT_ram_481df390);
joined_r0x4803a3a2:
  if (cStack_31 < '\0') {
    local_40[0] = (byte *******)local_40;
  }
  else if (local_40[0] == (byte *******)0x0) goto LAB_ram_4803a36c;
  uVar2 = (uint)*(byte *)local_40[0];
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      local_40[0] = (byte *******)((int)local_40[0] + 1);
      uVar8 = (uVar2 - 0x30) + uVar8 * 10;
      if ((9 < (uVar2 - 0x30 & 0xff)) || (10 < uVar8)) goto LAB_ram_4803a36c;
      uVar2 = (uint)*(byte *)local_40[0];
    } while (uVar2 != 0);
    if (uVar8 != 0) {
      FUN_ram_4802a59e(local_40);
      FUN_ram_4802a59e(auStack_50);
      return 1;
    }
  }
LAB_ram_4803a36c:
  FUN_ram_4802a59e(local_40);
  FUN_ram_4802a59e(auStack_50);
  FUN_ram_4802ad46(param_1,"speedDownStepKph");
  return 0;
}


