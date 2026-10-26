/* Firmware entry: 0x4809f878 */

void FUN_ram_4809f878(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_3 + 6) == '\0') {
    return;
  }
  if (*(char *)(param_3 + 4) == '\x01') {
    FUN_ram_4ff3ec14(*param_1 + 0xb20,0xffffffff);
    iVar5 = *param_1;
    cVar4 = *(char *)(param_3 + 10);
    *(int *)(iVar5 + 0x1210) = *(int *)(iVar5 + 0x1210) + 1;
    *(undefined4 *)(iVar5 + 0x123c) = *(undefined4 *)(param_2 + 0x10);
    iVar2 = iVar5;
    if (cVar4 != '\0') {
      *(int *)(iVar5 + 0x1214) = *(int *)(iVar5 + 0x1214) + 1;
      uVar3 = FUN_ram_48025b94();
      cVar4 = *(char *)(param_3 + 0xb);
      *(undefined4 *)(iVar5 + 0x1240) = uVar3;
      if (cVar4 == '\0') {
        iVar2 = *param_1;
        *(int *)(iVar5 + 0x1218) = *(int *)(iVar5 + 0x1218) + 1;
      }
      else {
        *(int *)(iVar5 + 0x121c) = *(int *)(iVar5 + 0x121c) + 1;
        uVar3 = FUN_ram_48025b94();
        cVar4 = *(char *)(param_3 + 5);
        *(undefined4 *)(iVar5 + 0x1244) = uVar3;
        iVar2 = *param_1;
        if ((cVar4 == '\x03') &&
           (((*(int *)(param_3 + 0x10) == 0 && *(int *)(param_3 + 0x14) == 0 ||
             (*(int *)(param_3 + 0x18) == 0)) || (*(short *)(param_3 + 0x1c) == -1)))) {
          *(int *)(iVar5 + 0x1228) = *(int *)(iVar5 + 0x1228) + 1;
        }
      }
    }
    FUN_ram_4ff3ee10(iVar2 + 0xb20);
    iVar2 = FUN_ram_480409ae(param_2,0,0);
    if (iVar2 == 0) {
      return;
    }
    if (*(char *)(param_3 + 6) == '\0') {
      return;
    }
  }
  else {
    iVar2 = FUN_ram_480409ae(param_2,0,0);
    if (iVar2 == 0) {
      return;
    }
  }
  if (*(char *)(param_3 + 5) == '\0') {
    return;
  }
  FUN_ram_4ff3ec14(*param_1 + 0xb20,0xffffffff);
  iVar6 = *param_1;
  iVar5 = iVar2 * 0x48 + iVar6;
  *(int *)(iVar5 + 0xbe0) = *(int *)(iVar5 + 0xbe0) + 1;
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  *(int *)(iVar5 + 0xbe4) = *(int *)(iVar5 + 0xbe4) + 1;
  *(undefined4 *)(iVar5 + 0xc0c) = uVar3;
  uVar3 = FUN_ram_48025b94();
  cVar4 = *(char *)(param_3 + 5);
  *(undefined4 *)(iVar5 + 0xc10) = uVar3;
  cVar1 = *(char *)(param_3 + 7);
  if (cVar4 == '\x01') {
    *(int *)(iVar5 + 0xbe8) = *(int *)(iVar5 + 0xbe8) + 1;
    if (cVar1 == '\0') goto LAB_ram_4809f9a6;
LAB_ram_4809f9f4:
    iVar5 = iVar2 * 0x48 + iVar6;
    *(int *)(iVar5 + 0xbec) = *(int *)(iVar5 + 0xbec) + 1;
    uVar3 = FUN_ram_48025b94();
    cVar4 = *(char *)(param_3 + 5);
    *(undefined4 *)(iVar5 + 0xc14) = uVar3;
  }
  else if (cVar1 != '\0') goto LAB_ram_4809f9f4;
  if (cVar4 == '\x04') {
    iVar6 = iVar2 * 0x48 + iVar6;
    *(int *)(iVar6 + 0xbf4) = *(int *)(iVar6 + 0xbf4) + 1;
  }
  else if ((cVar4 == '\x03') &&
          (((*(int *)(param_3 + 0x10) == 0 && *(int *)(param_3 + 0x14) == 0 ||
            (*(int *)(param_3 + 0x18) == 0)) || (*(short *)(param_3 + 0x1c) == -1)))) {
    iVar6 = iVar2 * 0x48 + iVar6;
    *(int *)(iVar6 + 0xbf8) = *(int *)(iVar6 + 0xbf8) + 1;
  }
LAB_ram_4809f9a6:
  FUN_ram_4ff3ee10(*param_1 + 0xb20);
  return;
}


