/* Firmware entry: 0x480365be */

void FUN_ram_480365be(int param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = (char)*param_2;
  if (*(char *)(param_1 + 0x2c) == cVar1) {
    iVar3 = 0;
  }
  else if (*(char *)(param_1 + 0x35a4) == cVar1) {
    iVar3 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x6b1c) != cVar1) {
      return;
    }
    iVar3 = 2;
  }
  uVar4 = (uint)*(byte *)((int)param_2 + 2);
  if (*(char *)((int)param_2 + 1) != '\0') {
    uVar4 = uVar4 + 3;
  }
  if (uVar4 < 0x12) {
    iVar7 = iVar3 * 0x3578;
    bVar6 = 1;
    iVar5 = iVar7 + 0x88c + param_1;
    FUN_ram_4ff3ec14(iVar5,0xffffffff);
    iVar2 = uVar4 * 0x24 + iVar7 + param_1;
    if (*(uint *)(iVar2 + 0x5d4) == param_2[1]) {
      bVar6 = *(byte *)(iVar2 + 0x5ee) ^ *(byte *)((int)param_2 + 0x1e);
    }
    FUN_ram_4ff45158(uVar4 * 0x24 + param_1 + iVar7 + 0x5d0,param_2,0x23);
    iVar2 = iVar3 * 0x3578 + param_1;
    if ((*(char *)(iVar2 + 0x89a) != '\0') || (*(char *)(iVar2 + 0x895) == '\0')) {
      *(undefined1 *)(uVar4 * 0x24 + iVar3 * 0x3578 + param_1 + 0x5ee) = 0;
    }
    FUN_ram_4ff3ee10(iVar5);
    if (((bVar6 != 0) && (*(char *)((int)param_2 + 0x1e) != '\0')) &&
       (((*param_2 & 0xffffff) >> 8 == 0 ||
        ((*(char *)((int)param_2 + 1) == '\x01' && (*(char *)((int)param_2 + 0x22) == '\x04')))))) {
      cVar1 = (char)*param_2;
      if (*(char *)(param_1 + 0x2c) == cVar1) {
        iVar3 = 0;
      }
      else if (*(char *)(param_1 + 0x35a4) == cVar1) {
        iVar3 = 1;
      }
      else {
        if (*(char *)(param_1 + 0x6b1c) != cVar1) {
          return;
        }
        iVar3 = 2;
      }
      iVar2 = iVar3 * 0x3578 + 0x88c + param_1;
      FUN_ram_4ff3ec14(iVar2,0xffffffff);
      iVar3 = *(int *)(param_1 + iVar3 * 0x3578 + 0x580);
      FUN_ram_4ff3ee10(iVar2);
      if (iVar3 != 0) {
        FUN_ram_4ff3e004(iVar3,0,0,2,0);
        return;
      }
    }
  }
  return;
}


