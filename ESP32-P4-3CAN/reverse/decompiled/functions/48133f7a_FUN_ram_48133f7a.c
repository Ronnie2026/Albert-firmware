/* Firmware entry: 0x48133f7a */

undefined4
FUN_ram_48133f7a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,char *param_7,uint *param_8,undefined2 param_9,
                undefined4 *param_10,char param_11)

{
  undefined2 uVar1;
  size_t sVar2;
  void *__s;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  size_t __n;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = param_1;
  if ((((param_8 != (uint *)0x0) && (param_8[1] == 10)) && ((*param_8 & 0x10) != 0)) &&
     (param_6 == 0)) {
    param_5 = 0;
    param_6 = 6;
    param_3 = 0xffff0000;
    param_2 = 0;
    uVar4 = 0;
    param_4 = param_1;
  }
  if (param_7 == (char *)0x0) {
    __s = (void *)FUN_ram_4813956e(0xd);
    sVar2 = 0;
    __n = 0x3c;
  }
  else {
    sVar2 = strlen(param_7);
    if (0x100 < sVar2) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xca;
    }
    __s = (void *)FUN_ram_4813956e(0xd);
    __n = sVar2 + 0x3d;
  }
  if (__s == (void *)0x0) {
    uVar4 = 0xcb;
  }
  else {
    memset(__s,0,__n);
    if (param_6 == 6) {
      *(undefined **)((int)__s + 0x20) = &mhpmcounter28;
      *(undefined4 *)((int)__s + 0x28) = uVar4;
      *(undefined4 *)((int)__s + 0x2c) = param_2;
      *(undefined4 *)((int)__s + 0x30) = param_3;
      *(undefined4 *)((int)__s + 0x34) = param_4;
      uVar1 = FUN_ram_48137fc8(param_9);
      *(undefined2 *)((int)__s + 0x22) = uVar1;
      *(undefined4 *)((int)__s + 0x38) = param_5;
      uVar4 = 10;
    }
    else {
      *(undefined2 *)((int)__s + 0x20) = 0x210;
      *(undefined4 *)((int)__s + 0x24) = uVar4;
      uVar1 = FUN_ram_48137fc8(param_9);
      *(undefined2 *)((int)__s + 0x22) = uVar1;
      uVar4 = 2;
    }
    *(undefined4 *)((int)__s + 4) = uVar4;
    if (param_8 != (uint *)0x0) {
      uVar5 = param_8[3];
      *(uint *)((int)__s + 8) = param_8[2];
      *(uint *)((int)__s + 0xc) = uVar5;
      if (((param_11 == '\0') && (param_7 != (char *)0x0)) && ((*param_8 & 2) != 0)) {
        *(int *)((int)__s + 0x18) = (int)__s + 0x3c;
        iVar3 = FUN_ram_4ff45158((int)__s + 0x3c,param_7,sVar2);
        *(undefined1 *)(iVar3 + sVar2) = 0;
      }
    }
    *(undefined4 *)((int)__s + 0x10) = 0x1c;
    *(int *)((int)__s + 0x14) = (int)__s + 0x20;
    uVar4 = 0;
    *param_10 = __s;
  }
  return uVar4;
}


