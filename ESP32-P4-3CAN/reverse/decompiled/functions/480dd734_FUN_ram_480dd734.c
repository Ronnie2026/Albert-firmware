/* Firmware entry: 0x480dd734 */

void FUN_ram_480dd734(int *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 local_c4;
  undefined4 auStack_c0 [42];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_1;
  FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
  puVar9 = (undefined4 *)(iVar2 + 0xb38);
  puVar7 = &local_c4;
  do {
    uVar3 = puVar9[1];
    uVar4 = puVar9[2];
    uVar6 = puVar9[3];
    *puVar7 = *puVar9;
    puVar7[1] = uVar3;
    puVar7[2] = uVar4;
    puVar7[3] = uVar6;
    puVar9 = puVar9 + 4;
    puVar7 = puVar7 + 4;
  } while (puVar9 != (undefined4 *)(iVar2 + 0xbd8));
  *puVar7 = *puVar9;
  FUN_ram_4ff3ee10(iVar2 + 0xb18);
  if (param_2 != 2) {
    if (local_c4._1_1_ != '\f') {
      return;
    }
    if ((char)param_1[0x51] == '\0') {
      return;
    }
    if (*(byte *)((int)param_1 + 0x12d) != param_2) {
      return;
    }
  }
  FUN_ram_480dd0e4(param_1);
  param_1[0x19] = 0x609;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((int)param_1 + 0xa2) = 0;
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  param_1[0x21] = 0;
  *(undefined1 *)((int)param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 1;
  FUN_ram_48025ba6();
  if ((*(char *)((int)param_1 + 0x215) == '\0') && (*(char *)((int)param_1 + 0x216) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x215) = 0;
    *(undefined1 *)((int)param_1 + 0x219) = 0;
    *(undefined1 *)((int)param_1 + 0x21b) = 0;
    param_1[0x88] = 0;
    param_1[0x87] = 0;
    *(undefined2 *)(param_1 + 0x8c) = 0;
    *(undefined2 *)((int)param_1 + 0x216) = 0;
    if (*(char *)((int)param_1 + 0x217) == '\0') goto LAB_ram_480dd832;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x215) = 0;
    *(undefined2 *)((int)param_1 + 0x216) = 0;
    *(undefined1 *)((int)param_1 + 0x219) = 0;
    *(undefined1 *)((int)param_1 + 0x21b) = 0;
    param_1[0x88] = 0;
    param_1[0x87] = 0;
    *(undefined2 *)(param_1 + 0x8c) = 0;
  }
  *(undefined1 *)(param_1 + 0x92) = 4;
  param_1[0x90] = param_1[0x90] + 1;
LAB_ram_480dd832:
  *(undefined2 *)((int)param_1 + 0x212) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined2 *)((int)param_1 + 0x22a) = 0;
  FUN_ram_48025ba6();
  if (param_1[0xf9] != 0) {
    param_1[0x102] = param_1[0xf9];
  }
  param_1[0xd6] = 0x10a0005;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  *(undefined2 *)(param_1 + 0xfb) = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  *(undefined1 *)((int)param_1 + 0x35d) = 0;
  *(undefined1 *)((int)param_1 + 0x35e) = 0;
  param_1[0xd8] = 0;
  *(undefined2 *)(param_1 + 0xd9) = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined1 *)((int)param_1 + 0x366) = 0;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  param_1[0xe6] = 0;
  *(undefined2 *)(param_1 + 0xe7) = 0;
  param_1[0xe8] = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)((int)param_1 + 0x332) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined2 *)(param_1 + 0xcf) = 0;
  param_1[0xee] = 0;
  *(undefined1 *)((int)param_1 + 0x371) = 0;
  iVar2 = param_1[0x1c5] + 1;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  param_1[0x1c5] = iVar2;
  iVar2 = param_1[0x1c6] + 1;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  param_1[0x1c6] = iVar2;
  iVar2 = param_1[0x1c7] + 1;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  param_1[0x1c7] = iVar2;
  param_1[0x93] = 0;
  param_1[99] = 0;
  *(undefined2 *)(param_1 + 0xa1) = 0;
  *(undefined2 *)(param_1 + 0x14b) = 0;
  if (((param_1[0x6e] == 0) && ((char)param_1[0x79] == '\0')) &&
     (*(char *)((int)param_1 + 0x9e) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x1e5) = 0;
    FUN_ram_48025ba6();
    if (*(char *)((int)param_1 + 0x65) == '\v') {
      FUN_ram_4805c6b0(*param_1,2,2,7);
    }
    puVar5 = (uint *)param_1[3];
    fence();
    uVar8 = *puVar5;
    do {
      uVar10 = uVar8 & 0xfffcffff;
      if (((uVar8 >> 0x10 & 3) != 1) || ((uVar8 & 0xffff) == 0)) goto LAB_ram_480dd980;
      bVar1 = *puVar5 != uVar8;
      uVar8 = *puVar5;
    } while (bVar1);
    *puVar5 = uVar10 - 1;
LAB_ram_480dd980:
    if ((char)param_1[0xad] == '\0') {
      return;
    }
    if (param_1[0x93] != 0) {
      return;
    }
    if ((char)param_1[0xa1] != '\0') {
      return;
    }
  }
  else if ((char)param_1[0xad] == '\0') {
    return;
  }
  if ((*(char *)((int)param_1 + 0x2b5) == '\0') && (*(char *)((int)param_1 + 0x285) == '\0')) {
    *(undefined1 *)(param_1 + 0xad) = 0;
    FUN_ram_480553f6(param_1[3]);
    return;
  }
  return;
}


