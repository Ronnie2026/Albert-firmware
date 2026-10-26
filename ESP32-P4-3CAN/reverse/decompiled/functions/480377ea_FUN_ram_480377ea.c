/* Firmware entry: 0x480377ea */

int FUN_ram_480377ea(undefined4 param_1,uint param_2,uint *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *local_50 [2];
  int iStack_48;
  byte bStack_41;
  undefined1 auStack_40 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(auStack_40,param_1);
  iVar9 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
  if (*(int *)(iVar9 + 0x1cc4) == 0) {
    FUN_ram_4802a59e(auStack_40);
    return 0;
  }
  puVar2 = (undefined4 *)(DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4);
  uVar10 = 0;
  while( true ) {
    uVar10 = uVar10 + 1;
    iVar3 = FUN_ram_4802b18e(auStack_40,*puVar2);
    if (iVar3 != 0) break;
    puVar2 = puVar2 + 2;
    if (*(uint *)(iVar9 + 0x1cc4) <= uVar10) {
      FUN_ram_4802a59e(auStack_40);
      return 0;
    }
  }
  FUN_ram_4802a59e(auStack_40);
  FUN_ram_4802a8a8(auStack_40,param_1);
  iVar4 = FUN_ram_4802b18e(auStack_40,"plain");
  iVar1 = DAT_ram_4ff5cbe8;
  iVar9 = DAT_ram_4ff5cbdc;
  if ((iVar4 == 0) ||
     (iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40, *(char *)(iVar4 + 0xcc2) == '\0')) {
    iVar4 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
    if (*(int *)(iVar4 + 0x1cc4) != 0) {
      puVar2 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + 0xcc4 + DAT_ram_4ff5cbe8);
      uVar10 = 0;
      do {
        iVar5 = FUN_ram_4802b18e(auStack_40,*puVar2);
        if (iVar5 != 0) {
          FUN_ram_4802a8a8(local_50,*(undefined4 *)(iVar1 + (iVar9 * 0x3a8 + uVar10) * 8 + 0xcc8));
          goto LAB_ram_4803794a;
        }
        uVar10 = uVar10 + 1;
        puVar2 = puVar2 + 2;
      } while (uVar10 < *(uint *)(iVar4 + 0x1cc4));
    }
    FUN_ram_4802a8a8(local_50,&DAT_ram_481df390);
LAB_ram_4803794a:
    FUN_ram_4802a59e(auStack_40);
  }
  else {
    puVar6 = *(undefined1 **)(iVar4 + 0x43c);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_ram_481df390;
    }
    FUN_ram_4802a888(local_50,puVar6,*(undefined4 *)(iVar4 + 0x438));
    FUN_ram_4802a59e(auStack_40);
  }
  if ((char)bStack_41 < '\0') {
    local_50[0] = (byte *)local_50;
    if ((bStack_41 & 0x7f) != 0) goto LAB_ram_48037960;
  }
  else if ((local_50[0] != (byte *)0x0) && (iStack_48 != 0)) {
LAB_ram_48037960:
    uVar10 = (uint)*local_50[0];
    if (uVar10 == 0) {
      *param_3 = 0;
      goto LAB_ram_480378c8;
    }
    uVar7 = 0;
    do {
      uVar8 = uVar10 - 0x30;
      local_50[0] = local_50[0] + 1;
      if (((9 < (uVar8 & 0xff)) || (param_2 < uVar8)) || ((param_2 - uVar8) / 10 < uVar7))
      goto LAB_ram_480378c6;
      uVar10 = (uint)*local_50[0];
      uVar7 = uVar8 + uVar7 * 10;
    } while (uVar10 != 0);
    if (uVar7 <= param_2) {
      *param_3 = uVar7;
      goto LAB_ram_480378c8;
    }
  }
LAB_ram_480378c6:
  iVar3 = 0;
LAB_ram_480378c8:
  FUN_ram_4802a59e(local_50);
  return iVar3;
}


