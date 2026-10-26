/* Firmware entry: 0x4813b9fa */

undefined4 FUN_ram_4813b9fa(int param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  short sVar9;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0xfffffffa;
  }
  if (param_3 == (uint *)0x0) {
    return 0xfffffffa;
  }
  if (param_4 == 0) {
    return 0xfffffffa;
  }
  if (param_5 == 0) {
    return 0xfffffffa;
  }
  if (*(char *)(param_1 + 0x14) == '.') {
    bVar1 = *(byte *)(param_1 + 0x39);
    cVar2 = (char)param_3[5];
  }
  else {
    if (*(char *)(param_5 + 0x14) != *(char *)(param_1 + 0x14)) {
      return 0xfffffffa;
    }
    cVar2 = (char)param_3[5];
    if (*(char *)(param_5 + 0x14) != cVar2) {
      return 0xfffffffa;
    }
    bVar1 = *(byte *)(param_1 + 0x39);
  }
  if (cVar2 == '\x06') {
    if ((bVar1 & 2) != 0) {
      if (*(ushort *)(param_2 + 10) < 0x28) {
        return 0xfffffffa;
      }
      uVar6 = FUN_ram_48149080(param_2,param_5,0,0,0,0,param_4);
      return uVar6;
    }
    sVar9 = 0x28;
  }
  else {
    if ((bVar1 & 2) != 0) {
      if (*(ushort *)(param_2 + 10) < 0x14) {
        return 0xfffffffa;
      }
      uVar6 = FUN_ram_48147772(param_2,param_5,0,0,0,0,param_4);
      return uVar6;
    }
    sVar9 = 0x14;
  }
  if ((ushort)(*(ushort *)(param_2 + 8) + sVar9) < *(ushort *)(param_2 + 8)) {
    return 0xffffffff;
  }
  iVar5 = FUN_ram_4813aab0(param_2,sVar9);
  if (iVar5 == 0) {
    iVar7 = FUN_ram_4813ab98(param_2,sVar9);
    iVar5 = param_2;
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/raw.c",0x1e3,"raw_sendto_if_src",
                       "Can\'t restore header we just removed!");
    }
  }
  else {
    iVar5 = FUN_ram_4813ad9a(0x36,0,0x280);
    if (iVar5 == 0) {
      return 0xffffffff;
    }
    if (*(short *)(param_2 + 8) != 0) {
      FUN_ram_4813b17c(iVar5,param_2);
    }
  }
  if ((*(byte *)(param_1 + 0x39) & 4) == 0) {
    if ((char)param_3[5] == '\x06') {
      if (*(char *)(param_1 + 0x46) != '\0') goto LAB_ram_4813bc08;
LAB_ram_4813bbd2:
      if ((char)*param_3 == -1) {
LAB_ram_4813bbc6:
        uVar3 = *(undefined1 *)(param_1 + 0x3b);
      }
      else {
LAB_ram_4813bbde:
        uVar3 = *(undefined1 *)(param_1 + 0x33);
      }
      uVar6 = FUN_ram_48149080(iVar5,param_5,param_3,uVar3,*(undefined1 *)(param_1 + 0x32),
                               *(undefined1 *)(param_1 + 0x38),param_4);
      goto LAB_ram_4813bad0;
    }
LAB_ram_4813bb8c:
    if ((*param_3 & 0xf0) != 0xe0) goto LAB_ram_4813bb9a;
LAB_ram_4813bab6:
    uVar3 = *(undefined1 *)(param_1 + 0x3b);
  }
  else {
    if ((char)param_3[5] == '\x06') {
      if ((*param_3 & 0xff) != 0xff) {
        if (*(char *)(param_1 + 0x46) != '\0') goto LAB_ram_4813bc08;
        goto LAB_ram_4813bbde;
      }
      *(byte *)(iVar5 + 0xd) = *(byte *)(iVar5 + 0xd) | 4;
      if (*(char *)(param_1 + 0x46) == '\0') goto LAB_ram_4813bbc6;
LAB_ram_4813bc08:
      uVar4 = FUN_ram_481519fc(param_2,*(undefined1 *)(param_1 + 0x38),*(undefined2 *)(param_2 + 8),
                               param_5,param_3);
      if ((uint)*(ushort *)(param_2 + 10) <= *(ushort *)(param_1 + 0x44) + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/raw.c",0x202,"raw_sendto_if_src",
                         "Checksum must fit into first pbuf");
      }
      uStack_22 = (undefined1)uVar4;
      uStack_21 = (undefined1)((ushort)uVar4 >> 8);
      puVar8 = (undefined1 *)(*(int *)(param_2 + 4) + (uint)*(ushort *)(param_1 + 0x44));
      *puVar8 = uStack_22;
      puVar8[1] = uStack_21;
      if ((char)param_3[5] == '\x06') goto LAB_ram_4813bbd2;
      goto LAB_ram_4813bb8c;
    }
    if ((*param_3 & 0xf0) == 0xe0) {
      *(byte *)(iVar5 + 0xd) = *(byte *)(iVar5 + 0xd) | 4;
      goto LAB_ram_4813bab6;
    }
LAB_ram_4813bb9a:
    uVar3 = *(undefined1 *)(param_1 + 0x33);
  }
  uVar6 = FUN_ram_48147772(iVar5,param_5,param_3,uVar3,*(undefined1 *)(param_1 + 0x32),
                           *(undefined1 *)(param_1 + 0x38),param_4);
LAB_ram_4813bad0:
  if (iVar5 != param_2) {
    FUN_ram_4813ac74(iVar5);
  }
  return uVar6;
}


