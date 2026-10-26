/* Firmware entry: 0x4813d344 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_ram_4813d344(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  void *__s;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  __s = (void *)FUN_ram_4813956e(2);
  cVar8 = (char)param_1;
  iVar2 = DAT_ram_4ff6e1c4;
  if (__s != (void *)0x0) goto LAB_ram_4813d358;
  while (iVar7 = iVar2, iVar2 != 0) {
    while( true ) {
      iVar2 = *(int *)(iVar7 + 0x34);
      if ((*(ushort *)(iVar7 + 0x46) & 8) == 0) break;
      *(ushort *)(iVar7 + 0x46) = *(ushort *)(iVar7 + 0x46) & 0xfff7;
      FUN_ram_4813c0ca();
      iVar7 = iVar2;
      if (iVar2 == 0) goto LAB_ram_4813d40e;
    }
  }
LAB_ram_4813d40e:
  if (DAT_ram_4ff6e1c0 != 0) {
    uVar4 = 0;
    iVar2 = 0;
    iVar7 = DAT_ram_4ff6e1c0;
    do {
      uVar6 = _DAT_ram_4ff6e1d0 - *(int *)(iVar7 + 0x4c);
      if (uVar4 <= uVar6) {
        iVar2 = iVar7;
        uVar4 = uVar6;
      }
      iVar7 = *(int *)(iVar7 + 0x34);
    } while (iVar7 != 0);
    if (iVar2 != 0) {
      FUN_ram_4813cf92(iVar2,1);
    }
  }
  __s = (void *)FUN_ram_4813956e(2);
  if (__s != (void *)0x0) goto LAB_ram_4813d358;
  FUN_ram_4813d304(9);
  __s = (void *)FUN_ram_4813956e(2);
  if (__s != (void *)0x0) goto LAB_ram_4813d358;
  FUN_ram_4813d304(8);
  __s = (void *)FUN_ram_4813956e(2);
  if (__s != (void *)0x0) goto LAB_ram_4813d358;
  FUN_ram_4813d304(6);
  __s = (void *)FUN_ram_4813956e(2);
  if (__s != (void *)0x0) goto LAB_ram_4813d358;
  FUN_ram_4813d304(5);
  __s = (void *)FUN_ram_4813956e(2);
  if (__s != (void *)0x0) goto LAB_ram_4813d358;
  if (cVar8 < '\0') {
    param_1 = 0x7f;
LAB_ram_4813d49e:
    uVar4 = param_1 - 1U & 0xff;
    uVar6 = 0;
    iVar2 = 0;
    iVar7 = DAT_ram_4ff6e1c4;
    while (iVar7 != 0) {
      uVar5 = (uint)*(byte *)(iVar7 + 0x40);
      if (uVar5 < uVar4) {
        iVar3 = *(int *)(iVar7 + 0x4c);
LAB_ram_4813d4be:
        uVar6 = _DAT_ram_4ff6e1d0 - iVar3;
        iVar2 = iVar7;
        uVar4 = uVar5;
LAB_ram_4813d4c6:
        iVar7 = *(int *)(iVar7 + 0x34);
      }
      else {
        if (uVar5 != uVar4) goto LAB_ram_4813d4c6;
        iVar3 = *(int *)(iVar7 + 0x4c);
        if (uVar6 <= (uint)(_DAT_ram_4ff6e1d0 - iVar3)) goto LAB_ram_4813d4be;
        iVar7 = *(int *)(iVar7 + 0x34);
      }
    }
    if (iVar2 != 0) {
      FUN_ram_4813cf92(iVar2,1);
    }
  }
  else if (param_1 != 0) goto LAB_ram_4813d49e;
  __s = (void *)FUN_ram_4813956e(2);
  if (__s == (void *)0x0) {
    return (void *)0x0;
  }
LAB_ram_4813d358:
  memset(__s,0,0xf0);
  iVar2 = _DAT_ram_4ff6e1d0;
  uVar1 = DAT_ram_4ff6e1bc;
  *(char *)((int)__s + 0x40) = cVar8;
  *(undefined2 *)((int)__s + 0xb0) = 0xfffe;
  *(undefined4 *)((int)__s + 0x54) = 0xfffefffe;
  *(undefined1 *)((int)__s + 0x33) = 0x40;
  *(undefined4 *)((int)__s + 0x7c) = 0x218ffff;
  *(int *)((int)__s + 0x4c) = iVar2;
  *(undefined1 *)((int)__s + 0x4a) = uVar1;
  *(undefined4 *)((int)__s + 0x94) = 0xfffe0001;
  *(code **)((int)__s + 0xd0) = FUN_ram_4813d7c6;
  *(undefined4 *)((int)__s + 0xe0) = 7200000;
  *(undefined4 *)((int)__s + 0xe4) = 75000;
  *(undefined4 *)((int)__s + 0xe8) = 9;
  *(undefined2 *)((int)__s + 0x8c) = 3;
  *(undefined2 *)((int)__s + 0x8a) = 3;
  return __s;
}


