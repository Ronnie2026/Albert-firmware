/* Firmware entry: 0x4802a5f0 */

undefined4 FUN_ram_4802a5f0(int *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 auStack_30 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0xd < param_2) {
    uVar2 = param_2 + 0x10 & 0xfffffff0;
    if (uVar2 < 0x300001) {
      if (*(char *)((int)param_1 + 0xf) < '\0') {
        iVar3 = 0;
        uVar6 = *(byte *)((int)param_1 + 0xf) & 0x7f;
      }
      else {
        uVar6 = param_1[2];
        iVar3 = *param_1;
      }
      iVar3 = thunk_FUN_ram_4ff20790(iVar3,uVar2);
      if (iVar3 != 0) {
        if (*(char *)((int)param_1 + 0xf) < '\0') {
          FUN_ram_4ff4522c(iVar3,param_1,0xf);
          uVar4 = 0xf;
        }
        else {
          uVar4 = param_1[1] + 1;
        }
        if (uVar4 < uVar2) {
          memset((void *)(uVar4 + iVar3),0,uVar2 - uVar4);
        }
        *param_1 = iVar3;
        param_1[1] = uVar2 - 1;
        param_1[2] = uVar6;
        *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x7f;
        *(undefined1 *)(iVar3 + uVar6) = 0;
        return 1;
      }
    }
    return 0;
  }
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    bVar1 = *(byte *)((int)param_1 + 0xf);
    uVar2 = bVar1 | 0xffffff80;
    *(char *)((int)param_1 + 0xf) = (char)uVar2;
    uVar6 = bVar1 & 0x7f;
    if (-1 < (int)uVar2) {
      param_1[2] = uVar6;
      if (*param_1 == 0) {
        return 1;
      }
      *(undefined1 *)(*param_1 + uVar6) = 0;
      return 1;
    }
  }
  else {
    iVar3 = *param_1;
    if (iVar3 != 0) {
      FUN_ram_4ff45158(auStack_30,iVar3,param_2);
      thunk_FUN_ram_4ff209c6(iVar3);
      if (*(char *)((int)param_1 + 0xf) < '\0') {
        uVar2 = *(byte *)((int)param_1 + 0xf) & 0x7f;
      }
      else {
        uVar2 = param_1[2];
      }
      uVar6 = *(byte *)((int)param_1 + 0xf) | 0xffffff80;
      *(char *)((int)param_1 + 0xf) = (char)uVar6;
      piVar5 = param_1;
      if (-1 < (int)uVar6) {
        piVar5 = (int *)*param_1;
      }
      FUN_ram_4ff45158(piVar5,auStack_30,param_2);
      if (-1 < *(char *)((int)param_1 + 0xf)) {
        param_1[2] = uVar2;
        if (*param_1 == 0) {
          return 1;
        }
        *(undefined1 *)(*param_1 + uVar2) = 0;
        return 1;
      }
      *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x80 | (byte)uVar2 & 0x7f;
      *(undefined1 *)(uVar2 + (int)param_1) = 0;
      return 1;
    }
    uVar6 = param_1[2];
    uVar2 = *(byte *)((int)param_1 + 0xf) | 0xffffff80;
    *(char *)((int)param_1 + 0xf) = (char)uVar2;
    if (-1 < (int)uVar2) {
      return 1;
    }
  }
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x80 | (byte)uVar6 & 0x7f;
  *(undefined1 *)(uVar6 + (int)param_1) = 0;
  return 1;
}


