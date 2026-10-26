/* Firmware entry: 0x480465d0 */

undefined1 FUN_ram_480465d0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined1 uVar8;
  undefined1 auStack_34 [9];
  undefined1 uStack_2b;
  char cStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((*(char *)(param_1 + 0x51) != '\0') || (cVar1 = *(char *)(param_1 + 0x38), cVar1 == '\x01')
        ) || ((cVar2 = *(char *)(param_1 + 10), cVar2 != '\0' &&
              (FUN_ram_48040862(auStack_34,cVar2), cStack_24 == '\x02')))) ||
      ((*(char *)(param_2 + 0x51) != '\0' || (cVar3 = *(char *)(param_2 + 0x38), cVar3 == '\x01'))))
     || ((cVar4 = *(char *)(param_2 + 10), cVar4 != '\0' &&
         (FUN_ram_48040862(auStack_34,cVar4), cStack_24 == '\x02')))) {
    return 0;
  }
  if (cVar1 != '\0' || cVar3 != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x1d) != *(char *)(param_2 + 0x1d)) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 != *(int *)(param_2 + 0x10)) {
    return 0;
  }
  cVar1 = *(char *)(param_2 + 0x14);
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (cVar1 != '\0') {
      if (iVar7 == 0x3fd) {
        return 0;
      }
      if (iVar7 == 0x3c2) {
        return 0;
      }
    }
  }
  else {
    if (iVar7 == 0x3fd) {
      if (cVar1 == '\0') {
        return 0;
      }
      bVar5 = *(byte *)(param_1 + 0x15) & 7;
      bVar6 = *(byte *)(param_2 + 0x15) & 7;
    }
    else {
      if (iVar7 != 0x3c2) goto LAB_ram_480466d4;
      if (cVar1 == '\0') {
        return 0;
      }
      bVar5 = *(byte *)(param_1 + 0x15) & 3;
      bVar6 = *(byte *)(param_2 + 0x15) & 3;
    }
    if (bVar6 != bVar5) {
      return 0;
    }
  }
LAB_ram_480466d4:
  uVar8 = 0;
  if (((*(char *)(param_1 + 0x34) == *(char *)(param_2 + 0x34)) && (cVar2 == cVar4)) &&
     (uVar8 = 1, cVar2 != '\0')) {
    FUN_ram_48040862(auStack_34,cVar2);
    uVar8 = uStack_2b;
  }
  return uVar8;
}


