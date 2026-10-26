/* Firmware entry: 0x481511ca */

void FUN_ram_481511ca(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4814f574(*param_1);
  puVar4 = (uint *)*param_1;
  if ((puVar4[0xc] & 0x20) != 0) {
    iVar5 = param_1[2];
    if ((((*(char *)(iVar5 + 0x1c) == '\x06') && (*(int *)(iVar5 + 8) == 0)) &&
        (*(int *)(iVar5 + 0xc) == 0)) && (*(int *)(iVar5 + 0x10) == -0x10000)) {
      *(undefined1 *)(param_1 + 1) = 0xfa;
    }
  }
  if (iVar1 != 0) goto LAB_ram_48151232;
  uVar2 = puVar4[2];
  iVar1 = -0xb;
  if (uVar2 == 0) goto LAB_ram_48151232;
  if ((*puVar4 & 0xf0) != 0x20) {
    if ((*puVar4 & 0xf0) != 0x40) goto LAB_ram_48151232;
    puVar3 = (undefined4 *)param_1[2];
    if (*(char *)(puVar3 + 7) == '\x06') {
      if ((((puVar3[2] == 0) && (puVar3[3] == 0)) && (puVar3[4] == 0)) && (puVar3[5] == 0))
      goto LAB_ram_48151268;
    }
    else if ((puVar3[2] == 0) || (*(char *)(puVar3 + 7) == '.')) {
LAB_ram_48151268:
      iVar1 = FUN_ram_4813bdb6(uVar2,*puVar3);
      goto LAB_ram_48151232;
    }
    iVar1 = FUN_ram_4813bca0(uVar2,*puVar3,puVar3 + 2);
    goto LAB_ram_48151232;
  }
  puVar3 = (undefined4 *)param_1[2];
  if (*(char *)(puVar3 + 7) == '\x06') {
    if (((puVar3[2] == 0) && (puVar3[3] == 0)) && ((puVar3[4] == 0 && (puVar3[5] == 0))))
    goto LAB_ram_481512a8;
  }
  else if ((puVar3[2] == 0) || (*(char *)(puVar3 + 7) == '.')) {
LAB_ram_481512a8:
    iVar1 = FUN_ram_48143322(uVar2,*puVar3);
    goto LAB_ram_48151232;
  }
  iVar1 = FUN_ram_481431f0(uVar2,*puVar3,puVar3 + 2,*(undefined2 *)(puVar3 + 8));
LAB_ram_48151232:
  *(char *)(param_1 + 1) = (char)iVar1;
  FUN_ram_4814e3a4(param_1[9]);
  return;
}


