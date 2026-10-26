/* Firmware entry: 0x48026e1e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_48026e1e(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iStack_28;
  uint uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = *param_1;
  if (iVar3 != 0) {
    while (iVar3 = FUN_ram_4ff3b5f0(iVar3,0xffffffff), iVar3 != 1) {
      iVar3 = *param_1;
    }
  }
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 == 0) {
    puVar5 = &DAT_ram_500ca000;
LAB_ram_48026e54:
    if (puVar5 == (undefined1 *)0x50121000) {
LAB_ram_48026ec6:
      iVar3 = 0x10;
      uStack_24 = _DAT_ram_5012101c;
      iStack_28 = 0;
      uVar2 = _DAT_ram_5012101c >> 0x13 & 0x1f;
      iVar4 = FUN_ram_4800b9f6(bVar1,&iStack_28);
      goto joined_r0x48026e78;
    }
  }
  else {
    if (bVar1 == 3) {
      puVar5 = &DAT_ram_500cd000;
      goto LAB_ram_48026e54;
    }
    if (3 < bVar1) {
      if (bVar1 == 4) {
        puVar5 = &DAT_ram_500ce000;
        goto LAB_ram_48026e54;
      }
      goto LAB_ram_48026ec6;
    }
    if (bVar1 == 1) {
      puVar5 = &DAT_ram_500cb000;
      goto LAB_ram_48026e54;
    }
    puVar5 = &DAT_ram_500cc000;
  }
  uStack_24 = *(uint *)(puVar5 + 0x1c);
  iVar3 = 0x80;
  iStack_28 = 0;
  uVar2 = uStack_24 >> 0x10 & 0xff;
  iVar4 = FUN_ram_4800b9f6(bVar1,&iStack_28);
joined_r0x48026e78:
  if ((iVar4 == 0) && (iStack_28 != 0)) {
    iVar4 = *param_1;
    iVar3 = iStack_28;
  }
  else {
    iVar4 = *param_1;
    iVar3 = iVar3 - uVar2;
  }
  if (iVar4 == 0) {
    return iVar3;
  }
  FUN_ram_4ff3afa2(iVar4,0,0,0);
  return iVar3;
}


