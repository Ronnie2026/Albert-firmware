/* Firmware entry: 0x4806b5b0 */

void FUN_ram_4806b5b0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_4c;
  undefined4 ***pppuStack_48;
  uint uStack_44;
  undefined4 ***apppuStack_40 [2];
  uint uStack_38;
  byte bStack_31;
  int iStack_30;
  undefined1 *puStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(int *)(param_1 + 4) != 0) && (DAT_ram_4ff5c53c != (int *)0x0)) {
    for (piVar3 = DAT_ram_4ff5c53c; piVar3 != DAT_ram_4ff5c53c + DAT_ram_4ff5c540 * 0x49;
        piVar3 = piVar3 + 0x49) {
      if (*(int *)(param_1 + 4) == *piVar3) {
        FUN_ram_4802a8a8(apppuStack_40,"{\"ok\":false,\"error\":\"position_conflict\"");
        uVar4 = *(undefined4 *)(param_1 + 4);
        FUN_ram_4802f022(apppuStack_40,"conflictId");
        FUN_ram_4802aa44(&iStack_30,uVar4,10);
        FUN_ram_4802ae48(apppuStack_40,&iStack_30);
        FUN_ram_4802a59e(&iStack_30);
        FUN_ram_4802a8ec(&iStack_30,piVar3 + 1);
        goto LAB_ram_4806b63c;
      }
    }
  }
  FUN_ram_4802a8a8(apppuStack_40,"{\"ok\":false,\"error\":\"position_conflict\"");
  uVar4 = *(undefined4 *)(param_1 + 4);
  FUN_ram_4802f022(apppuStack_40,"conflictId");
  FUN_ram_4802aa44(&iStack_30,uVar4,10);
  FUN_ram_4802ae48(apppuStack_40,&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802a8a8(&iStack_30,&DAT_ram_481df390);
LAB_ram_4806b63c:
  FUN_ram_4802f236(apppuStack_40,"conflictName",&iStack_30);
  FUN_ram_4802a59e(&iStack_30);
  FUN_ram_4802af5a(apppuStack_40,0x7d);
  iVar2 = DAT_ram_4ff5cbe8;
  iVar7 = DAT_ram_4ff5cbdc;
  if ((char)bStack_31 < '\0') {
    uStack_38 = bStack_31 & 0x7f;
    apppuStack_40[0] = apppuStack_40;
  }
  else if ((undefined4 ****)apppuStack_40[0] == (undefined4 ****)0x0) {
    uStack_38 = 0;
  }
  uStack_4c = 0x199;
  cVar1 = *(char *)(DAT_ram_4ff5cbdc * 0x1d40 + DAT_ram_4ff5cbe8 + 0x44c);
  pppuStack_48 = apppuStack_40[0];
  uStack_44 = uStack_38;
  if ((cVar1 != '\0') && (cVar1 != '\x06')) {
    if ((DAT_ram_4ff5cbc4 != (code *)0x0) && (DAT_ram_4ff5cbc8 == '\0')) {
      DAT_ram_4ff5cbc8 = 1;
      (*DAT_ram_4ff5cbc4)(&uStack_4c,&pppuStack_48,&uStack_44);
      DAT_ram_4ff5cbc8 = '\0';
    }
    uVar5 = uStack_44;
    if (uStack_44 == 0) {
      uVar5 = 1;
    }
    iVar6 = FUN_ram_4ff206d8(uVar5,0x404);
    iVar8 = iVar2 + iVar7 * 0x1d40;
    *(int *)(iVar8 + 0x1cdc) = iVar6;
    if (iVar6 == 0) {
      if (*(char *)(iVar8 + 0x44c) != '\0') {
        FUN_ram_48065e9c(iVar2 + iVar7 * 0x1d40 + 0x1c,7);
      }
    }
    else {
      if (uStack_44 != 0) {
        FUN_ram_4ff45158(iVar6,pppuStack_48,uStack_44);
        iVar6 = *(int *)(iVar8 + 0x1cdc);
      }
      iVar7 = DAT_ram_4ff5cbe8 + DAT_ram_4ff5cbdc * 0x1d40;
      if ((*(char *)(iVar7 + 0x44c) != '\0') && (*(char *)(iVar7 + 0x44c) != '\x06')) {
        *(int *)(iVar7 + 0x1ce0) = iVar6;
        *(uint *)(iVar7 + 0x1ce4) = uStack_44;
        *(undefined4 *)(iVar7 + 0x1ce8) = 0;
        puStack_2c = &LAB_ram_4802d3f2;
        iStack_30 = iVar7;
        FUN_ram_48066484(&DAT_ram_4ff5cb9c,uStack_4c,"application/json",iVar7,&LAB_ram_4802d3f2);
      }
    }
  }
  FUN_ram_4802a59e(apppuStack_40);
  return;
}


