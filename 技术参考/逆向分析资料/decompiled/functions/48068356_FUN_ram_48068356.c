/* Firmware entry: 0x48068356 */

void FUN_ram_48068356(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int aiStack_40 [4];
  int iStack_30;
  undefined1 *puStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4802a8a8(aiStack_40,"Cache-Control");
  FUN_ram_4802a8a8(&iStack_30,"no-store");
  FUN_ram_480667a8(DAT_ram_4ff5cbdc,DAT_ram_4ff5cbe8,aiStack_40,&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802a59e(aiStack_40);
  iVar5 = DAT_ram_4ff5cbe8;
  iVar2 = DAT_ram_4ff5cbdc;
  if (param_3 != (undefined4 *)0x0) {
    puVar3 = param_3 + 0x10;
    puVar7 = (undefined4 *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x1d00);
    do {
      uVar10 = param_3[1];
      uVar9 = param_3[2];
      uVar6 = param_3[3];
      *puVar7 = *param_3;
      puVar7[1] = uVar10;
      puVar7[2] = uVar9;
      puVar7[3] = uVar6;
      param_3 = param_3 + 4;
      puVar7 = puVar7 + 4;
    } while (param_3 != puVar3);
    iVar5 = iVar5 + iVar2 * 0x1d40;
    *(undefined1 *)(iVar5 + 0x1cf4) = 1;
    uVar11 = FUN_ram_4ff21a0a();
    *(int *)(iVar5 + 0x1d38) = (int)uVar11;
    *(undefined1 *)(iVar5 + 0x1d09) = 1;
    *(undefined1 *)(iVar5 + 0x1d26) = 1;
    *(int *)(iVar5 + 0x1d3c) = (int)((ulonglong)uVar11 >> 0x20);
  }
  iVar5 = DAT_ram_4ff5cbe8;
  iVar2 = DAT_ram_4ff5cbdc;
  uStack_48 = 200;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    uStack_44 = param_1;
    aiStack_40[0] = param_2;
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_48,&uStack_44,aiStack_40);
      DAT_ram_4ff5cbc8 = '\0';
    }
    iVar4 = aiStack_40[0];
    if (aiStack_40[0] == 0) {
      iVar4 = 1;
    }
    iVar4 = FUN_ram_4ff206d8(iVar4,0x404);
    iVar8 = iVar5 + iVar2 * 0x1d40;
    *(int *)(iVar8 + 0x1cdc) = iVar4;
    if (iVar4 == 0) {
      if (*(char *)(iVar8 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar5 + iVar2 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (aiStack_40[0] != 0) {
        FUN_ram_4ff45158(iVar4,uStack_44,aiStack_40[0]);
        iVar4 = *(int *)(iVar8 + 0x1cdc);
      }
      iStack_30 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iStack_30 + 0x44c) != '\0') && (*(char *)(iStack_30 + 0x44c) != '\x06')) {
        *(int *)(iStack_30 + 0x1ce0) = iVar4;
        *(int *)(iStack_30 + 0x1ce4) = aiStack_40[0];
        *(undefined4 *)(iStack_30 + 0x1ce8) = 0;
        puStack_2c = &LAB_ram_4802d3f2;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_48,"application/json",iStack_30,&LAB_ram_4802d3f2)
        ;
      }
    }
  }
  return;
}


