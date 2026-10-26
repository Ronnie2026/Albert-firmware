/* Firmware entry: 0x4800d6ea */

undefined4 FUN_ram_4800d6ea(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_2 == (int *)0x0) {
    return 0x102;
  }
  if (((((((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x28) == 0)) &&
         (*(int *)(param_1 + 0x2c) == 0)) &&
        ((*(int *)(param_1 + 0x30) == 0 && (*(int *)(param_1 + 0x34) == 0)))) &&
       (*(int *)(param_1 + 0x38) == 0)) &&
      (((*(int *)(param_1 + 0x3c) == 0 && (*(int *)(param_1 + 0x40) == 0)) &&
       ((*(int *)(param_1 + 0x44) == 0 &&
        (((*(int *)(param_1 + 0x48) == 0 && (*(int *)(param_1 + 0x4c) == 0)) &&
         (*(int *)(param_1 + 0x50) == 0)))))))) &&
     (((*(int *)(param_1 + 0x60) == 0 && (*(int *)(param_1 + 100) == 0)) &&
      ((*(int *)(param_1 + 0x68) == 0 && (*(int *)(param_1 + 0x6c) == 0)))))) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_ram_4ff206d8(0x40,0x1000);
    if (iVar1 == 0) {
      iVar3 = 0;
      iVar2 = 0;
      goto LAB_ram_4800d95c;
    }
  }
  if ((((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x74) == 0)) &&
      ((*(int *)(param_1 + 0x78) == 0 &&
       (((*(int *)(param_1 + 0x7c) == 0 && (*(int *)(param_1 + 0x80) == 0)) &&
        (*(int *)(param_1 + 0x84) == 0)))))) && (*(int *)(param_1 + 0x88) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_ram_4ff206d8(0x1c,0x1000);
    if (iVar2 == 0) {
      iVar3 = 0;
      goto LAB_ram_4800d95c;
    }
  }
  if (((*(int *)(param_1 + 0x8c) == 0) && (*(int *)(param_1 + 0x90) == 0)) &&
     (((*(int *)(param_1 + 0x94) == 0 &&
       ((*(int *)(param_1 + 0x98) == 0 && (*(int *)(param_1 + 0x9c) == 0)))) &&
      (*(int *)(param_1 + 0xa0) == 0)))) {
    iVar3 = 0;
    if (iVar1 == 0) {
      if (iVar2 != 0) {
LAB_ram_4800d7b8:
        uStack_5c = *(undefined4 *)(param_1 + 0x74);
        uStack_58 = *(undefined4 *)(param_1 + 0x78);
        uStack_54 = *(undefined4 *)(param_1 + 0x7c);
        uStack_50 = *(undefined4 *)(param_1 + 0x80);
        uStack_4c = *(undefined4 *)(param_1 + 0x84);
        uStack_48 = *(undefined4 *)(param_1 + 0x88);
        local_60 = *(undefined4 *)(param_1 + 0x70);
        FUN_ram_4ff45158(iVar2,&local_60,0x1c);
        goto LAB_ram_4800d7ec;
      }
    }
    else {
LAB_ram_4800d754:
      local_60 = *(undefined4 *)(param_1 + 0x24);
      uStack_5c = *(undefined4 *)(param_1 + 0x28);
      uStack_58 = *(undefined4 *)(param_1 + 0x2c);
      uStack_54 = *(undefined4 *)(param_1 + 0x30);
      uStack_50 = *(undefined4 *)(param_1 + 0x34);
      uStack_44 = *(undefined4 *)(param_1 + 0x40);
      uStack_40 = *(undefined4 *)(param_1 + 0x44);
      uStack_3c = *(undefined4 *)(param_1 + 0x48);
      uStack_4c = *(undefined4 *)(param_1 + 0x38);
      uStack_48 = *(undefined4 *)(param_1 + 0x3c);
      uStack_38 = *(undefined4 *)(param_1 + 0x4c);
      iStack_34 = *(int *)(param_1 + 0x50);
      iStack_30 = *(int *)(param_1 + 0x60);
      iStack_2c = *(int *)(param_1 + 100);
      uStack_28 = *(undefined4 *)(param_1 + 0x68);
      uStack_24 = *(undefined4 *)(param_1 + 0x6c);
      FUN_ram_4ff45158(iVar1,&local_60,0x40);
      if (iVar2 != 0) goto LAB_ram_4800d7b8;
LAB_ram_4800d7ec:
      if (iVar3 != 0) goto LAB_ram_4800d8b4;
    }
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_ram_4ff206d8(0x18,0x1000);
    if (iVar3 == 0) goto LAB_ram_4800d95c;
    if (iVar1 != 0) goto LAB_ram_4800d754;
    if (iVar2 != 0) goto LAB_ram_4800d7b8;
LAB_ram_4800d8b4:
    uStack_5c = *(undefined4 *)(param_1 + 0x90);
    uStack_58 = *(undefined4 *)(param_1 + 0x94);
    uStack_54 = *(undefined4 *)(param_1 + 0x98);
    uStack_50 = *(undefined4 *)(param_1 + 0x9c);
    uStack_4c = *(undefined4 *)(param_1 + 0xa0);
    local_60 = *(undefined4 *)(param_1 + 0x8c);
    FUN_ram_4ff45158(iVar3,&local_60,0x18);
  }
  local_60 = *(undefined4 *)(param_1 + 4);
  uStack_5c = *(undefined4 *)(param_1 + 8);
  uStack_58 = *(undefined4 *)(param_1 + 0xc);
  uStack_54 = *(undefined4 *)(param_1 + 0x10);
  uStack_50 = *(undefined4 *)(param_1 + 0x14);
  uStack_4c = *(undefined4 *)(param_1 + 0x18);
  uStack_48 = *(undefined4 *)(param_1 + 0x1c);
  uStack_44 = *(undefined4 *)(param_1 + 0x20);
  uStack_40 = *(undefined4 *)(param_1 + 0x54);
  uStack_3c = *(undefined4 *)(param_1 + 0x58);
  uStack_38 = *(undefined4 *)(param_1 + 0x5c);
  iStack_34 = iVar1;
  iStack_30 = iVar2;
  iStack_2c = iVar3;
  iVar4 = FUN_ram_4ff206d8(0x38,0x1000);
  if (iVar4 != 0) {
    FUN_ram_4ff45158(iVar4,&local_60,0x38);
    *param_2 = iVar4;
    return 0;
  }
LAB_ram_4800d95c:
  thunk_FUN_ram_4ff209c6(iVar1);
  thunk_FUN_ram_4ff209c6(iVar2);
  thunk_FUN_ram_4ff209c6(iVar3);
  return 0x101;
}


